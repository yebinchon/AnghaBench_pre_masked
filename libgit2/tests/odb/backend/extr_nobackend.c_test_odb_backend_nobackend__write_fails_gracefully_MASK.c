
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_odb ;
struct TYPE_3__ {int message; } ;
typedef TYPE_1__ git_error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,char*,int,int ) ;
 int FUNC_5 (int **,int ) ;

void FUNC_6(void)
{
 git_oid VAR_2;
 git_odb *VAR_3;
 const git_error *VAR_4;

 FUNC_5(&VAR_3, VAR_1);
 FUNC_1(FUNC_4(&VAR_2, VAR_3, "Hello world!\n", 13, VAR_0));

 VAR_4 = FUNC_2();
 FUNC_0(VAR_4->message, "cannot write object - unsupported in the loaded odb backends");

 FUNC_3(VAR_3);
}
