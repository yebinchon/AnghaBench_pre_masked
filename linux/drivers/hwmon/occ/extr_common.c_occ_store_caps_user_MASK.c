
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct occ {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct occ* FUNC_0 (struct device*) ;
 int FUNC_1 (unsigned long long,unsigned long long) ;
 int FUNC_2 (char const*,int ,unsigned long long*) ;
 int FUNC_3 (struct occ*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 unsigned long long VAR_6;
 struct occ *VAR_7 = FUNC_0(VAR_0);

 VAR_4 = FUNC_2(VAR_2, 0, &VAR_6);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_1(VAR_6, 1000000ULL);

 VAR_4 = FUNC_3(VAR_7, VAR_5);
 if (VAR_4)
  return VAR_4;

 return VAR_3;
}
