
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acx565akm_panel {int has_cabc; } ;
typedef int ssize_t ;


 int FUNC_0 (char**) ;
 char** VAR_0 ;
 int FUNC_1 (struct acx565akm_panel*) ;
 struct acx565akm_panel* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct acx565akm_panel *VAR_4 = FUNC_2(VAR_1);
 const char *VAR_5;
 int VAR_6;

 if (!VAR_4->has_cabc)
  VAR_6 = 0;
 else
  VAR_6 = FUNC_1(VAR_4);

 VAR_5 = "unknown";
 if (VAR_6 >= 0 && VAR_6 < FUNC_0(VAR_0))
  VAR_5 = VAR_0[VAR_6];

 return FUNC_3(VAR_3, "%s\n", VAR_5);
}
