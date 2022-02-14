
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct as3935_state {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct as3935_state*,int ,int*) ;
 int FUNC_1 (struct device*) ;
 struct as3935_state* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct as3935_state *VAR_5 = FUNC_2(FUNC_1(VAR_2));
 int VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;
 VAR_6 = (VAR_6 & VAR_1) >> 1;

 return FUNC_3(VAR_4, "%d\n", VAR_6);
}
