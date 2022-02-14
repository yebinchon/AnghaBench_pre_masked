
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct in_addr {int s_addr; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct in_addr VAR_0)
{
  u_int32_t VAR_1 = FUNC_0(VAR_0.s_addr);
  u_int32_t VAR_2;
  int VAR_3;

  for (VAR_3 = 32, VAR_2 = 1; VAR_2; VAR_3--, VAR_2 <<= 1)
    if (VAR_1 & VAR_2)
      break;

  for (VAR_2 <<= 1; VAR_2; VAR_2 <<= 1)
    if (!(VAR_1 & VAR_2))
      break;

  return VAR_2 ? -1 : VAR_3;
}
