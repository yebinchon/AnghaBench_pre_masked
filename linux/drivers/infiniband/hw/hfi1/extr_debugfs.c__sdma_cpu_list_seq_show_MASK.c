
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ private; } ;
struct hfi1_ibdev {int dummy; } ;
struct hfi1_devdata {int dummy; } ;
typedef scalar_t__ loff_t ;


 struct hfi1_devdata* FUNC_0 (struct hfi1_ibdev*) ;
 int FUNC_1 (struct seq_file*,struct hfi1_devdata*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct hfi1_ibdev *VAR_2 = (struct hfi1_ibdev *)VAR_0->private;
 struct hfi1_devdata *VAR_3 = FUNC_0(VAR_2);
 loff_t *VAR_4 = VAR_1;
 loff_t VAR_5 = *VAR_4;

 FUNC_1(VAR_0, VAR_3, (unsigned long)VAR_5);
 return 0;
}
