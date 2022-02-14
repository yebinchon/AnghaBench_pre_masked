
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct hns_roce_buf_list {int map; scalar_t__ buf; } ;
struct TYPE_2__ {struct hns_roce_buf_list tptr_buf; } ;
struct hns_roce_v1_priv {TYPE_1__ tptr_table; } ;
struct hns_roce_dev {scalar_t__ priv; } ;
struct hns_roce_cq_context {int cqc_byte_32; void* cqe_tptr_addr_l; int cqc_byte_20; void* cur_cqe_ba0_l; int cqc_byte_12; void* cq_bt_l; int cqc_byte_4; } ;
struct hns_roce_cq {int cqn; int * tptr_addr; } ;
typedef int dma_addr_t ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct hns_roce_cq_context*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct hns_roce_dev *VAR_26,
      struct hns_roce_cq *VAR_27, void *VAR_28,
      u64 *VAR_29, dma_addr_t VAR_30, int VAR_31,
      u32 VAR_32)
{
 struct hns_roce_cq_context *VAR_33 = ((void*)0);
 struct hns_roce_buf_list *VAR_34;
 struct hns_roce_v1_priv *VAR_35;
 dma_addr_t VAR_36;
 int VAR_37;

 VAR_35 = (struct hns_roce_v1_priv *)VAR_26->priv;
 VAR_34 = &VAR_35->tptr_table.tptr_buf;

 VAR_33 = VAR_28;
 FUNC_2(VAR_33, 0, sizeof(*VAR_33));


 VAR_37 = VAR_27->cqn * VAR_25;
 VAR_36 = VAR_34->map + VAR_37;
 VAR_27->tptr_addr = (u16 *)(VAR_34->buf + VAR_37);


 FUNC_4(VAR_33->cqc_byte_4,
         VAR_19,
         VAR_20, VAR_24);
 FUNC_4(VAR_33->cqc_byte_4, VAR_21,
         VAR_22, VAR_27->cqn);

 VAR_33->cq_bt_l = FUNC_0((u32)VAR_30);

 FUNC_4(VAR_33->cqc_byte_12,
         VAR_2,
         VAR_3,
         ((u64)VAR_30 >> 32));
 FUNC_4(VAR_33->cqc_byte_12,
         VAR_4,
         VAR_5,
         FUNC_1((unsigned int)VAR_31));
 FUNC_4(VAR_33->cqc_byte_12, VAR_0,
         VAR_1, VAR_32);

 VAR_33->cur_cqe_ba0_l = FUNC_0((u32)(VAR_29[0]));

 FUNC_4(VAR_33->cqc_byte_20,
         VAR_10,
         VAR_11, (VAR_29[0]) >> 32);

 FUNC_4(VAR_33->cqc_byte_20,
         VAR_8,
         VAR_9, 0);





 FUNC_4(VAR_33->cqc_byte_20,
         VAR_6,
         VAR_7,
         VAR_36 >> 44);

 VAR_33->cqe_tptr_addr_l = FUNC_0((u32)(VAR_36 >> 12));

 FUNC_4(VAR_33->cqc_byte_32,
         VAR_15,
         VAR_16, 0);
 FUNC_3(VAR_33->cqc_byte_32,
       VAR_18, 0);
 FUNC_3(VAR_33->cqc_byte_32,
       VAR_12, 0);
 FUNC_3(VAR_33->cqc_byte_32,
       VAR_17, 0);
 FUNC_3(VAR_33->cqc_byte_32,
       VAR_23,
       0);

 FUNC_4(VAR_33->cqc_byte_32,
         VAR_13,
         VAR_14, 0);
}
