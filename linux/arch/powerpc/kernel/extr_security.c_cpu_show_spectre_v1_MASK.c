
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_buf {int len; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct seq_buf*,char*,scalar_t__) ;
 int FUNC_2 (struct seq_buf*,char*) ;

ssize_t FUNC_3(struct device *VAR_4, struct device_attribute *VAR_5, char *VAR_6)
{
 struct seq_buf VAR_7;

 FUNC_1(&VAR_7, VAR_6, VAR_0 - 1);

 if (FUNC_0(VAR_1)) {
  if (VAR_3)
   FUNC_2(&VAR_7, "Mitigation: __user pointer sanitization");
  else
   FUNC_2(&VAR_7, "Vulnerable");

  if (FUNC_0(VAR_2))
   FUNC_2(&VAR_7, ", ori31 speculation barrier enabled");

  FUNC_2(&VAR_7, "\n");
 } else
  FUNC_2(&VAR_7, "Not affected\n");

 return VAR_7.len;
}
