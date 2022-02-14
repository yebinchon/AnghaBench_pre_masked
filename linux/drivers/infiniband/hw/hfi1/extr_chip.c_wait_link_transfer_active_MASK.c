
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct hfi1_devdata*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct hfi1_devdata *VAR_3, int VAR_4)
{
 u64 VAR_5;
 unsigned long VAR_6;


 VAR_6 = VAR_2 + FUNC_1(VAR_4);
 while (1) {
  VAR_5 = FUNC_2(VAR_3, VAR_0);
  if (VAR_5)
   break;
  if (FUNC_3(VAR_2, VAR_6)) {
   FUNC_0(VAR_3,
       "timeout waiting for LINK_TRANSFER_ACTIVE\n");
   return -VAR_1;
  }
  FUNC_4(2);
 }
 return 0;
}
