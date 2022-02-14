
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acx565akm_panel {int has_cabc; } ;
typedef size_t ssize_t ;


 unsigned int FUNC_0 (char**) ;
 char** VAR_0 ;
 struct acx565akm_panel* FUNC_1 (struct device*) ;
 size_t FUNC_2 (char*,char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct acx565akm_panel *VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5;
 size_t VAR_6 = 0;

 if (!VAR_4->has_cabc)
  return FUNC_2(VAR_3, "%s\n", VAR_0[0]);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  VAR_6 += FUNC_2(&VAR_3[VAR_6], "%s%s", VAR_5 ? " " : "",
          VAR_0[VAR_5]);

 VAR_3[VAR_6++] = '\n';

 return VAR_6;
}
