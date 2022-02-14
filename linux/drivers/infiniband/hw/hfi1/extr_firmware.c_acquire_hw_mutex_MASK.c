
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct hfi1_devdata {int hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int ,int ,char*) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int ) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct hfi1_devdata*,int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (struct hfi1_devdata*,int ,scalar_t__) ;

int FUNC_7(struct hfi1_devdata *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 0;
 u8 VAR_7 = 1 << VAR_4->hfi1_id;
 u8 VAR_8 = (u8)FUNC_4(VAR_4, VAR_0);

 if (VAR_8 == VAR_7) {
  FUNC_1(VAR_4,
       "Hardware mutex already acquired, mutex mask %u\n",
       (u32)VAR_7);
  return 0;
 }

retry:
 VAR_5 = FUNC_2(VAR_2) + VAR_3;
 while (1) {
  FUNC_6(VAR_4, VAR_0, VAR_7);
  VAR_8 = (u8)FUNC_4(VAR_4, VAR_0);
  if (VAR_8 == VAR_7)
   return 0;
  if (FUNC_5(VAR_3, VAR_5))
   break;
  FUNC_3(20);
 }


 FUNC_0(VAR_4,
     "Unable to acquire hardware mutex, mutex mask %u, my mask %u (%s)\n",
     (u32)VAR_8, (u32)VAR_7, (VAR_6 == 0) ? "retrying" : "giving up");

 if (VAR_6 == 0) {

  FUNC_6(VAR_4, VAR_0, 0);
  VAR_6++;
  goto retry;
 }

 return -VAR_1;
}
