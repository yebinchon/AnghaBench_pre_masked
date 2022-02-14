
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum want_ident { ____Placeholder_want_ident } want_ident ;


 int VAR_0 ;
 int VAR_1 ;



 char const* FUNC_0 (char*,char*,int,int *,int) ;
 char* FUNC_1 (char*) ;

const char *FUNC_2(enum want_ident VAR_2)
{
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);

 switch (VAR_2) {
 case 129:
  break;
 case 130:
  VAR_3 = FUNC_1("GIT_AUTHOR_NAME");
  VAR_4 = FUNC_1("GIT_AUTHOR_EMAIL");
  break;
 case 128:
  VAR_3 = FUNC_1("GIT_COMMITTER_NAME");
  VAR_4 = FUNC_1("GIT_COMMITTER_EMAIL");
  break;
 }
 return FUNC_0(VAR_3, VAR_4, VAR_2, ((void*)0),
   VAR_1 | VAR_0);
}
