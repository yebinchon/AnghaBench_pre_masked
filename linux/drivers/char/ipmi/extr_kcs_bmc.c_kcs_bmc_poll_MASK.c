
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcs_bmc {int lock; scalar_t__ data_in_avail; int queue; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct kcs_bmc* FUNC_3 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_1, poll_table *VAR_2)
{
 struct kcs_bmc *VAR_3 = FUNC_3(VAR_1);
 __poll_t VAR_4 = 0;

 FUNC_0(VAR_1, &VAR_3->queue, VAR_2);

 FUNC_1(&VAR_3->lock);
 if (VAR_3->data_in_avail)
  VAR_4 |= VAR_0;
 FUNC_2(&VAR_3->lock);

 return VAR_4;
}
