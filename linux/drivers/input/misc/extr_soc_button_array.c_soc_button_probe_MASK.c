
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_device_data {int (* check ) (struct device*) ;struct soc_button_info* button_info; } ;
struct device {int dummy; } ;
struct soc_button_info {struct device dev; } ;
struct soc_button_data {struct soc_button_info const** children; } ;
typedef struct platform_device {struct device dev; } const platform_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct soc_button_info const*) ;
 int FUNC_1 (struct soc_button_info const*) ;
 struct soc_device_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct soc_button_info const*) ;
 struct soc_button_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct soc_button_info const*,struct soc_button_data*) ;
 struct soc_button_info* FUNC_8 (struct soc_button_info const*,struct soc_button_info const*,int) ;
 struct soc_button_info* FUNC_9 (struct device*) ;
 int FUNC_10 (struct soc_button_info const*) ;
 int FUNC_11 (struct device*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 const struct soc_device_data *VAR_6;
 const struct soc_button_info *VAR_7;
 struct soc_button_data *VAR_8;
 struct platform_device *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 && VAR_6->check) {
  VAR_11 = VAR_6->check(VAR_5);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_6 && VAR_6->button_info) {
  VAR_7 = VAR_6->button_info;
 } else {
  VAR_7 = FUNC_9(VAR_5);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
 }

 VAR_11 = FUNC_6(VAR_5, ((void*)0));
 if (VAR_11 < 0) {
  FUNC_3(VAR_5, "no GPIO attached, ignoring...\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_5(VAR_5, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 FUNC_7(VAR_4, VAR_8);

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_9 = FUNC_8(VAR_4, VAR_7, VAR_10 == 0);
  if (FUNC_0(VAR_9)) {
   VAR_11 = FUNC_1(VAR_9);
   if (VAR_11 != -VAR_1) {
    FUNC_10(VAR_4);
    return VAR_11;
   }
   continue;
  }

  VAR_8->children[VAR_10] = VAR_9;
 }

 if (!VAR_8->children[0] && !VAR_8->children[1])
  return -VAR_1;

 if (!VAR_6 || !VAR_6->button_info)
  FUNC_4(VAR_5, VAR_7);

 return 0;
}
