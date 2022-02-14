
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct hfi1_devdata {int dummy; } ;
struct err_reg_info {int mask; int desc; int (* handler ) (struct hfi1_devdata*,scalar_t__,scalar_t__) ;int clear; int status; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int (*) (struct hfi1_devdata*,scalar_t__,scalar_t__)) ;
 scalar_t__ FUNC_2 (struct hfi1_devdata*,scalar_t__,int ) ;
 int FUNC_3 (struct hfi1_devdata*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct hfi1_devdata*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct hfi1_devdata *VAR_1,
     u32 VAR_2,
     const struct err_reg_info *VAR_3)
{
 u64 VAR_4;
 u32 VAR_5;


 VAR_5 = 0;
 while (1) {
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3->status);
  if (VAR_4 == 0)
   break;
  FUNC_4(VAR_1, VAR_2, VAR_3->clear, VAR_4);
  if (FUNC_1(VAR_3->handler))
   VAR_3->handler(VAR_1, VAR_2, VAR_4);
  VAR_5++;
  if (VAR_5 > VAR_0) {
   u64 VAR_6;

   FUNC_0(VAR_1, "Repeating %s bits 0x%llx - masking\n",
       VAR_3->desc, VAR_4);




   VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3->mask);
   VAR_6 &= ~VAR_4;
   FUNC_4(VAR_1, VAR_2, VAR_3->mask, VAR_6);
   break;
  }
 }
}
