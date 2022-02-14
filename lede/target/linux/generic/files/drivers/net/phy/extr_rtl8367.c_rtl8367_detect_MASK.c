
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int parent; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (struct rtl8366_smi*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct rtl8366_smi *VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 char *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_1, &VAR_5);
 if (VAR_8) {
  FUNC_0(VAR_4->parent, "unable to read chip number\n");
  return VAR_8;
 }

 switch (VAR_5) {
 case 128:
  VAR_7 = "8367R";
  break;
 case 129:
  VAR_7 = "8367M";
  break;
 default:
  FUNC_0(VAR_4->parent, "unknown chip number (%04x)\n", VAR_5);
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_4, VAR_3, &VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_4->parent, "unable to read chip version\n");
  return VAR_8;
 }

 FUNC_1(VAR_4->parent, "RTL%s ver. %u chip found\n",
   VAR_7, VAR_6 & VAR_2);

 return 0;
}
