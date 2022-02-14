
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int kidx; } ;
struct TYPE_4__ {TYPE_1__ p; } ;
typedef TYPE_2__ ipfw_insn_if ;
typedef int ipfw_insn ;



__attribute__((used)) static void
FUNC_0(ipfw_insn *VAR_0, uint16_t VAR_1)
{
 ipfw_insn_if *VAR_2;

 VAR_2 = (ipfw_insn_if *)VAR_0;
 VAR_2->p.kidx = VAR_1;
}
