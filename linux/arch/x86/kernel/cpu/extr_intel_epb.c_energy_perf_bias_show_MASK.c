
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device_attribute {int dummy; } ;
struct device {unsigned int id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ,int *) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 unsigned int VAR_4 = VAR_1->id;
 u64 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_1(VAR_3, "%llu\n", VAR_5);
}
