
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char**,int) ;

int FUNC_5(const char *VAR_2, const char *VAR_3)
{
 int VAR_4;
 char *VAR_5;

 if (VAR_3 == ((void*)0))
  return VAR_1;

 if (!FUNC_3(VAR_3, "umask"))
  return 128;
 if (!FUNC_3(VAR_3, "group"))
  return VAR_1;
 if (!FUNC_3(VAR_3, "all") ||
     !FUNC_3(VAR_3, "world") ||
     !FUNC_3(VAR_3, "everybody"))
  return VAR_0;


 VAR_4 = FUNC_4(VAR_3, &VAR_5, 8);


 if (*VAR_5 != 0)
  return FUNC_2(VAR_2, VAR_3) ? VAR_1 : 128;





 switch (VAR_4) {
 case 128:
  return 128;
 case 129:
  return VAR_1;
 case 130:
  return VAR_0;
 }



 if ((VAR_4 & 0600) != 0600)
  FUNC_1(FUNC_0("problem with core.sharedRepository filemode value "
      "(0%.3o).\nThe owner of files must always have "
      "read and write permissions."), VAR_4);





 return -(VAR_4 & 0666);
}
