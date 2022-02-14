
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ private; } ;
struct send_context_info {scalar_t__ type; scalar_t__ sc; scalar_t__ allocated; } ;
struct hfi1_ibdev {int dummy; } ;
struct hfi1_devdata {int sc_lock; struct send_context_info* send_contexts; } ;
typedef size_t loff_t ;


 scalar_t__ VAR_0 ;
 struct hfi1_devdata* FUNC_0 (struct hfi1_ibdev*) ;
 int FUNC_1 (struct seq_file*,size_t,struct send_context_info*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct hfi1_ibdev *VAR_3 = (struct hfi1_ibdev *)VAR_1->private;
 struct hfi1_devdata *VAR_4 = FUNC_0(VAR_3);
 struct send_context_info *VAR_5;
 loff_t *VAR_6 = VAR_2;
 loff_t VAR_7 = *VAR_6;
 unsigned long VAR_8;

 FUNC_2(&VAR_4->sc_lock, VAR_8);
 VAR_5 = &VAR_4->send_contexts[VAR_7];
 if (VAR_5 && VAR_5->type != VAR_0 && VAR_5->allocated && VAR_5->sc)
  FUNC_1(VAR_1, VAR_7, VAR_5);
 FUNC_3(&VAR_4->sc_lock, VAR_8);
 return 0;
}
