
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (struct rtl8366_smi*,int ,int*) ;
 int FUNC_3 (struct rtl8366_smi*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rtl8366_smi *VAR_6)
{
 const char *VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11;


 FUNC_3(VAR_6, VAR_4,
         VAR_5);

 VAR_11 = FUNC_2(VAR_6, VAR_2, &VAR_8);
 if (VAR_11) {
  FUNC_0(VAR_6->parent, "unable to read %s register\n",
   "chip number");
  return VAR_11;
 }

 VAR_11 = FUNC_2(VAR_6, VAR_3, &VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_6->parent, "unable to read %s register\n",
   "chip version");
  return VAR_11;
 }

 VAR_11 = FUNC_2(VAR_6, VAR_1, &VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_6->parent, "unable to read %s register\n",
   "chip mode");
  return VAR_11;
 }

 switch (VAR_9) {
 case 0x1000:
  VAR_7 = "8367RB";
  break;
 case 0x1010:
  VAR_7 = "8367R-VB";
  break;
 default:
  FUNC_0(VAR_6->parent,
   "unknown chip num:%04x ver:%04x, mode:%04x\n",
   VAR_8, VAR_9, VAR_10);
  return -VAR_0;
 }

 FUNC_1(VAR_6->parent, "RTL%s chip found\n", VAR_7);

 return 0;
}
