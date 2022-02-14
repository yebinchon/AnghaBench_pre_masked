
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ private; } ;
struct picolcd_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct picolcd_data*) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 if (FUNC_0((struct picolcd_data *)VAR_0->private))
  FUNC_1(VAR_0, "all fb\n");
 else
  FUNC_1(VAR_0, "all\n");
 return 0;
}
