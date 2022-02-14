
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int* s6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_6__ {TYPE_2__ v6; TYPE_1__ v4; } ;
struct cidr {int prefix; TYPE_3__ addr; int family; } ;


 int VAR_0 ;
 struct cidr* FUNC_0 (struct cidr*) ;
 int FUNC_1 (int**,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct cidr *VAR_1)
{
 struct cidr *VAR_2 = FUNC_0(VAR_1);
 uint32_t VAR_3 = VAR_1->addr.v4.s_addr;

 FUNC_1(&VAR_2->addr.v6.s6_addr, 0, sizeof(VAR_2->addr.v6.s6_addr));

 VAR_2->family = VAR_0;
 VAR_2->prefix = 48;

 VAR_2->addr.v6.s6_addr[0] = 0x20;
 VAR_2->addr.v6.s6_addr[1] = 0x02;
 VAR_2->addr.v6.s6_addr[2] = (VAR_3 >> 24);
 VAR_2->addr.v6.s6_addr[3] = (VAR_3 >> 16) & 0xFF;
 VAR_2->addr.v6.s6_addr[4] = (VAR_3 >> 8) & 0xFF;
 VAR_2->addr.v6.s6_addr[5] = VAR_3 & 0xFF;

 return 1;
}
