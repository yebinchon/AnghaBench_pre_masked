
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ident_email; int ident_name; } ;
typedef TYPE_1__ git_repository ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (int ,char*) ;

int FUNC_4(git_repository *VAR_0, const char *VAR_1, const char *VAR_2)
{
 char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);

 if (VAR_1) {
  VAR_3 = FUNC_2(VAR_1);
  FUNC_0(VAR_3);
 }

 if (VAR_2) {
  VAR_4 = FUNC_2(VAR_2);
  FUNC_0(VAR_4);
 }

 VAR_3 = FUNC_3(VAR_0->ident_name, VAR_3);
 VAR_4 = FUNC_3(VAR_0->ident_email, VAR_4);

 FUNC_1(VAR_3);
 FUNC_1(VAR_4);

 return 0;
}
