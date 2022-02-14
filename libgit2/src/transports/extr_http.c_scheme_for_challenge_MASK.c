
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* name; int credtypes; } ;
typedef TYPE_1__ git_http_auth_scheme ;
typedef int git_credtype_t ;
struct TYPE_8__ {int const credtype; } ;
typedef TYPE_2__ git_cred ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

__attribute__((used)) static git_http_auth_scheme *FUNC_3(
 const char *VAR_1,
 git_cred *VAR_2)
{
 git_http_auth_scheme *VAR_3 = ((void*)0);
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  const char *VAR_5 = VAR_0[VAR_4].name;
  const git_credtype_t VAR_6 = VAR_0[VAR_4].credtypes;
  size_t VAR_7;

  VAR_7 = FUNC_1(VAR_5);

  if ((!VAR_2 || (VAR_2->credtype & VAR_6)) &&
      FUNC_2(VAR_1, VAR_5, VAR_7) == 0 &&
      (VAR_1[VAR_7] == '\0' || VAR_1[VAR_7] == ' ')) {
   VAR_3 = &VAR_0[VAR_4];
   break;
  }
 }

 return VAR_3;
}
