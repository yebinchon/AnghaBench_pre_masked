
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_status_options ;
typedef int git_repository ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ,int*) ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
    git_repository *VAR_6 = FUNC_2("renames");
 git_status_options VAR_7 = VAR_0;
 int VAR_8;

 VAR_7.flags = VAR_3 |
  VAR_1 |
  VAR_2 |
  VAR_4;

 VAR_8 = 0;
 FUNC_1(
  FUNC_4(VAR_6, &VAR_7, VAR_5, &VAR_8) );
 FUNC_0(0, VAR_8);

 FUNC_3(FUNC_5("renames/untimely.txt"));

 VAR_8 = 0;
 FUNC_1(
  FUNC_4(VAR_6, &VAR_7, VAR_5, &VAR_8) );
 FUNC_0(1, VAR_8);
}
