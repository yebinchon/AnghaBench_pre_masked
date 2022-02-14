
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct palmas_pwron_config {int long_press_time_val; int pwron_debounce_val; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct palmas_pwron_config*,int ,int) ;
 int FUNC_3 (struct device_node*,char*,int*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0,
           struct palmas_pwron_config *VAR_1)
{
 struct device_node *VAR_2;
 u32 VAR_3;
 int VAR_4, VAR_5;
 u8 VAR_6[] = { 6, 8, 10, 12 };
 int VAR_7[] = { 15, 100, 500, 1000 };

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));


 VAR_1->long_press_time_val = FUNC_0(VAR_6) - 1;

 VAR_2 = VAR_0->of_node;
 if (!VAR_2)
  return;

 VAR_5 = FUNC_3(VAR_2, "ti,palmas-long-press-seconds", &VAR_3);
 if (!VAR_5) {
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_6); VAR_4++) {
   if (VAR_3 <= VAR_6[VAR_4]) {
    VAR_1->long_press_time_val = VAR_4;
    break;
   }
  }
 }

 VAR_5 = FUNC_3(VAR_2,
         "ti,palmas-pwron-debounce-milli-seconds",
         &VAR_3);
 if (!VAR_5) {
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_7); VAR_4++) {
   if (VAR_3 <= VAR_7[VAR_4]) {
    VAR_1->pwron_debounce_val = VAR_4;
    break;
   }
  }
 }

 FUNC_1(VAR_0, "h/w controlled shutdown duration=%d seconds\n",
   VAR_6[VAR_1->long_press_time_val]);
}
