
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attribute {int dummy; } ;


 int VAR_0 ;
 struct attribute* FUNC_0 (char*,char*) ;
 char* FUNC_1 (int ,char*,int,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,size_t,int ) ;

__attribute__((used)) static struct attribute *FUNC_4(char *VAR_1, int VAR_2,
      int VAR_3,
      char *VAR_4, size_t VAR_5)
{
 char *VAR_6;
 char *VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_0);
 struct attribute *VAR_8;

 if (!VAR_7)
  return ((void*)0);

 if (!VAR_3)
  VAR_6 = FUNC_1(VAR_0, "%.*s", VAR_2, VAR_1);
 else
  VAR_6 = FUNC_1(VAR_0, "%.*s__%d", VAR_2, VAR_1,
     VAR_3);
 if (!VAR_6)
  goto out_s;

 VAR_8 = FUNC_0(VAR_6, VAR_7);
 if (!VAR_8)
  goto out_n;

 return VAR_8;
out_n:
 FUNC_2(VAR_6);
out_s:
 FUNC_2(VAR_7);
 return ((void*)0);
}
