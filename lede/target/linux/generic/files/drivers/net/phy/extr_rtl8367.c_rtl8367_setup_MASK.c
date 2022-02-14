
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8367_platform_data {int extif1_cfg; int extif0_cfg; } ;
struct rtl8366_smi {TYPE_1__* parent; } ;
struct TYPE_2__ {scalar_t__ of_node; struct rtl8367_platform_data* platform_data; } ;


 int FUNC_0 (struct rtl8366_smi*,int ,int,int) ;
 int FUNC_1 (struct rtl8366_smi*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct rtl8366_smi*,int,int ) ;
 int FUNC_4 (struct rtl8366_smi*,int,char*) ;
 int FUNC_5 (struct rtl8366_smi*) ;
 int FUNC_6 (struct rtl8366_smi*,int) ;
 int FUNC_7 (struct rtl8366_smi*,int ,int) ;
 int FUNC_8 (struct rtl8366_smi*,int ) ;
 int FUNC_9 (struct rtl8366_smi*,int ,int ) ;
 int FUNC_10 (struct rtl8366_smi*) ;

__attribute__((used)) static int FUNC_11(struct rtl8366_smi *VAR_9)
{
 struct rtl8367_platform_data *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = VAR_9->parent->platform_data;

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11)
  return VAR_11;


 if (VAR_9->parent->of_node) {
  VAR_11 = FUNC_4(VAR_9, 0, "realtek,extif0");
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_4(VAR_9, 1, "realtek,extif1");
  if (VAR_11)
   return VAR_11;
 } else {
  VAR_11 = FUNC_3(VAR_9, 0, VAR_10->extif0_cfg);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_3(VAR_9, 1, VAR_10->extif1_cfg);
  if (VAR_11)
   return VAR_11;
 }


 FUNC_0(VAR_9, VAR_7, VAR_6,
  VAR_5);





 FUNC_1(VAR_9, VAR_8, VAR_1);




 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
  FUNC_0(VAR_9,
   FUNC_2(VAR_12),
   VAR_2 <<
    VAR_4,
   VAR_3 <<
    VAR_4);


 VAR_11 = FUNC_9(VAR_9, 0, VAR_1);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_8(VAR_9, 0);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_10(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_6(VAR_9, 1);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_7(VAR_9, 0, 2);
 if (VAR_11)
  return VAR_11;

 return 0;
}
