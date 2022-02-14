
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int target_lpm_policy; } ;
struct ahci_host_priv {int flags; int cap; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_0(struct ata_port *VAR_11,
        struct ahci_host_priv *VAR_12)
{
 int VAR_13 = VAR_6;



 if (!(VAR_12->flags & VAR_1))
  return;


 if (VAR_10 != -1) {
  VAR_13 = VAR_10;
  goto update_policy;
 }
update_policy:
 if (VAR_13 >= VAR_5 && VAR_13 <= VAR_3)
  VAR_11->target_lpm_policy = VAR_13;
}
