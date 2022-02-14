
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int8_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(uint64_t VAR_1, u_int8_t *VAR_2, u_int8_t *VAR_3,
    u_int8_t *VAR_4)
{
 if (((VAR_1 >> 24) & 0xff) != VAR_0)
  return -1;

 *VAR_2 = (VAR_1 >> 16) & 0xff;
 *VAR_3 = (VAR_1 >> 8) & 0xff;
 *VAR_4 = VAR_1 & 0xff;

 return (0);
}
