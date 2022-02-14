
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mpcth_t ;
struct TYPE_4__ {int apic_address; int product_id; int oem_id; int spec_rev; int signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(mpcth_t VAR_7)
{

 FUNC_1(VAR_7, 0, sizeof(*VAR_7));
 FUNC_0(VAR_7->signature, VAR_5, 4);
 VAR_7->spec_rev = VAR_6;
 FUNC_0(VAR_7->oem_id, VAR_1, VAR_2);
 FUNC_0(VAR_7->product_id, VAR_3, VAR_4);
 VAR_7->apic_address = VAR_0;
}
