
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_taskfile {int ctl; } ;
struct ata_port {struct ahci_port_priv* private_data; TYPE_1__* host; } ;
struct ata_link {int device; struct ata_port* ap; } ;
struct ahci_port_priv {scalar_t__ fbs_enabled; } ;
struct ahci_host_priv {int flags; } ;
struct TYPE_2__ {struct ahci_host_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_port*) ;
 scalar_t__ FUNC_4 (struct ata_port*,int,struct ata_taskfile*,int ,int,unsigned long) ;
 int FUNC_5 (struct ata_port*) ;
 int FUNC_6 (struct ata_link*) ;
 int FUNC_7 (struct ata_link*,char*,char const*) ;
 int FUNC_8 (struct ata_link*,char*) ;
 int FUNC_9 (struct ata_link*,char*,int) ;
 int FUNC_10 (struct ata_port*,int) ;
 int FUNC_11 (int ,struct ata_taskfile*) ;
 int FUNC_12 (struct ata_link*,unsigned long,int (*) (struct ata_link*)) ;
 unsigned long VAR_8 ;
 unsigned long FUNC_13 (unsigned long) ;
 scalar_t__ FUNC_14 (unsigned long,unsigned long) ;

int FUNC_15(struct ata_link *VAR_9, unsigned int *VAR_10,
        int VAR_11, unsigned long VAR_12,
        int (*VAR_13)(struct ata_link *VAR_14))
{
 struct ata_port *VAR_15 = VAR_9->ap;
 struct ahci_host_priv *VAR_16 = VAR_15->host->private_data;
 struct ahci_port_priv *VAR_17 = VAR_15->private_data;
 const char *VAR_18 = ((void*)0);
 unsigned long VAR_19, VAR_20;
 struct ata_taskfile VAR_21;
 bool VAR_22 = 0;
 int VAR_23;

 FUNC_0("ENTER\n");


 VAR_23 = FUNC_5(VAR_15);
 if (VAR_23 && VAR_23 != -VAR_7)
  FUNC_9(VAR_9, "failed to reset engine (errno=%d)\n", VAR_23);






 if (!FUNC_6(VAR_9) && VAR_17->fbs_enabled) {
  FUNC_2(VAR_15);
  VAR_22 = 1;
 }

 FUNC_11(VAR_9->device, &VAR_21);


 VAR_20 = 0;
 VAR_19 = VAR_8;
 if (FUNC_14(VAR_12, VAR_19))
  VAR_20 = FUNC_13(VAR_12 - VAR_19);

 VAR_21.ctl |= VAR_4;
 if (FUNC_4(VAR_15, VAR_11, &VAR_21, 0,
     VAR_1 | VAR_0, VAR_20)) {
  VAR_23 = -VAR_6;
  VAR_18 = "1st FIS failed";
  goto fail;
 }


 FUNC_10(VAR_15, 1);


 VAR_21.ctl &= ~VAR_4;
 FUNC_4(VAR_15, VAR_11, &VAR_21, 0, 0, 0);


 VAR_23 = FUNC_12(VAR_9, VAR_12, VAR_13);
 if (VAR_23 == -VAR_5 && VAR_16->flags & VAR_2) {





  FUNC_8(VAR_9, "device not ready, treating as offline\n");
  *VAR_10 = VAR_3;
 } else if (VAR_23) {

  VAR_18 = "device not ready";
  goto fail;
 } else
  *VAR_10 = FUNC_1(VAR_15);


 if (VAR_22)
  FUNC_3(VAR_15);

 FUNC_0("EXIT, class=%u\n", *VAR_10);
 return 0;

 fail:
 FUNC_7(VAR_9, "softreset failed (%s)\n", VAR_18);
 return VAR_23;
}
