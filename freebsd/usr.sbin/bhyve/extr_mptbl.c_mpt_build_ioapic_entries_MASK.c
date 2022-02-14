
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* io_apic_entry_ptr ;
struct TYPE_4__ {int apic_id; int apic_address; int apic_flags; int apic_version; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(io_apic_entry_ptr VAR_4, int VAR_5)
{

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->type = VAR_3;
 VAR_4->apic_id = VAR_5;
 VAR_4->apic_version = VAR_2;
 VAR_4->apic_flags = VAR_0;
 VAR_4->apic_address = VAR_1;
}
