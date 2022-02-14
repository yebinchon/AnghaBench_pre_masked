
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dir_iterator_level {int * dir; } ;
struct TYPE_3__ {int buf; } ;
struct TYPE_4__ {TYPE_1__ path; } ;
struct dir_iterator_int {int levels_nr; TYPE_2__ base; struct dir_iterator_level* levels; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct dir_iterator_int *VAR_0)
{
 struct dir_iterator_level *VAR_1 =
  &VAR_0->levels[VAR_0->levels_nr - 1];

 if (VAR_1->dir && FUNC_0(VAR_1->dir))
  FUNC_1("error closing directory '%s'",
         VAR_0->base.path.buf);
 VAR_1->dir = ((void*)0);

 return --VAR_0->levels_nr;
}
