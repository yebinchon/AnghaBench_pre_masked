
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dir_iterator_level {int prefix_len; int dir; } ;
struct TYPE_4__ {int len; int * buf; } ;
struct TYPE_3__ {TYPE_2__ path; } ;
struct dir_iterator_int {scalar_t__ levels_nr; TYPE_1__ base; struct dir_iterator_level* levels; int levels_alloc; } ;


 int FUNC_0 (struct dir_iterator_level*,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,char) ;
 int FUNC_4 (char*,int *) ;

__attribute__((used)) static int FUNC_5(struct dir_iterator_int *VAR_2)
{
 struct dir_iterator_level *VAR_3;

 FUNC_0(VAR_2->levels, VAR_2->levels_nr + 1, VAR_2->levels_alloc);
 VAR_3 = &VAR_2->levels[VAR_2->levels_nr++];

 if (!FUNC_1(VAR_2->base.path.buf[VAR_2->base.path.len - 1]))
  FUNC_3(&VAR_2->base.path, '/');
 VAR_3->prefix_len = VAR_2->base.path.len;

 VAR_3->dir = FUNC_2(VAR_2->base.path.buf);
 if (!VAR_3->dir) {
  int VAR_4 = VAR_1;
  if (VAR_1 != VAR_0) {
   FUNC_4("error opening directory '%s'",
          VAR_2->base.path.buf);
  }
  VAR_2->levels_nr--;
  VAR_1 = VAR_4;
  return -1;
 }

 return 0;
}
