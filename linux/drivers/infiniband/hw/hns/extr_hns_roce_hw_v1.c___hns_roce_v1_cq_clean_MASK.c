
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hns_roce_srq {int dummy; } ;
struct hns_roce_cqe {int cqe_byte_4; int cqe_byte_16; } ;
struct TYPE_2__ {int cqe; } ;
struct hns_roce_cq {int cons_index; TYPE_1__ ib_cq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hns_roce_cqe* FUNC_0 (struct hns_roce_cq*,int) ;
 scalar_t__ FUNC_1 (struct hns_roce_cq*,int) ;
 int FUNC_2 (struct hns_roce_cq*,int) ;
 int FUNC_3 (struct hns_roce_cqe*,struct hns_roce_cqe*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct hns_roce_cq *VAR_4, u32 VAR_5,
       struct hns_roce_srq *VAR_6)
{
 struct hns_roce_cqe *VAR_7, *VAR_8;
 u32 VAR_9;
 int VAR_10 = 0;
 u8 VAR_11;

 for (VAR_9 = VAR_4->cons_index; FUNC_1(VAR_4, VAR_9);
      ++VAR_9) {
  if (VAR_9 == VAR_4->cons_index + VAR_4->ib_cq.cqe)
   break;
 }





 while ((int) --VAR_9 - (int) VAR_4->cons_index >= 0) {
  VAR_7 = FUNC_0(VAR_4, VAR_9 & VAR_4->ib_cq.cqe);
  if ((FUNC_5(VAR_7->cqe_byte_16, VAR_0,
         VAR_1) &
         VAR_3) == VAR_5) {

   ++VAR_10;
  } else if (VAR_10) {
   VAR_8 = FUNC_0(VAR_4, (VAR_9 + VAR_10) &
           VAR_4->ib_cq.cqe);
   VAR_11 = FUNC_4(VAR_8->cqe_byte_4,
       VAR_2);
   FUNC_3(VAR_8, VAR_7, sizeof(*VAR_7));
   FUNC_6(VAR_8->cqe_byte_4, VAR_2,
         VAR_11);
  }
 }

 if (VAR_10) {
  VAR_4->cons_index += VAR_10;




  FUNC_7();

  FUNC_2(VAR_4, VAR_4->cons_index);
 }
}
