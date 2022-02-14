
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* s6_addr; } ;
struct TYPE_4__ {TYPE_1__ v6; } ;
struct cidr {int prefix; TYPE_2__ addr; } ;


 struct cidr* FUNC_0 (struct cidr*) ;

__attribute__((used)) static bool FUNC_1(struct cidr *VAR_0)
{
 uint8_t VAR_1;
 struct cidr *VAR_2 = FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < (128 - VAR_2->prefix) / 8; VAR_1++)
  VAR_2->addr.v6.s6_addr[15-VAR_1] = 0;

 if ((128 - VAR_2->prefix) % 8)
  VAR_2->addr.v6.s6_addr[15-VAR_1] &= ~((1 << ((128 - VAR_2->prefix) % 8)) - 1);

 return 1;
}
