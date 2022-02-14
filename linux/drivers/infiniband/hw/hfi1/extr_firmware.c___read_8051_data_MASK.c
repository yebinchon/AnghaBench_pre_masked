
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hfi1_devdata*,int ) ;
 int FUNC_3 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hfi1_devdata *VAR_9, u32 VAR_10, u64 *VAR_11)
{
 u64 VAR_12;
 int VAR_13;


 VAR_12 = (VAR_10 & VAR_2)
   << VAR_3;
 FUNC_3(VAR_9, VAR_1, VAR_12);

 FUNC_3(VAR_9, VAR_1,
    VAR_12 | VAR_4);


 VAR_13 = 0;
 while ((FUNC_2(VAR_9, VAR_6)
      & VAR_7)
      == 0) {
  VAR_13++;
  if (VAR_13 > VAR_0) {
   FUNC_0(VAR_9, "timeout reading 8051 data\n");
   return -VAR_8;
  }
  FUNC_1(10);
 }


 *VAR_11 = FUNC_2(VAR_9, VAR_5);

 return 0;
}
