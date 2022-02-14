
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct in_addr {int s_addr; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, struct in_addr *VAR_1)
{
 int VAR_2;
 u_int VAR_3;

 if (VAR_0 < 0 || VAR_0 > 32)
  return (-1);

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_3 = (VAR_3 >> 1) + 0x80000000;
 VAR_1->s_addr = FUNC_0(VAR_3);

 return (0);
}
