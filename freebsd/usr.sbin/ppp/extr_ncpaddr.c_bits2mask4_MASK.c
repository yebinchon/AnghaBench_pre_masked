
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct in_addr {int s_addr; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct in_addr
FUNC_1(int VAR_0)
{
  struct in_addr VAR_1;
  u_int32_t VAR_2 = 0x80000000;

  VAR_1.s_addr = 0;

  while (VAR_0) {
    VAR_1.s_addr |= VAR_2;
    VAR_2 >>= 1;
    VAR_0--;
  }

  VAR_1.s_addr = FUNC_0(VAR_1.s_addr);
  return VAR_1;
}
