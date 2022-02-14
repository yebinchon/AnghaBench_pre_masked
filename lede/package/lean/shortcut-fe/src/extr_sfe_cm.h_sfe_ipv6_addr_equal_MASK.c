
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv6_addr {scalar_t__* addr; } ;



__attribute__((used)) static inline int FUNC_0(struct sfe_ipv6_addr *VAR_0,
          struct sfe_ipv6_addr *VAR_1)
{
 return VAR_0->addr[0] == VAR_1->addr[0] &&
        VAR_0->addr[1] == VAR_1->addr[1] &&
        VAR_0->addr[2] == VAR_1->addr[2] &&
        VAR_0->addr[3] == VAR_1->addr[3];
}
