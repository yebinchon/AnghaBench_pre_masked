
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8366_smi*,int ,int*) ;
 int FUNC_1 (struct rtl8366_smi*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rtl8366_smi *VAR_4)
{
 int VAR_5 = 10;
 int VAR_6;
 u32 VAR_7;

 FUNC_1(VAR_4, VAR_2, VAR_1);
 FUNC_3(VAR_3);

 do {
  FUNC_0(VAR_4, VAR_2, &VAR_7);
  if (!(VAR_7 & VAR_1))
   break;

  FUNC_3(1);
 } while (--VAR_5);

 if (!VAR_5) {
  FUNC_2(VAR_4->parent, "chip reset timed out\n");
  return -VAR_0;
 }

 return 0;
}
