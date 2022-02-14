
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;


 int FUNC_0 (char*) ;

int
FUNC_1(char *VAR_0, uint32_t *VAR_1)
{
 if (FUNC_0(VAR_0) != 4)
  return -1;

 *VAR_1 = VAR_0[0] | (VAR_0[1] << 8) | (VAR_0[2] << 16) | (VAR_0[3] << 24);

 return 0;
}
