
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ addr; } ;
typedef TYPE_2__ ipfw_insn_ip ;
typedef int ipfw_insn ;
typedef enum ipfw_opcodes { ____Placeholder_ipfw_opcodes } ipfw_opcodes ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static ipfw_insn *
FUNC_2(ipfw_insn * VAR_1, enum ipfw_opcodes VAR_2, u_int32_t VAR_3)
{
 ipfw_insn_ip *VAR_4 = (ipfw_insn_ip *) VAR_1;

 VAR_4->addr.s_addr = VAR_3;
 return FUNC_1(VAR_1, VAR_2, FUNC_0(VAR_0), 0, 0);
}
