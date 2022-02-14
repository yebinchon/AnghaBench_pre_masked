
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct snmp_pdu {scalar_t__ nbindings; scalar_t__ error_status; int error_index; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct snmp_pdu *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 FUNC_0(VAR_0 != ((void*)0));

 if (VAR_0->nbindings < VAR_2)
  VAR_0->error_status = VAR_0->nbindings;
 else
  VAR_0->error_status = VAR_2;

 if (VAR_1 > 0)
  VAR_0->error_index = VAR_1;
 else
  VAR_0->error_index = 1;
}
