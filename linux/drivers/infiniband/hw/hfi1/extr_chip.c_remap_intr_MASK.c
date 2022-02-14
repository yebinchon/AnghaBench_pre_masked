
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int* gi_mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_3 (struct hfi1_devdata*,scalar_t__,int) ;

void FUNC_4(struct hfi1_devdata *VAR_2, int VAR_3, int VAR_4)
{
 u64 VAR_5;
 int VAR_6, VAR_7;


 VAR_6 = VAR_3 / 64;
 VAR_7 = VAR_3 % 64;
 if (FUNC_1(VAR_6 < VAR_1)) {
  VAR_2->gi_mask[VAR_6] &= ~((u64)1 << VAR_7);
 } else {
  FUNC_0(VAR_2, "remap interrupt err\n");
  return;
 }


 VAR_6 = VAR_3 / 8;
 VAR_7 = VAR_3 % 8;
 VAR_5 = FUNC_2(VAR_2, VAR_0 + (8 * VAR_6));
 VAR_5 &= ~((u64)0xff << (8 * VAR_7));
 VAR_5 |= ((u64)VAR_4 & 0xff) << (8 * VAR_7);
 FUNC_3(VAR_2, VAR_0 + (8 * VAR_6), VAR_5);
}
