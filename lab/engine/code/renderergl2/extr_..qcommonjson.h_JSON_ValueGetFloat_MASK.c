
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*,char*,int) ;
 int FUNC_2 (char*,char*,float*) ;

float FUNC_3(const char *VAR_0, const char *VAR_1)
{
 char VAR_2[256];
 float VAR_3 = 0.0f;
 unsigned int VAR_4 = FUNC_0(VAR_0, VAR_1);

 if (VAR_4)
  return (float)(VAR_4 - 1);

 if (!FUNC_1(VAR_0, VAR_1, VAR_2, 256))
  return 0.0f;

 FUNC_2(VAR_2, "%f", &VAR_3);

 return VAR_3;
}
