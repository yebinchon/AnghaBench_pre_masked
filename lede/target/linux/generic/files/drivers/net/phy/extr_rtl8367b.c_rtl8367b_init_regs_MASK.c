
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8367b_initval {int dummy; } ;
struct rtl8366_smi {int parent; } ;


 int FUNC_0 (struct rtl8367b_initval*) ;
 int VAR_0 ;
 int FUNC_1 (struct rtl8366_smi*,int ,int*) ;
 int FUNC_2 (struct rtl8366_smi*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct rtl8366_smi*,struct rtl8367b_initval const*,int) ;
 struct rtl8367b_initval* VAR_6 ;
 struct rtl8367b_initval* VAR_7 ;

__attribute__((used)) static int FUNC_5(struct rtl8366_smi *VAR_8)
{
 const struct rtl8367b_initval *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_2(VAR_8, VAR_4, VAR_5);
 FUNC_1(VAR_8, VAR_1, &VAR_10);

 VAR_11 = (VAR_10 >> VAR_3) &
  VAR_2;

 switch (VAR_11) {
 case 0:
  VAR_9 = VAR_6;
  VAR_12 = FUNC_0(VAR_6);
  break;

 case 1:
  VAR_9 = VAR_7;
  VAR_12 = FUNC_0(VAR_7);
  break;

 default:
  FUNC_3(VAR_8->parent, "unknow rlvid %u\n", VAR_11);
  return -VAR_0;
 }



 return FUNC_4(VAR_8, VAR_9, VAR_12);
}
