
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct in6_addr {int* s6_addr; } ;


 int FUNC_0 (struct in6_addr*,char,int) ;

__attribute__((used)) static struct in6_addr
FUNC_1(int VAR_0)
{
  struct in6_addr VAR_1;
  u_int32_t VAR_2 = 0x80;
  u_char *VAR_3 = VAR_1.s6_addr;

  FUNC_0(&VAR_1, '\0', sizeof VAR_1);

  while (VAR_0) {
    if (VAR_2 == 0) {
      VAR_2 = 0x80;
      VAR_3++;
    }
    *VAR_3 |= VAR_2;
    VAR_2 >>= 1;
    VAR_0--;
  }

  return VAR_1;
}
