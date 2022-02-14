
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,char const*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 const char *VAR_7;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_7 = FUNC_0(VAR_4);
  if (!VAR_7)
   continue;

  VAR_5 = FUNC_1(VAR_3, "%d: %s\n", VAR_4, VAR_7);
  if (VAR_5 < 0)
   break;

  VAR_6 += VAR_5;
  VAR_3 += VAR_5;
 }
 return VAR_6;
}
