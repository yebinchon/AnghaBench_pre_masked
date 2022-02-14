
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;
typedef int prop_name ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 unsigned int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gpio_desc* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct gpio_desc*) ;
 int VAR_3 ;
 int FUNC_4 (struct device*,struct gpio_desc**) ;
 struct gpio_desc** FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct gpio_desc**) ;
 struct gpio_desc* FUNC_7 (struct fwnode_handle*,char*,int,int,char const*) ;
 char** VAR_4 ;
 int FUNC_8 (char*,int,char*,char const*,...) ;

struct gpio_desc *FUNC_9(struct device *VAR_5,
      const char *VAR_6, int VAR_7,
      struct fwnode_handle *VAR_8,
      enum gpiod_flags VAR_9,
      const char *VAR_10)
{
 char VAR_11[32];
 struct gpio_desc **VAR_12;
 struct gpio_desc *VAR_13;
 unsigned int VAR_14;

 VAR_12 = FUNC_5(VAR_3, sizeof(struct gpio_desc *),
     VAR_2);
 if (!VAR_12)
  return FUNC_1(-VAR_1);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_4); VAR_14++) {
  if (VAR_6)
   FUNC_8(VAR_11, sizeof(VAR_11), "%s-%s",
         VAR_6, VAR_4[VAR_14]);
  else
   FUNC_8(VAR_11, sizeof(VAR_11), "%s",
         VAR_4[VAR_14]);

  VAR_13 = FUNC_7(VAR_8, VAR_11, VAR_7, VAR_9,
           VAR_10);
  if (!FUNC_2(VAR_13) || (FUNC_3(VAR_13) != -VAR_0))
   break;
 }
 if (FUNC_2(VAR_13)) {
  FUNC_6(VAR_12);
  return VAR_13;
 }

 *VAR_12 = VAR_13;
 FUNC_4(VAR_5, VAR_12);

 return VAR_13;
}
