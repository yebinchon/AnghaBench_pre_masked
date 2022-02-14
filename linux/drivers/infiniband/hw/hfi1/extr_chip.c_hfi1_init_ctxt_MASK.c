
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct send_context {scalar_t__ type; int hw_context; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_5 (struct hfi1_devdata*,int ,int ,int ) ;

void FUNC_6(struct send_context *VAR_3)
{
 if (VAR_3) {
  struct hfi1_devdata *VAR_4 = VAR_3->dd;
  u64 VAR_5;
  u8 VAR_6 = (VAR_3->type == VAR_0 ?
     FUNC_2(VAR_2) :
     FUNC_1(VAR_2));
  VAR_5 = FUNC_4(VAR_4, VAR_3->hw_context,
         VAR_1);
  if (VAR_6)
   FUNC_0(VAR_5);
  else
   FUNC_3(VAR_5);
  FUNC_5(VAR_4, VAR_3->hw_context,
    VAR_1, VAR_5);
 }
}
