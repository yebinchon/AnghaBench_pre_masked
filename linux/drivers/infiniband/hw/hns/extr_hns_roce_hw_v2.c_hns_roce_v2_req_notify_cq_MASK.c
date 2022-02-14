
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ib_cq {int device; } ;
struct hns_roce_dev {int dummy; } ;
struct hns_roce_cq {int cqn; int cons_index; int cq_depth; int arm_sn; int cq_db_l; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct hns_roce_dev*,scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int) ;
 struct hns_roce_cq* FUNC_3 (struct ib_cq*) ;
 struct hns_roce_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ib_cq *VAR_14,
         enum ib_cq_notify_flags VAR_15)
{
 struct hns_roce_dev *VAR_16 = FUNC_4(VAR_14->device);
 struct hns_roce_cq *VAR_17 = FUNC_3(VAR_14);
 u32 VAR_18;
 __le32 VAR_19[2];

 VAR_19[0] = 0;
 VAR_19[1] = 0;

 VAR_18 = (VAR_15 & VAR_2) == VAR_1 ?
        VAR_10 : VAR_11;




 FUNC_2(VAR_19[0], VAR_4, VAR_13,
         VAR_17->cqn);
 FUNC_2(VAR_19[0], VAR_3, VAR_12,
         VAR_0);
 FUNC_2(VAR_19[1], VAR_7,
         VAR_8,
         VAR_17->cons_index & ((VAR_17->cq_depth << 1) - 1));
 FUNC_2(VAR_19[1], VAR_5,
         VAR_6, VAR_17->arm_sn & 0x3);
 FUNC_1(VAR_19[1], VAR_9,
       VAR_18);

 FUNC_0(VAR_16, VAR_19, VAR_17->cq_db_l);

 return 0;
}
