
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int creq_ring_id; } ;
struct TYPE_7__ {int fw_id; } ;
struct TYPE_10__ {TYPE_1__ stats; } ;
struct bnxt_re_dev {int flags; TYPE_3__ rcfw; int chip_ctx; TYPE_4__ qplib_ctx; TYPE_2__* en_dev; int worker; } ;
struct TYPE_8__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bnxt_re_dev*) ;
 int FUNC_6 (struct bnxt_re_dev*) ;
 int FUNC_7 (struct bnxt_re_dev*) ;
 int FUNC_8 (struct bnxt_re_dev*) ;
 int FUNC_9 (struct bnxt_re_dev*,int ,int ) ;
 int FUNC_10 (struct bnxt_re_dev*,int ) ;
 int FUNC_11 (struct bnxt_re_dev*) ;
 int FUNC_12 (struct bnxt_re_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (struct bnxt_re_dev*) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static void FUNC_17(struct bnxt_re_dev *VAR_7)
{
 u8 VAR_8;
 int VAR_9;

 if (FUNC_16(VAR_1, &VAR_7->flags)) {

  FUNC_11(VAR_7);
 }
 if (FUNC_16(VAR_3, &VAR_7->flags))
  FUNC_13(&VAR_7->worker);

 if (FUNC_16(VAR_6,
          &VAR_7->flags))
  FUNC_5(VAR_7);
 if (FUNC_16(VAR_5, &VAR_7->flags))
  FUNC_8(VAR_7);

 if (FUNC_16(VAR_4, &VAR_7->flags)) {
  VAR_9 = FUNC_0(&VAR_7->rcfw);
  if (VAR_9)
   FUNC_14(FUNC_15(VAR_7),
     "Failed to deinitialize RCFW: %#x", VAR_9);
  FUNC_10(VAR_7, VAR_7->qplib_ctx.stats.fw_id);
  FUNC_2(VAR_7->en_dev->pdev, &VAR_7->qplib_ctx);
  FUNC_1(&VAR_7->rcfw);
  VAR_8 = FUNC_4(&VAR_7->chip_ctx);
  FUNC_9(VAR_7, VAR_7->rcfw.creq_ring_id, VAR_8);
  FUNC_3(&VAR_7->rcfw);
 }
 if (FUNC_16(VAR_0, &VAR_7->flags)) {
  VAR_9 = FUNC_7(VAR_7);
  if (VAR_9)
   FUNC_14(FUNC_15(VAR_7),
     "Failed to free MSI-X vectors: %#x", VAR_9);
 }

 FUNC_6(VAR_7);
 if (FUNC_16(VAR_2, &VAR_7->flags)) {
  VAR_9 = FUNC_12(VAR_7);
  if (VAR_9)
   FUNC_14(FUNC_15(VAR_7),
     "Failed to unregister with netdev: %#x", VAR_9);
 }
}
