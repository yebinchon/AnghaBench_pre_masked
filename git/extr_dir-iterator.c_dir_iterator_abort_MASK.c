
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int buf; } ;
struct TYPE_4__ {TYPE_2__ path; } ;
struct dir_iterator_level {int levels_nr; TYPE_1__ base; struct dir_iterator_level* levels; int prefix_len; scalar_t__ dir; } ;
struct dir_iterator_int {int levels_nr; TYPE_1__ base; struct dir_iterator_int* levels; int prefix_len; scalar_t__ dir; } ;
struct dir_iterator {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct dir_iterator_level*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(struct dir_iterator *VAR_2)
{
 struct dir_iterator_int *VAR_3 = (struct dir_iterator_int *)VAR_2;

 for (; VAR_3->levels_nr; VAR_3->levels_nr--) {
  struct dir_iterator_level *VAR_4 =
   &VAR_3->levels[VAR_3->levels_nr - 1];

  if (VAR_4->dir && FUNC_0(VAR_4->dir)) {
   int VAR_5 = VAR_1;
   FUNC_3(&VAR_3->base.path, VAR_4->prefix_len);
   VAR_1 = VAR_5;
   FUNC_4("error closing directory '%s'",
          VAR_3->base.path.buf);
  }
 }

 FUNC_1(VAR_3->levels);
 FUNC_2(&VAR_3->base.path);
 FUNC_1(VAR_3);
 return VAR_0;
}
