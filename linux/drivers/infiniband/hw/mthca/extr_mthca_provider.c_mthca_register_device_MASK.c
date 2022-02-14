
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * parent; } ;
struct TYPE_10__ {unsigned long long uverbs_cmd_mask; int num_comp_vectors; TYPE_2__ dev; int phys_port_cnt; int node_type; } ;
struct TYPE_7__ {int num_ports; } ;
struct mthca_dev {int mthca_flags; TYPE_4__ ib_dev; int cap_mask_mutex; TYPE_3__* pdev; TYPE_1__ limits; } ;
struct TYPE_9__ {int dev; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 unsigned long long VAR_15 ;
 unsigned long long VAR_16 ;
 unsigned long long VAR_17 ;
 unsigned long long VAR_18 ;
 unsigned long long VAR_19 ;
 unsigned long long VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_2 (struct mthca_dev*) ;
 scalar_t__ FUNC_3 (struct mthca_dev*) ;
 int FUNC_4 (struct mthca_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int *) ;

int FUNC_7(struct mthca_dev *VAR_32)
{
 int VAR_33;

 VAR_33 = FUNC_2(VAR_32);
 if (VAR_33)
  return VAR_33;

 VAR_32->ib_dev.uverbs_cmd_mask =
  (1ull << VAR_12) |
  (1ull << VAR_15) |
  (1ull << VAR_16) |
  (1ull << VAR_0) |
  (1ull << VAR_6) |
  (1ull << VAR_19) |
  (1ull << VAR_7) |
  (1ull << VAR_2) |
  (1ull << VAR_3) |
  (1ull << VAR_20) |
  (1ull << VAR_8) |
  (1ull << VAR_4) |
  (1ull << VAR_17) |
  (1ull << VAR_13) |
  (1ull << VAR_9) |
  (1ull << VAR_1) |
  (1ull << VAR_11);
 VAR_32->ib_dev.node_type = VAR_23;
 VAR_32->ib_dev.phys_port_cnt = VAR_32->limits.num_ports;
 VAR_32->ib_dev.num_comp_vectors = 1;
 VAR_32->ib_dev.dev.parent = &VAR_32->pdev->dev;

 if (VAR_32->mthca_flags & VAR_22) {
  VAR_32->ib_dev.uverbs_cmd_mask |=
   (1ull << VAR_5) |
   (1ull << VAR_14) |
   (1ull << VAR_18) |
   (1ull << VAR_10);

  if (FUNC_3(VAR_32))
   FUNC_1(&VAR_32->ib_dev,
       &VAR_27);
  else
   FUNC_1(&VAR_32->ib_dev,
       &VAR_31);
 }

 if (VAR_32->mthca_flags & VAR_21) {
  if (FUNC_3(VAR_32))
   FUNC_1(&VAR_32->ib_dev,
       &VAR_25);
  else
   FUNC_1(&VAR_32->ib_dev,
       &VAR_29);
 }

 FUNC_1(&VAR_32->ib_dev, &VAR_28);

 if (FUNC_3(VAR_32))
  FUNC_1(&VAR_32->ib_dev, &VAR_26);
 else
  FUNC_1(&VAR_32->ib_dev, &VAR_30);

 FUNC_5(&VAR_32->cap_mask_mutex);

 FUNC_6(&VAR_32->ib_dev, &VAR_24);
 VAR_33 = FUNC_0(&VAR_32->ib_dev, "mthca%d");
 if (VAR_33)
  return VAR_33;

 FUNC_4(VAR_32);

 return 0;
}
