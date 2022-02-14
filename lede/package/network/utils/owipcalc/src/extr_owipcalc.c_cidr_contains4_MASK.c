
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct TYPE_3__ {TYPE_2__ v4; } ;
struct cidr {int prefix; TYPE_1__ addr; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(struct cidr *VAR_1, struct cidr *VAR_2)
{
 uint32_t VAR_3 = VAR_1->addr.v4.s_addr & FUNC_0(~((1 << (32 - VAR_1->prefix)) - 1));
 uint32_t VAR_4 = VAR_2->addr.v4.s_addr & FUNC_0(~((1 << (32 - VAR_1->prefix)) - 1));

 if (VAR_0)
  FUNC_1(" ");

 if ((VAR_2->prefix >= VAR_1->prefix) && (VAR_3 == VAR_4))
 {
  FUNC_1("1");
  return 1;
 }
 else
 {
  FUNC_1("0");
  return 0;
 }
}
