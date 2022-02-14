
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ipv6; scalar_t__ mask; } ;
typedef TYPE_1__ dns_network6_t ;



__attribute__((used)) static int FUNC_0 (dns_network6_t *VAR_0, unsigned char *VAR_1) {
  unsigned long long *VAR_2 = (unsigned long long *) VAR_0->mask;
  unsigned long long *VAR_3 = (unsigned long long *) VAR_0->ipv6;
  unsigned long long *VAR_4 = (unsigned long long *) VAR_1;
  if (((VAR_3[0] ^ VAR_4[0]) & VAR_2[0]) | ((VAR_3[1] ^ VAR_4[1]) & VAR_2[1])) {
    return -1;
  }
  return 0;
}
