
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr8; } ;



__attribute__((used)) static void
FUNC_0(struct in6_addr *VAR_0, struct in6_addr *VAR_1,
    struct in6_addr *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8 && VAR_2->s6_addr8[VAR_3] != 0; VAR_3++) {
  VAR_1->s6_addr8[VAR_3] &= ~VAR_2->s6_addr8[VAR_3];
  VAR_1->s6_addr8[VAR_3] |= VAR_0->s6_addr8[VAR_3] & VAR_2->s6_addr8[VAR_3];
 }
}
