
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct icmphdr {int icmp_type; } ;
struct TYPE_3__ {int* d; } ;
typedef TYPE_1__ ipfw_insn_u32 ;


 int VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(struct icmphdr *VAR_1, ipfw_insn_u32 *VAR_2)
{
 int VAR_3 = VAR_1->icmp_type;

 return (VAR_3 <= VAR_0 && (VAR_2->d[0] & (1<<VAR_3)) );
}
