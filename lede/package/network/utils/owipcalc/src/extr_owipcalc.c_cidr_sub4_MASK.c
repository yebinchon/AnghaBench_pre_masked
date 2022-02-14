
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ v4; } ;
struct cidr {scalar_t__ family; TYPE_2__ addr; } ;


 scalar_t__ VAR_0 ;
 struct cidr* FUNC_0 (struct cidr*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_4(struct cidr *VAR_2, struct cidr *VAR_3)
{
 uint32_t VAR_4 = FUNC_3(VAR_2->addr.v4.s_addr);
 uint32_t VAR_5 = FUNC_3(VAR_3->addr.v4.s_addr);

 struct cidr *VAR_6 = FUNC_0(VAR_2);

 if ((VAR_6->family != VAR_0) || (VAR_3->family != VAR_0))
  return 0;

 if ((uint32_t)(VAR_4 - VAR_5) > VAR_4)
 {
  FUNC_1(VAR_1, "underflow during 'sub'\n");
  return 0;
 }

 VAR_6->addr.v4.s_addr = FUNC_2(VAR_4 - VAR_5);
 return 1;
}
