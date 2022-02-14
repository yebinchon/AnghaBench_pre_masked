
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* s6_addr; } ;
struct TYPE_4__ {TYPE_1__ v6; } ;
struct cidr {TYPE_2__ addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(struct cidr *VAR_1)
{
 if (VAR_0)
  FUNC_0(" ");

 if ((VAR_1->addr.v6.s6_addr[0] >= 0xFC) &&
     (VAR_1->addr.v6.s6_addr[0] <= 0xFD))
 {
  FUNC_0("1");
  return 1;
 }
 else
 {
  FUNC_0("0");
  return 0;
 }
}
