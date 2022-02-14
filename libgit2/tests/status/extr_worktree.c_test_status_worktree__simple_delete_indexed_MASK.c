
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ git_status_options ;
typedef int git_status_list ;
typedef int git_repository ;
struct TYPE_6__ {int status; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,TYPE_1__*) ;
 int FUNC_9 (char*) ;

void FUNC_10(void)
{
 git_repository *VAR_6 = FUNC_3("renames");
 git_status_options VAR_7 = VAR_0;
 git_status_list *VAR_8;

 VAR_7.flags = VAR_3 |
  VAR_1 |
  VAR_2 |
  VAR_4;

 FUNC_2(FUNC_8(&VAR_8, VAR_6, &VAR_7));
 FUNC_1(0, FUNC_6(VAR_8));
 FUNC_7(VAR_8);

 FUNC_4(FUNC_9("renames/untimely.txt"));

 FUNC_2(FUNC_8(&VAR_8, VAR_6, &VAR_7));
 FUNC_1(1, FUNC_6(VAR_8));
 FUNC_0(
  VAR_5, FUNC_5(VAR_8, 0)->status);
 FUNC_7(VAR_8);
}
