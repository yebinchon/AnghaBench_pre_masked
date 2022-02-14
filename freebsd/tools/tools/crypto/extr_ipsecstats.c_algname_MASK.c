
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alg {int a; char const* name; } ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char*
FUNC_1(int VAR_0, const struct alg VAR_1[], int VAR_2)
{
 static char VAR_3[80];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (VAR_1[VAR_4].a == VAR_0)
   return VAR_1[VAR_4].name;
 FUNC_0(VAR_3, sizeof(VAR_3), "alg#%u", VAR_0);
 return VAR_3;
}
