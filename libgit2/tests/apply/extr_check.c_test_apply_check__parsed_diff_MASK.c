
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_diff ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_apply_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 git_diff *VAR_5;
 git_apply_options VAR_6 = VAR_3;

 VAR_6.flags |= VAR_1;
 FUNC_0(FUNC_3(&VAR_5,
  VAR_0, FUNC_4(VAR_0)));
 FUNC_0(FUNC_1(VAR_4, VAR_5, VAR_2, &VAR_6));

 FUNC_5(VAR_4);
 FUNC_6(VAR_4);

 FUNC_2(VAR_5);
}
