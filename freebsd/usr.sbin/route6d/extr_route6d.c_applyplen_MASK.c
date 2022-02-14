
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct in6_addr {int * s6_addr; } ;


 int * VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct in6_addr *VAR_1, int VAR_2)
{
 u_char *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->s6_addr;
 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  if (VAR_2 <= 0)
   *VAR_3 = 0;
  else if (VAR_2 < 8)
   *VAR_3 &= VAR_0[VAR_2];
  VAR_3++, VAR_2 -= 8;
 }
}
