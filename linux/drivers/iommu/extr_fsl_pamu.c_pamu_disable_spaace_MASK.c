
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct paace {int addr_bitfields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 struct paace* FUNC_1 (int) ;
 struct paace* FUNC_2 (struct paace*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(int VAR_5, u32 VAR_6)
{
 struct paace *VAR_7;

 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_7) {
  FUNC_3("Invalid liodn entry\n");
  return -VAR_0;
 }
 if (VAR_6) {
  VAR_7 = FUNC_2(VAR_7, VAR_6 - 1);
  if (!VAR_7)
   return -VAR_0;
  FUNC_4(VAR_7->addr_bitfields, VAR_2, VAR_4);
 } else {
  FUNC_4(VAR_7->addr_bitfields, VAR_1,
         VAR_3);
 }

 FUNC_0();

 return 0;
}
