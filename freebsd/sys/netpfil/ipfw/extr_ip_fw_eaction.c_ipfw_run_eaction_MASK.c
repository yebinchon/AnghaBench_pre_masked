
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_fw_chain {int dummy; } ;
struct ip_fw_args {int dummy; } ;
typedef int ipfw_insn ;
struct TYPE_2__ {int (* handler ) (struct ip_fw_chain*,struct ip_fw_args*,int *,int*) ;} ;


 TYPE_1__* FUNC_0 (struct ip_fw_chain*,int *) ;
 int FUNC_1 (struct ip_fw_chain*,struct ip_fw_args*,int *,int*) ;

int
FUNC_2(struct ip_fw_chain *VAR_0, struct ip_fw_args *VAR_1,
    ipfw_insn *VAR_2, int *VAR_3)
{

 return (FUNC_0(VAR_0, VAR_2)->handler(VAR_0, VAR_1, VAR_2, VAR_3));
}
