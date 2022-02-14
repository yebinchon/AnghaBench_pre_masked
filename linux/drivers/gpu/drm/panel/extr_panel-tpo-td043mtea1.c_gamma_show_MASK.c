
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td043mtea1_panel {int* gamma; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 struct td043mtea1_panel* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,scalar_t__,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct td043mtea1_panel *VAR_4 = FUNC_1(VAR_1);
 ssize_t VAR_5 = 0;
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->gamma); VAR_6++) {
  VAR_7 = FUNC_2(VAR_3 + VAR_5, VAR_0 - VAR_5, "%u ",
          VAR_4->gamma[VAR_6]);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5 += VAR_7;
 }
 VAR_3[VAR_5 - 1] = '\n';

 return VAR_5;
}
