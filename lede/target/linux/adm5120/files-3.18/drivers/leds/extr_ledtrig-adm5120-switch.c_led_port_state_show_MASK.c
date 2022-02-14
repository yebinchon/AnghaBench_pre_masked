
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_state {char* name; } ;
struct led_classdev {struct port_state* trigger_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct port_state*) ;
 struct led_classdev* FUNC_1 (struct device*) ;
 struct port_state* VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct led_classdev *VAR_4 = FUNC_1(VAR_1);
 struct port_state *VAR_5 = VAR_4->trigger_data;
 int VAR_6 = 0;
 int VAR_7;

 *VAR_3 = '\0';
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
  if (&VAR_0[VAR_7] == VAR_5)
   VAR_6 += FUNC_2(VAR_3+VAR_6, "[%s] ", VAR_0[VAR_7].name);
  else
   VAR_6 += FUNC_2(VAR_3+VAR_6, "%s ", VAR_0[VAR_7].name);
 }
 VAR_6 += FUNC_2(VAR_3+VAR_6, "\n");

 return VAR_6;
}
