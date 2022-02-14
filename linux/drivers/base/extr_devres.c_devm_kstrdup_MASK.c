
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;


 char* FUNC_0 (struct device*,size_t,int ) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char const*) ;

char *FUNC_3(struct device *VAR_0, const char *VAR_1, gfp_t VAR_2)
{
 size_t VAR_3;
 char *VAR_4;

 if (!VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_1) + 1;
 VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2);
 if (VAR_4)
  FUNC_1(VAR_4, VAR_1, VAR_3);
 return VAR_4;
}
