
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ private; } ;
struct hfi1_ibdev {int dummy; } ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {int dummy; } ;
typedef int loff_t ;


 struct hfi1_devdata* FUNC_0 (struct hfi1_ibdev*) ;
 struct hfi1_ctxtdata* FUNC_1 (struct hfi1_devdata*,int ) ;
 int FUNC_2 (struct hfi1_ctxtdata*) ;
 int FUNC_3 (struct seq_file*,struct hfi1_ctxtdata*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct hfi1_ibdev *VAR_2 = (struct hfi1_ibdev *)VAR_0->private;
 struct hfi1_devdata *VAR_3 = FUNC_0(VAR_2);
 struct hfi1_ctxtdata *VAR_4;
 loff_t *VAR_5 = VAR_1;
 loff_t VAR_6 = *VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_6);
 if (VAR_4)
  FUNC_3(VAR_0, VAR_4);
 FUNC_2(VAR_4);
 return 0;
}
