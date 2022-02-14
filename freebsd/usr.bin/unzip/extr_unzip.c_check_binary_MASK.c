
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;
 scalar_t__ FUNC_1 (unsigned char const) ;

__attribute__((used)) static int
FUNC_2(const unsigned char *VAR_0, size_t VAR_1)
{
 int VAR_2;
 for (VAR_2 = 1; VAR_1--; ++VAR_0) {
  if (FUNC_0(*VAR_0))
   return 1;
  if (FUNC_1(*VAR_0))
   VAR_2 = 0;
 }

 return VAR_2;
}
