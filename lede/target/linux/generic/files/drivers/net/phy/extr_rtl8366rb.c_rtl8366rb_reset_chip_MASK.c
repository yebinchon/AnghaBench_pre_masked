
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct rtl8366_smi*,int ,int*) ;
 int FUNC_3 (struct rtl8366_smi*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct rtl8366_smi *VAR_3)
{
 int VAR_4 = 10;
 u32 VAR_5;

 FUNC_3(VAR_3, VAR_2,
         VAR_1);
 do {
  FUNC_0(1);
  if (FUNC_2(VAR_3, VAR_2, &VAR_5))
   return -VAR_0;

  if (!(VAR_5 & VAR_1))
   break;
 } while (--VAR_4);

 if (!VAR_4) {
  FUNC_1("Timeout waiting for the switch to reset\n");
  return -VAR_0;
 }

 return 0;
}
