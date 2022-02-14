
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct snmp_pdu {int nbindings; TYPE_1__* bindings; } ;
struct asn_oid {int dummy; } ;
struct TYPE_2__ {int var; } ;


 int FUNC_0 (int *,struct asn_oid*) ;
 int FUNC_1 (struct snmp_pdu*,int ) ;

__attribute__((used)) static void
FUNC_2(uint32_t VAR_0, struct asn_oid *VAR_1, struct snmp_pdu *VAR_2)
{
 FUNC_1(VAR_2, VAR_0);
 FUNC_0(&(VAR_2->bindings[0].var), VAR_1);
 VAR_2->nbindings = 1;
}
