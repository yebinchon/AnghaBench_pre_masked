
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; } ;
struct stratix10_rsu_priv {TYPE_1__ status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,int) ;
 struct stratix10_rsu_priv* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int ,unsigned long*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct stratix10_rsu_priv*,int ,unsigned long,int ) ;
 int VAR_7 ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_8,
       struct device_attribute *VAR_9,
       const char *VAR_10, size_t VAR_11)
{
 struct stratix10_rsu_priv *VAR_12 = FUNC_2(VAR_8);
 unsigned long VAR_13;
 int VAR_14;

 if (VAR_12 == 0)
  return -VAR_3;

 VAR_14 = FUNC_3(VAR_10, 0, &VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_4(VAR_12, VAR_0,
      VAR_13, VAR_5);
 if (VAR_14) {
  FUNC_1(VAR_8, "Error, RSU notify returned %i\n", VAR_14);
  return VAR_14;
 }


 VAR_14 = FUNC_4(VAR_12, VAR_2,
      0, VAR_7);
 if (VAR_14) {
  FUNC_1(VAR_8, "Error, getting RSU status %i\n", VAR_14);
  return VAR_14;
 }


 if (FUNC_0(VAR_4, VAR_12->status.version)) {
  VAR_14 = FUNC_4(VAR_12, VAR_1,
       0, VAR_6);
  if (VAR_14) {
   FUNC_1(VAR_8,
    "Error, getting RSU retry %i\n", VAR_14);
   return VAR_14;
  }
 }

 return VAR_11;
}
