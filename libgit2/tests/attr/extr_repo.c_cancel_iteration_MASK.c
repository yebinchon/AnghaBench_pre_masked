
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(
 const char *VAR_1,
 const char *VAR_2,
 void *VAR_3)
{
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 *((int *)VAR_3) -= 1;

 if (*((int *)VAR_3) < 0)
  return VAR_0;

 return 0;
}
