
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_signature ;
struct TYPE_3__ {scalar_t__ ident_email; scalar_t__ ident_name; } ;
typedef TYPE_1__ git_repository ;


 int FUNC_0 (int **,scalar_t__,scalar_t__) ;

int FUNC_1(git_signature **VAR_0, const git_repository *VAR_1)
{
 if (VAR_1->ident_name && VAR_1->ident_email)
  return FUNC_0(VAR_0, VAR_1->ident_name, VAR_1->ident_email);


 return -1;
}
