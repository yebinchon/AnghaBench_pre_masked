
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const**) ;
 int FUNC_1 (int ,char*,int ,char const**) ;
 int VAR_0 ;

const char *FUNC_2(void)
{
 const char *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, "model", &VAR_1);
 if (!VAR_2)
  return VAR_1;

 VAR_2 = FUNC_1(VAR_0, "compatible", 0, &VAR_1);
 if (!VAR_2)
  return VAR_1;

 return "Unknown";
}
