
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rvt_qp {int s_flags; } ;
struct ib_other_headers {int * bth; } ;
struct hfi1_opa_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 struct ib_other_headers* FUNC_3 (struct hfi1_opa_header*) ;
 scalar_t__ FUNC_4 (struct ib_other_headers*) ;
 int FUNC_5 (struct ib_other_headers*) ;

void FUNC_6(struct rvt_qp *VAR_6, struct hfi1_opa_header *VAR_7)
{
 struct ib_other_headers *VAR_8 = FUNC_3(VAR_7);
 u8 VAR_9 = FUNC_4(VAR_8);
 u32 VAR_10;


 if ((VAR_9 >= FUNC_0(VAR_2) &&
      VAR_9 <= FUNC_0(VAR_0)) ||
     VAR_9 == FUNC_1(VAR_3) ||
     VAR_9 == FUNC_1(VAR_5))
  return;

 VAR_10 = FUNC_5(VAR_8) | VAR_1;
 VAR_8->bth[2] = FUNC_2(VAR_10);
 VAR_6->s_flags |= VAR_4;
}
