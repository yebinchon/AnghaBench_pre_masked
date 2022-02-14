
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_buf {int len; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_buf*,char*,scalar_t__) ;
 int FUNC_2 (struct seq_buf*,char*) ;

ssize_t FUNC_3(struct device *VAR_7, struct device_attribute *VAR_8, char *VAR_9)
{
 struct seq_buf VAR_10;
 bool VAR_11, VAR_12;

 FUNC_1(&VAR_10, VAR_9, VAR_2 - 1);

 VAR_11 = FUNC_0(VAR_3);
 VAR_12 = FUNC_0(VAR_4);

 if (VAR_11 || VAR_12) {
  FUNC_2(&VAR_10, "Mitigation: ");

  if (VAR_11)
   FUNC_2(&VAR_10, "Indirect branch serialisation (kernel only)");

  if (VAR_11 && VAR_12)
   FUNC_2(&VAR_10, ", ");

  if (VAR_12)
   FUNC_2(&VAR_10, "Indirect branch cache disabled");
 } else if (VAR_6 != VAR_1) {
  FUNC_2(&VAR_10, "Mitigation: Software count cache flush");

  if (VAR_6 == VAR_0)
   FUNC_2(&VAR_10, " (hardware accelerated)");
 } else if (VAR_5) {
  FUNC_2(&VAR_10, "Mitigation: Branch predictor state flush");
 } else {
  FUNC_2(&VAR_10, "Vulnerable");
 }

 FUNC_2(&VAR_10, "\n");

 return VAR_10.len;
}
