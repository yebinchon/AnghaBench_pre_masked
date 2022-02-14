
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_pportdata {int dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct hfi1_pportdata*,int) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct hfi1_pportdata *VAR_3,
      int VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6;

 VAR_6 = VAR_2 + FUNC_2(VAR_4);
 while (1) {
  VAR_5 = FUNC_3(VAR_3->dd);
  if ((VAR_5 & 0xF0) != VAR_1)
   break;
  if (FUNC_4(VAR_2, VAR_6)) {
   FUNC_0(VAR_3->dd,
       "timeout waiting for phy link out of offline. Read state 0x%x, %dms\n",
       VAR_5, VAR_4);
   return -VAR_0;
  }
  FUNC_5(1950, 2050);
 }

 FUNC_1(VAR_3, VAR_5);
 return VAR_5;
}
