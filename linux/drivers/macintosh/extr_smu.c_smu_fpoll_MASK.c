
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct smu_private {scalar_t__ mode; int lock; TYPE_1__ cmd; scalar_t__ busy; int wait; } ;
struct file {struct smu_private* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int *,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_3, poll_table *VAR_4)
{
 struct smu_private *VAR_5 = VAR_3->private_data;
 __poll_t VAR_6 = 0;
 unsigned long VAR_7;

 if (VAR_5 == 0)
  return 0;

 if (VAR_5->mode == VAR_1) {
  FUNC_0(VAR_3, &VAR_5->wait, VAR_4);

  FUNC_1(&VAR_5->lock, VAR_7);
  if (VAR_5->busy && VAR_5->cmd.status != 1)
   VAR_6 |= VAR_0;
  FUNC_2(&VAR_5->lock, VAR_7);
 }
 if (VAR_5->mode == VAR_2) {

 }
 return VAR_6;
}
