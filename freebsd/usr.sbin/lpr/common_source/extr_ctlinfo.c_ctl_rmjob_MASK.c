
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cjobinfo {int dummy; } ;
typedef int errm ;


 int VAR_0 ;
 int FUNC_0 (struct cjobinfo*) ;
 char* FUNC_1 (struct cjobinfo*) ;
 struct cjobinfo* FUNC_2 (char const*,char const*) ;
 int FUNC_3 (struct cjobinfo*) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 char* FUNC_5 (char*) ;

char *
FUNC_6(const char *VAR_1, const char *VAR_2)
{
 struct cjobinfo *VAR_3;
 char *VAR_4;
 char VAR_5[VAR_0];

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_4(VAR_5, sizeof(VAR_5),
      "ctl_renametf error cti_readcf(%s)", VAR_2);
  return FUNC_5(VAR_5);
 }

 FUNC_3(VAR_3);
 VAR_4 = FUNC_1(VAR_3);
 while (VAR_4 != ((void*)0)) {

  switch (VAR_4[0]) {
  case 'S':
   break;
  case 'U':
   break;
  default:
   break;
  }
  VAR_4 = FUNC_1(VAR_3);
 }

 FUNC_0(VAR_3);
 VAR_3 = ((void*)0);

 return ((void*)0);
}
