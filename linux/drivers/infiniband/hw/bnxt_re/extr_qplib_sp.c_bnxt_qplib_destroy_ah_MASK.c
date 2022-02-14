
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct creq_destroy_ah_resp {int dummy; } ;
struct cmdq_destroy_ah {int ah_cid; } ;
struct bnxt_qplib_res {struct bnxt_qplib_rcfw* rcfw; } ;
struct bnxt_qplib_rcfw {int dummy; } ;
struct bnxt_qplib_ah {int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmdq_destroy_ah,int ,int ) ;
 int FUNC_1 (struct bnxt_qplib_rcfw*,void*,void*,int *,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct bnxt_qplib_res *VAR_1, struct bnxt_qplib_ah *VAR_2,
      bool VAR_3)
{
 struct bnxt_qplib_rcfw *VAR_4 = VAR_1->rcfw;
 struct cmdq_destroy_ah VAR_5;
 struct creq_destroy_ah_resp VAR_6;
 u16 VAR_7 = 0;


 FUNC_0(VAR_5, VAR_0, VAR_7);

 VAR_5.ah_cid = FUNC_2(VAR_2->id);

 FUNC_1(VAR_4, (void *)&VAR_5, (void *)&VAR_6, ((void*)0),
         VAR_3);
}
