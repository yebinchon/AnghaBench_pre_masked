
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct hfi1_filedata {struct hfi1_ctxtdata* uctxt; } ;
struct hfi1_ctxtdata {scalar_t__ poll_type; } ;
struct file {scalar_t__ private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct file*,struct poll_table_struct*) ;
 int FUNC_1 (struct file*,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_3, struct poll_table_struct *VAR_4)
{
 struct hfi1_ctxtdata *VAR_5;
 __poll_t VAR_6;

 VAR_5 = ((struct hfi1_filedata *)VAR_3->private_data)->uctxt;
 if (!VAR_5)
  VAR_6 = VAR_0;
 else if (VAR_5->poll_type == VAR_2)
  VAR_6 = FUNC_1(VAR_3, VAR_4);
 else if (VAR_5->poll_type == VAR_1)
  VAR_6 = FUNC_0(VAR_3, VAR_4);
 else
  VAR_6 = VAR_0;

 return VAR_6;
}
