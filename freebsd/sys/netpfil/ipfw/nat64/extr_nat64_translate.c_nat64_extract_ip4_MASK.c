
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr32; int * s6_addr8; } ;
typedef int in_addr_t ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

in_addr_t
FUNC_3(const struct in6_addr *VAR_2, int VAR_3)
{
 in_addr_t VAR_4;
 switch (VAR_3) {
 case 32:
  if (VAR_2->s6_addr32[3] != 0 || VAR_2->s6_addr32[2] != 0)
   goto badip6;
  break;
 case 40:
  if (VAR_2->s6_addr32[3] != 0 ||
      (VAR_2->s6_addr32[2] & FUNC_1(0xff00ffff)) != 0)
   goto badip6;
  break;
 case 48:
  if (VAR_2->s6_addr32[3] != 0 ||
      (VAR_2->s6_addr32[2] & FUNC_1(0xff0000ff)) != 0)
   goto badip6;
  break;
 case 56:
  if (VAR_2->s6_addr32[3] != 0 || VAR_2->s6_addr8[8] != 0)
   goto badip6;
  break;
 case 64:
  if (VAR_2->s6_addr8[8] != 0 ||
      (VAR_2->s6_addr32[3] & FUNC_1(0x00ffffff)) != 0)
   goto badip6;
 };
 switch (VAR_3) {
 case 32:
 case 96:
  VAR_4 = VAR_2->s6_addr32[VAR_3 / 32];
  break;
 case 40:
 case 48:
 case 56:

  VAR_4 = (VAR_2->s6_addr32[1] << (VAR_3 % 32)) |
      (VAR_2->s6_addr32[2] >> (24 - VAR_3 % 32));




  break;
 case 64:

  VAR_4 = (VAR_2->s6_addr32[2] << 8) | (VAR_2->s6_addr32[3] >> 24);



  break;
 default:
  return (0);
 };
 if (FUNC_2(VAR_4) == 0)
  return (VAR_4);

 FUNC_0(VAR_1 | VAR_0,
     "invalid destination address: %08x", VAR_4);
 return (0);
badip6:
 FUNC_0(VAR_1 | VAR_0, "invalid IPv4-embedded IPv6 address");
 return (0);
}
