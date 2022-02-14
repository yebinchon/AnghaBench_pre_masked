
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ident_name; char* ident_email; } ;
typedef TYPE_1__ git_repository ;



int FUNC_0(const char **VAR_0, const char **VAR_1, const git_repository *VAR_2)
{
 *VAR_0 = VAR_2->ident_name;
 *VAR_1 = VAR_2->ident_email;

 return 0;
}
