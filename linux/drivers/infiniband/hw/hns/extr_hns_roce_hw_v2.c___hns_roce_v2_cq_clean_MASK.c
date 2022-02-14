
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct hns_roce_v2_cqe {int byte_4; int byte_16; } ;
struct hns_roce_srq {int dummy; } ;
struct TYPE_2__ {int cqe; } ;
struct hns_roce_cq {int cons_index; TYPE_1__ ib_cq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct hns_roce_v2_cqe* FUNC_0 (struct hns_roce_cq*,int) ;
 scalar_t__ FUNC_1 (struct hns_roce_cq*,int) ;
 int FUNC_2 (struct hns_roce_srq*,int) ;
 int FUNC_3 (struct hns_roce_cq*,int) ;
 int FUNC_4 (struct hns_roce_v2_cqe*,struct hns_roce_v2_cqe*,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct hns_roce_cq *VAR_7, u32 VAR_8,
       struct hns_roce_srq *VAR_9)
{
 struct hns_roce_v2_cqe *VAR_10, *VAR_11;
 u32 VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 u8 VAR_15;

 for (VAR_12 = VAR_7->cons_index; FUNC_1(VAR_7, VAR_12);
      ++VAR_12) {
  if (VAR_12 > VAR_7->cons_index + VAR_7->ib_cq.cqe)
   break;
 }





 while ((int) --VAR_12 - (int) VAR_7->cons_index >= 0) {
  VAR_10 = FUNC_0(VAR_7, VAR_12 & VAR_7->ib_cq.cqe);
  if ((FUNC_6(VAR_10->byte_16, VAR_1,
        VAR_2) &
        VAR_0) == VAR_8) {
   if (VAR_9 &&
       FUNC_5(VAR_10->byte_4, VAR_4)) {
    VAR_14 = FUNC_6(VAR_10->byte_4,
           VAR_5,
           VAR_6);
    FUNC_2(VAR_9, VAR_14);
   }
   ++VAR_13;
  } else if (VAR_13) {
   VAR_11 = FUNC_0(VAR_7, (VAR_12 + VAR_13) &
       VAR_7->ib_cq.cqe);
   VAR_15 = FUNC_5(VAR_11->byte_4,
       VAR_3);
   FUNC_4(VAR_11, VAR_10, sizeof(*VAR_10));
   FUNC_7(VAR_11->byte_4, VAR_3,
         VAR_15);
  }
 }

 if (VAR_13) {
  VAR_7->cons_index += VAR_13;




  FUNC_8();
  FUNC_3(VAR_7, VAR_7->cons_index);
 }
}
