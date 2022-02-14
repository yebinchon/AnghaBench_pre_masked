
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device * VAR_3, struct device_attribute *VAR_4,
        const char * VAR_5, size_t VAR_6)
{
 FUNC_0(VAR_3);
 if (FUNC_4(VAR_5, VAR_1))
  FUNC_2(VAR_3);
 else if (FUNC_4(VAR_5, VAR_2))
  FUNC_3(VAR_3);
 else
  VAR_6 = -VAR_0;
 FUNC_1(VAR_3);
 return VAR_6;
}
