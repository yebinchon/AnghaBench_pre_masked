
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct creq_map_tc_to_cos_resp {int dummy; } ;
struct cmdq_map_tc_to_cos {void* cos1; void* cos0; } ;
struct bnxt_qplib_res {struct bnxt_qplib_rcfw* rcfw; } ;
struct bnxt_qplib_rcfw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmdq_map_tc_to_cos,int ,int ) ;
 int FUNC_1 (struct bnxt_qplib_rcfw*,void*,void*,int *,int ) ;
 void* FUNC_2 (int ) ;

int FUNC_3(struct bnxt_qplib_res *VAR_1, u16 *VAR_2)
{
 struct bnxt_qplib_rcfw *VAR_3 = VAR_1->rcfw;
 struct cmdq_map_tc_to_cos VAR_4;
 struct creq_map_tc_to_cos_resp VAR_5;
 u16 VAR_6 = 0;

 FUNC_0(VAR_4, VAR_0, VAR_6);
 VAR_4.cos0 = FUNC_2(VAR_2[0]);
 VAR_4.cos1 = FUNC_2(VAR_2[1]);

 return FUNC_1(VAR_3, (void *)&VAR_4, (void *)&VAR_5,
      ((void*)0), 0);
}
