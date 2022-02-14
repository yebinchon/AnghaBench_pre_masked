
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_client {int device; } ;
struct cs_mmap_config_block {int dummy; } ;
struct cs_hsi_iface {unsigned long mmap_base; unsigned long mmap_size; int iface_state; int master; int datawait; struct cs_mmap_config_block* mmap_cfg; struct hsi_client* cl; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cs_hsi_iface*) ;
 int FUNC_4 (struct cs_hsi_iface*) ;
 int FUNC_5 (struct cs_hsi_iface*) ;
 int FUNC_6 (struct cs_hsi_iface*) ;
 int FUNC_7 (struct cs_hsi_iface*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (struct hsi_client*,int) ;
 int FUNC_11 (struct hsi_client*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct cs_hsi_iface*) ;
 struct cs_hsi_iface* FUNC_14 (int,int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (struct cs_mmap_config_block*,int ,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct hsi_client*) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(struct cs_hsi_iface **VAR_5, struct hsi_client *VAR_6,
   unsigned long VAR_7, unsigned long VAR_8)
{
 int VAR_9 = 0;
 struct cs_hsi_iface *VAR_10 = FUNC_14(sizeof(*VAR_10), VAR_4);

 FUNC_8(&VAR_6->device, "cs_hsi_start\n");

 if (!VAR_10) {
  VAR_9 = -VAR_3;
  goto leave0;
 }
 FUNC_18(&VAR_10->lock);
 VAR_10->cl = VAR_6;
 VAR_10->iface_state = VAR_0;
 VAR_10->mmap_cfg = (struct cs_mmap_config_block *)VAR_7;
 VAR_10->mmap_base = VAR_7;
 VAR_10->mmap_size = VAR_8;
 FUNC_17(VAR_10->mmap_cfg, 0, sizeof(*VAR_10->mmap_cfg));
 FUNC_12(&VAR_10->datawait);
 VAR_9 = FUNC_3(VAR_10);
 if (VAR_9 < 0) {
  FUNC_9(&VAR_6->device, "Unable to alloc HSI messages\n");
  goto leave1;
 }
 VAR_9 = FUNC_5(VAR_10);
 if (VAR_9 < 0) {
  FUNC_9(&VAR_6->device, "Unable to alloc HSI messages for data\n");
  goto leave2;
 }
 VAR_9 = FUNC_10(VAR_6, 1);
 if (VAR_9 < 0) {
  FUNC_9(&VAR_6->device,
    "Could not open, HSI port already claimed\n");
  goto leave3;
 }
 VAR_10->master = FUNC_19(VAR_6);
 if (FUNC_1(VAR_10->master)) {
  VAR_9 = FUNC_2(VAR_10->master);
  FUNC_9(&VAR_6->device, "Could not get HSI master client\n");
  goto leave4;
 }
 if (!FUNC_20(VAR_10->master)) {
  VAR_9 = -VAR_2;
  FUNC_9(&VAR_6->device,
    "HSI port not initialized\n");
  goto leave4;
 }

 VAR_10->iface_state = VAR_1;
 FUNC_15();
 FUNC_7(VAR_10);
 FUNC_16();

 FUNC_8(&VAR_6->device, "cs_hsi_start...done\n");

 FUNC_0(!VAR_5);
 *VAR_5 = VAR_10;

 return 0;

leave4:
 FUNC_11(VAR_6);
leave3:
 FUNC_6(VAR_10);
leave2:
 FUNC_4(VAR_10);
leave1:
 FUNC_13(VAR_10);
leave0:
 FUNC_8(&VAR_6->device, "cs_hsi_start...done/error\n\n");

 return VAR_9;
}
