
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct hfi1_devdata*,int ) ;
 int FUNC_3 (struct hfi1_devdata*,int ,int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hfi1_devdata*,int ,int ) ;

int FUNC_6(struct hfi1_devdata *VAR_11,
        u8 VAR_12, u8 VAR_13, u8 VAR_14, u32 VAR_15)
{
 u64 VAR_16, VAR_17 = 0;


 FUNC_1(VAR_11);

 FUNC_3(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
 FUNC_5(VAR_11, VAR_0,
    VAR_1);

 VAR_16 = FUNC_2(VAR_11, VAR_3);
 while (!((VAR_16 & VAR_4) &&
   (VAR_16 & VAR_5))) {
  if (VAR_17++ >= VAR_10) {
   u64 VAR_18 = FUNC_2(VAR_11, VAR_2);





   if ((VAR_16 & VAR_4) &&
       (FUNC_0(VAR_18, VAR_9) ==
        FUNC_0(VAR_18, VAR_8)))
    break;
   return -VAR_7;
  }
  FUNC_4(1);
  VAR_16 = FUNC_2(VAR_11, VAR_3);
 }
 VAR_17 = 0;
 FUNC_5(VAR_11, VAR_0, 0);

 VAR_16 = FUNC_2(VAR_11, VAR_3);
 while (VAR_16 & VAR_4) {
  if (VAR_17++ >= VAR_10)
   return -VAR_6;
  FUNC_4(1);
  VAR_16 = FUNC_2(VAR_11, VAR_3);
 }
 return 0;
}
