
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr32; scalar_t__* s6_addr8; } ;
typedef int in_addr_t ;


 int FUNC_0 (char*,int) ;

void
FUNC_1(struct in6_addr *VAR_0, int VAR_1, in_addr_t VAR_2)
{

 switch (VAR_1) {
 case 32:
 case 96:
  VAR_0->s6_addr32[VAR_1 / 32] = VAR_2;
  break;
 case 40:
 case 48:
 case 56:





  VAR_0->s6_addr32[1] &= 0xffffffff << (32 - VAR_1 % 32);

  VAR_0->s6_addr32[1] |= VAR_2 >> (VAR_1 % 32);
  VAR_0->s6_addr32[2] = VAR_2 << (24 - VAR_1 % 32);




  break;
 case 64:

  VAR_0->s6_addr32[2] = VAR_2 >> 8;
  VAR_0->s6_addr32[3] = VAR_2 << 24;




  break;
 default:
  FUNC_0("Wrong plen: %d", VAR_1);
 };





 VAR_0->s6_addr8[8] = 0;
}
