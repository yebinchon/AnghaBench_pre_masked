
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nv_adma_port_priv {TYPE_1__* cpb; } ;
struct ata_eh_info {int err_mask; } ;
struct TYPE_4__ {struct ata_eh_info eh_info; } ;
struct ata_port {TYPE_2__ link; struct nv_adma_port_priv* private_data; } ;
struct TYPE_3__ {int resp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct ata_eh_info*,char*,int) ;
 int FUNC_2 (struct ata_eh_info*) ;
 int FUNC_3 (struct ata_eh_info*,char*) ;
 int FUNC_4 (struct ata_port*) ;
 int FUNC_5 (struct ata_port*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ata_port *VAR_7, int VAR_8, int VAR_9)
{
 struct nv_adma_port_priv *VAR_10 = VAR_7->private_data;
 u8 VAR_11 = VAR_10->cpb[VAR_8].resp_flags;

 FUNC_0("CPB %d, flags=0x%x\n", VAR_8, VAR_11);

 if (FUNC_7((VAR_9 ||
       VAR_11 & (VAR_3 |
         VAR_4 |
         VAR_5)))) {
  struct ata_eh_info *VAR_12 = &VAR_7->link.eh_info;
  int VAR_13 = 0;

  FUNC_2(VAR_12);
  FUNC_1(VAR_12, "CPB resp_flags 0x%x: ", VAR_11);
  if (VAR_11 & VAR_3) {
   FUNC_3(VAR_12, "ATA error");
   VAR_12->err_mask |= VAR_0;
  } else if (VAR_11 & VAR_4) {
   FUNC_3(VAR_12, "CMD error");
   VAR_12->err_mask |= VAR_0;
  } else if (VAR_11 & VAR_5) {
   FUNC_3(VAR_12, "CPB error");
   VAR_12->err_mask |= VAR_2;
   VAR_13 = 1;
  } else {

   FUNC_3(VAR_12, "unknown");
   VAR_12->err_mask |= VAR_1;
   VAR_13 = 1;
  }

  if (VAR_13)
   FUNC_5(VAR_7);
  else
   FUNC_4(VAR_7);
  return -1;
 }

 if (FUNC_6(VAR_11 & VAR_6))
  return 1;
 return 0;
}
