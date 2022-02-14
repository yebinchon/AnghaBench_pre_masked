
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct send_context {int type; int hw_context; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hfi1_devdata*,int) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int ,int ) ;

void FUNC_3(struct send_context *VAR_1)
{
 struct hfi1_devdata *VAR_2 = VAR_1->dd;
 u32 VAR_3 = VAR_1->hw_context;
 int VAR_4 = VAR_1->type;

 FUNC_2(VAR_2, VAR_3,
   FUNC_0(VAR_0),
   FUNC_1(VAR_2, VAR_4));
}
