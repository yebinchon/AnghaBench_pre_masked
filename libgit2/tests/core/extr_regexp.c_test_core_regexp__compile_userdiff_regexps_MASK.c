
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int words; int flags; int fns; } ;
typedef TYPE_1__ git_diff_driver_definition ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

void FUNC_4(void)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {
  git_diff_driver_definition VAR_3 = VAR_0[VAR_2];

  FUNC_1(FUNC_2(&VAR_1, VAR_3.fns, VAR_3.flags));
  FUNC_3(&VAR_1);

  FUNC_1(FUNC_2(&VAR_1, VAR_3.words, 0));
  FUNC_3(&VAR_1);
 }
}
