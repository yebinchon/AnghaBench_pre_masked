
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {scalar_t__ icode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hfi1_devdata *VAR_6)
{
 u64 VAR_7;
 int VAR_8, VAR_9 = 0;


 VAR_8 = (VAR_6->icode == VAR_2) ? 120 : 5;
 while (1) {
  VAR_7 = FUNC_0(VAR_6, VAR_3);
  if (!(VAR_7 & VAR_5))
   break;
  if (VAR_9 >= VAR_8)
   return -VAR_1;
  FUNC_1(5);
  VAR_9++;
 }

 return VAR_7 & VAR_4 ? -VAR_0 : 0;
}
