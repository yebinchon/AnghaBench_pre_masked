
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfi1_ctxtdata {scalar_t__ seq_cnt; scalar_t__ head; int ctxt; int dd; int rcvhdrtail_kvaddr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hfi1_ctxtdata*) ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct hfi1_ctxtdata *VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 if (!VAR_1->rcvhdrtail_kvaddr)
  VAR_3 = (VAR_1->seq_cnt ==
    FUNC_3(FUNC_4(FUNC_1(VAR_1))));
 else
  VAR_3 = (VAR_1->head != FUNC_0(VAR_1));

 if (VAR_3)
  return 1;


 VAR_2 = (u32)FUNC_2(VAR_1->dd, VAR_1->ctxt, VAR_0);
 return VAR_1->head != VAR_2;
}
