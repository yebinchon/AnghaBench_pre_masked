
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int ngpio; char const* const* names; int label; } ;
struct gpio_mockup_chip {struct gpio_chip gc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct device*,int ,char*,int ,int) ;
 char** FUNC_1 (struct device*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2,
      struct gpio_mockup_chip *VAR_3)
{
 struct gpio_chip *VAR_4 = &VAR_3->gc;
 char **VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_4->ngpio, sizeof(char *), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->ngpio; VAR_6++) {
  VAR_5[VAR_6] = FUNC_0(VAR_2, VAR_1,
       "%s-%d", VAR_4->label, VAR_6);
  if (!VAR_5[VAR_6])
   return -VAR_0;
 }

 VAR_4->names = (const char *const *)VAR_5;

 return 0;
}
