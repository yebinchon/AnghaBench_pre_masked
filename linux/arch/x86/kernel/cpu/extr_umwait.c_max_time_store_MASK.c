
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
         struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 u32 VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_6, 0, &VAR_8);
 if (VAR_10)
  return VAR_10;


 if (VAR_8 & ~VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_3);

 VAR_9 = FUNC_0(VAR_2);
 if (VAR_8 != FUNC_5(VAR_9))
  FUNC_6(VAR_8, FUNC_4(VAR_9));

 FUNC_3(&VAR_3);

 return VAR_7;
}
