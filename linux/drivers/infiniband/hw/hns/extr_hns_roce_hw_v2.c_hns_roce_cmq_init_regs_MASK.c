
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_v2_cmq_ring {int desc_num; scalar_t__ desc_dma_addr; } ;
struct TYPE_2__ {struct hns_roce_v2_cmq_ring crq; struct hns_roce_v2_cmq_ring csq; } ;
struct hns_roce_v2_priv {TYPE_1__ cmq; } ;
struct hns_roce_dev {scalar_t__ priv; } ;
typedef scalar_t__ dma_addr_t ;


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
 int FUNC_0 (struct hns_roce_dev*,int ,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_12, bool VAR_13)
{
 struct hns_roce_v2_priv *VAR_14 = (struct hns_roce_v2_priv *)VAR_12->priv;
 struct hns_roce_v2_cmq_ring *VAR_15 = (VAR_13 == VAR_11) ?
         &VAR_14->cmq.csq : &VAR_14->cmq.crq;
 dma_addr_t VAR_16 = VAR_15->desc_dma_addr;

 if (VAR_13 == VAR_11) {
  FUNC_0(VAR_12, VAR_7, (u32)VAR_16);
  FUNC_0(VAR_12, VAR_6,
      FUNC_1(VAR_16));
  FUNC_0(VAR_12, VAR_8,
      VAR_15->desc_num >> VAR_0);
  FUNC_0(VAR_12, VAR_9, 0);
  FUNC_0(VAR_12, VAR_10, 0);
 } else {
  FUNC_0(VAR_12, VAR_2, (u32)VAR_16);
  FUNC_0(VAR_12, VAR_1,
      FUNC_1(VAR_16));
  FUNC_0(VAR_12, VAR_3,
      VAR_15->desc_num >> VAR_0);
  FUNC_0(VAR_12, VAR_4, 0);
  FUNC_0(VAR_12, VAR_5, 0);
 }
}
