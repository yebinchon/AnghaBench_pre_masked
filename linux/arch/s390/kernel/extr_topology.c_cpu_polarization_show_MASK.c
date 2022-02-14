
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int id; } ;
typedef int ssize_t ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = VAR_1->id;
 ssize_t VAR_5;

 FUNC_0(&VAR_0);
 switch (FUNC_2(VAR_4)) {
 case 131:
  VAR_5 = FUNC_3(VAR_3, "horizontal\n");
  break;
 case 129:
  VAR_5 = FUNC_3(VAR_3, "vertical:low\n");
  break;
 case 128:
  VAR_5 = FUNC_3(VAR_3, "vertical:medium\n");
  break;
 case 130:
  VAR_5 = FUNC_3(VAR_3, "vertical:high\n");
  break;
 default:
  VAR_5 = FUNC_3(VAR_3, "unknown\n");
  break;
 }
 FUNC_1(&VAR_0);
 return VAR_5;
}
