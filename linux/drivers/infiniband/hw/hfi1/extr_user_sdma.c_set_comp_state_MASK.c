
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct hfi1_user_sdma_pkt_q {int subctxt; int ctxt; int dd; } ;
struct hfi1_user_sdma_comp_q {TYPE_1__* comps; } ;
typedef enum hfi1_sdma_comp_state { ____Placeholder_hfi1_sdma_comp_state } hfi1_sdma_comp_state ;
struct TYPE_2__ {int errcode; int status; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,size_t,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct hfi1_user_sdma_pkt_q *VAR_1,
      struct hfi1_user_sdma_comp_q *VAR_2,
      u16 VAR_3, enum hfi1_sdma_comp_state VAR_4,
      int VAR_5)
{
 if (VAR_4 == VAR_0)
  VAR_2->comps[VAR_3].errcode = -VAR_5;
 FUNC_0();
 VAR_2->comps[VAR_3].status = VAR_4;
 FUNC_1(VAR_1->dd, VAR_1->ctxt, VAR_1->subctxt,
     VAR_3, VAR_4, VAR_5);
}
