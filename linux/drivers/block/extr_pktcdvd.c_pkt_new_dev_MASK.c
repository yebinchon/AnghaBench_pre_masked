
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int thread; int pending_bios; } ;
struct pktcdvd_device {scalar_t__ pkt_dev; int name; TYPE_1__ cdrw; struct block_device* bdev; } ;
struct block_device {scalar_t__ bd_dev; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct block_device*) ;
 int FUNC_4 (struct block_device*,char*) ;
 struct block_device* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct block_device*,int,int *) ;
 int FUNC_8 (struct block_device*,int) ;
 int VAR_9 ;
 int FUNC_9 (int ,struct pktcdvd_device*,char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,struct pktcdvd_device*,char*,int ) ;
 struct pktcdvd_device** VAR_10 ;
 int FUNC_12 (struct pktcdvd_device*,char*,...) ;
 int FUNC_13 (struct pktcdvd_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (int ,int ,int ,int ,struct pktcdvd_device*) ;
 int FUNC_15 (struct block_device*,int ) ;

__attribute__((used)) static int FUNC_16(struct pktcdvd_device *VAR_13, dev_t VAR_14)
{
 int VAR_15;
 int VAR_16 = 0;
 char VAR_17[VAR_0];
 struct block_device *VAR_18;

 if (VAR_13->pkt_dev == VAR_14) {
  FUNC_12(VAR_13, "recursive setup not allowed\n");
  return -VAR_2;
 }
 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  struct pktcdvd_device *VAR_19 = VAR_10[VAR_15];
  if (!VAR_19)
   continue;
  if (VAR_19->bdev->bd_dev == VAR_14) {
   FUNC_12(VAR_13, "%s already setup\n",
    FUNC_4(VAR_19->bdev, VAR_17));
   return -VAR_2;
  }
  if (VAR_19->pkt_dev == VAR_14) {
   FUNC_12(VAR_13, "can't chain pktcdvd devices\n");
   return -VAR_2;
  }
 }

 VAR_18 = FUNC_5(VAR_14);
 if (!VAR_18)
  return -VAR_4;
 VAR_16 = FUNC_7(VAR_18, VAR_6 | VAR_5, ((void*)0));
 if (VAR_16)
  return VAR_16;
 if (!FUNC_6(FUNC_3(VAR_18))) {
  FUNC_8(VAR_18, VAR_6 | VAR_5);
  return -VAR_3;
 }


 FUNC_1(VAR_8);

 VAR_13->bdev = VAR_18;
 FUNC_15(VAR_18, VAR_1);

 FUNC_13(VAR_13);

 FUNC_2(&VAR_13->cdrw.pending_bios, 0);
 VAR_13->cdrw.thread = FUNC_9(VAR_9, VAR_13, "%s", VAR_13->name);
 if (FUNC_0(VAR_13->cdrw.thread)) {
  FUNC_12(VAR_13, "can't start kernel thread\n");
  VAR_16 = -VAR_4;
  goto out_mem;
 }

 FUNC_14(VAR_13->name, 0, VAR_11, VAR_12, VAR_13);
 FUNC_11(1, VAR_13, "writer mapped to %s\n", FUNC_4(VAR_18, VAR_17));
 return 0;

out_mem:
 FUNC_8(VAR_18, VAR_6 | VAR_5);

 FUNC_10(VAR_8);
 return VAR_16;
}
