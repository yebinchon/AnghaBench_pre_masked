
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_ctxtdata {scalar_t__ poll_type; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int __poll_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct qib_ctxtdata* FUNC_0 (struct file*) ;
 int FUNC_1 (struct qib_ctxtdata*,struct file*,struct poll_table_struct*) ;
 int FUNC_2 (struct qib_ctxtdata*,struct file*,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_3, struct poll_table_struct *VAR_4)
{
 struct qib_ctxtdata *VAR_5;
 __poll_t VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5)
  VAR_6 = VAR_0;
 else if (VAR_5->poll_type == VAR_2)
  VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_4);
 else if (VAR_5->poll_type == VAR_1)
  VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_4);
 else
  VAR_6 = VAR_0;

 return VAR_6;
}
