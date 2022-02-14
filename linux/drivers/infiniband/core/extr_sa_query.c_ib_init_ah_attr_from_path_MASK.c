
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sa_path_rec {scalar_t__ hop_limit; int rate; int sl; } ;
struct TYPE_2__ {int dmac; } ;
struct rdma_ah_attr {TYPE_1__ roce; int type; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (struct ib_device*,int ,struct sa_path_rec*,struct rdma_ah_attr*,struct ib_gid_attr const*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct rdma_ah_attr*,int ,int) ;
 int FUNC_6 (struct ib_device*,int ) ;
 scalar_t__ FUNC_7 (struct rdma_ah_attr*) ;
 int FUNC_8 (struct rdma_ah_attr*,int) ;
 int FUNC_9 (struct rdma_ah_attr*,int) ;
 int FUNC_10 (struct rdma_ah_attr*,int) ;
 int FUNC_11 (struct rdma_ah_attr*,int ) ;
 int FUNC_12 (struct rdma_ah_attr*,int ) ;
 int FUNC_13 (struct rdma_ah_attr*,int ) ;
 int FUNC_14 (struct sa_path_rec*,struct ib_gid_attr const*) ;
 int FUNC_15 (struct sa_path_rec*) ;
 int FUNC_16 (struct sa_path_rec*) ;
 int FUNC_17 (struct sa_path_rec*) ;
 scalar_t__ FUNC_18 (struct sa_path_rec*) ;
 scalar_t__ FUNC_19 (struct sa_path_rec*) ;

int FUNC_20(struct ib_device *VAR_2, u8 VAR_3,
         struct sa_path_rec *VAR_4,
         struct rdma_ah_attr *VAR_5,
         const struct ib_gid_attr *VAR_6)
{
 int VAR_7 = 0;

 FUNC_5(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->type = FUNC_6(VAR_2, VAR_3);
 FUNC_12(VAR_5, VAR_4->sl);
 FUNC_11(VAR_5, VAR_3);
 FUNC_13(VAR_5, VAR_4->rate);

 if (FUNC_19(VAR_4)) {
  VAR_7 = FUNC_14(VAR_4, VAR_6);
  if (VAR_7)
   return VAR_7;

  FUNC_4(VAR_5->roce.dmac, FUNC_16(VAR_4), VAR_0);
 } else {
  FUNC_8(VAR_5, FUNC_1(FUNC_15(VAR_4)));
  if (FUNC_18(VAR_4) &&
      FUNC_7(VAR_5) == FUNC_0(VAR_1))
   FUNC_9(VAR_5, 1);

  FUNC_10(VAR_5,
          FUNC_1(FUNC_17(VAR_4)) &
          FUNC_2(VAR_2, VAR_3));
 }

 if (VAR_4->hop_limit > 0 || FUNC_19(VAR_4))
  VAR_7 = FUNC_3(VAR_2, VAR_3,
           VAR_4, VAR_5, VAR_6);
 return VAR_7;
}
