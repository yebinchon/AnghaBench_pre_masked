
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0)
{
 char *VAR_1;
 int VAR_2 = 0;

 VAR_1 = FUNC_2("%s/pack", VAR_0);
 VAR_2 = FUNC_1(VAR_1, 0777);
 FUNC_0(VAR_1);

 return VAR_2;
}
