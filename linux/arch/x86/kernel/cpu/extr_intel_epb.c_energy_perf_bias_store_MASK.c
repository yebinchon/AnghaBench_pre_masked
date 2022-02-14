
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device_attribute {int dummy; } ;
struct device {unsigned int id; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char const*) ;
 int* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (unsigned int,int ,int*) ;
 int FUNC_4 (unsigned int,int ,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_6,
          struct device_attribute *VAR_7,
          const char *VAR_8, size_t VAR_9)
{
 unsigned int VAR_10 = VAR_6->id;
 u64 VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_5,
       FUNC_0(VAR_5), VAR_8);
 if (VAR_13 >= 0)
  VAR_12 = VAR_4[VAR_13];
 else if (FUNC_2(VAR_8, 0, &VAR_12) || VAR_12 > VAR_2)
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_10, VAR_3, &VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_10, VAR_3,
       (VAR_11 & ~VAR_1) | VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 return VAR_9;
}
