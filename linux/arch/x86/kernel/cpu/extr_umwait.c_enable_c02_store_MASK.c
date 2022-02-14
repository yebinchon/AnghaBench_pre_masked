
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 bool VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, &VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_2(&VAR_1);

 VAR_7 = FUNC_0(VAR_0);
 if (VAR_6 != FUNC_4(VAR_7))
  FUNC_5(VAR_7, VAR_6);

 FUNC_3(&VAR_1);

 return VAR_5;
}
