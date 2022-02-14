
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stratix10_rsu_priv {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct stratix10_rsu_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int VAR_2 ;
 int FUNC_3 (struct stratix10_rsu_priv*,int ,unsigned long,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct stratix10_rsu_priv *VAR_7 = FUNC_1(VAR_3);
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_7 == 0)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_5, 0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_7, VAR_0,
      VAR_8, VAR_2);
 if (VAR_9) {
  FUNC_0(VAR_3, "Error, RSU update returned %i\n", VAR_9);
  return VAR_9;
 }

 return VAR_6;
}
