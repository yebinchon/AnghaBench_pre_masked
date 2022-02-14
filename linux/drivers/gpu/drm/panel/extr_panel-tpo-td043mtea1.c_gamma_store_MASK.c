
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td043mtea1_panel {unsigned int* gamma; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct td043mtea1_panel* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct td043mtea1_panel*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct td043mtea1_panel *VAR_5 = FUNC_0(VAR_1);
 unsigned int VAR_6[12];
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, "%u %u %u %u %u %u %u %u %u %u %u %u",
       &VAR_6[0], &VAR_6[1], &VAR_6[2], &VAR_6[3], &VAR_6[4], &VAR_6[5],
       &VAR_6[6], &VAR_6[7], &VAR_6[8], &VAR_6[9], &VAR_6[10], &VAR_6[11]);
 if (VAR_8 != 12)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < 12; VAR_7++)
  VAR_5->gamma[VAR_7] = VAR_6[VAR_7];

 FUNC_2(VAR_5);

 return VAR_4;
}
