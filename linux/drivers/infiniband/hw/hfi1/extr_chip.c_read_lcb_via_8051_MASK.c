
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_devdata {scalar_t__ icode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (struct hfi1_devdata*,int ,int,int *) ;
 int FUNC_2 (struct hfi1_devdata*,int) ;
 int FUNC_3 (struct hfi1_devdata*,int ) ;

__attribute__((used)) static int FUNC_4(struct hfi1_devdata *VAR_5, u32 VAR_6, u64 *VAR_7)
{
 u32 VAR_8;
 int VAR_9;

 if (VAR_5->icode == VAR_4) {
  if (FUNC_0(VAR_5, 0) == 0) {
   *VAR_7 = FUNC_2(VAR_5, VAR_6);
   FUNC_3(VAR_5, 0);
   return 0;
  }
  return -VAR_1;
 }


 VAR_8 = (VAR_6 - VAR_0) >> 3;
 VAR_9 = FUNC_1(VAR_5, VAR_2, VAR_8, VAR_7);
 if (VAR_9 != VAR_3)
  return -VAR_1;
 return 0;
}
