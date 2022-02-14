
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xilly_channel {TYPE_1__* endpoint; int rd_spinlock; int rd_full; int rd_wait; scalar_t__ rd_allow_partial; int wr_spinlock; scalar_t__ wr_hangup; scalar_t__ wr_ready; int wr_empty; int wr_ready_wait; int wr_wait; scalar_t__ wr_supports_nonempty; int wr_synchronous; } ;
struct file {struct xilly_channel* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {scalar_t__ fatal_error; int ep_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_5, poll_table *VAR_6)
{
 struct xilly_channel *VAR_7 = VAR_5->private_data;
 __poll_t VAR_8 = 0;
 unsigned long VAR_9;

 FUNC_0(VAR_5, &VAR_7->endpoint->ep_wait, VAR_6);
 if (!VAR_7->wr_synchronous && VAR_7->wr_supports_nonempty) {
  FUNC_0(VAR_5, &VAR_7->wr_wait, VAR_6);
  FUNC_0(VAR_5, &VAR_7->wr_ready_wait, VAR_6);

  FUNC_1(&VAR_7->wr_spinlock, VAR_9);
  if (!VAR_7->wr_empty || VAR_7->wr_ready)
   VAR_8 |= VAR_1 | VAR_3;

  if (VAR_7->wr_hangup)





   VAR_8 |= VAR_1 | VAR_3;
  FUNC_2(&VAR_7->wr_spinlock, VAR_9);
 }







 if (VAR_7->rd_allow_partial) {
  FUNC_0(VAR_5, &VAR_7->rd_wait, VAR_6);

  FUNC_1(&VAR_7->rd_spinlock, VAR_9);
  if (!VAR_7->rd_full)
   VAR_8 |= VAR_2 | VAR_4;
  FUNC_2(&VAR_7->rd_spinlock, VAR_9);
 }

 if (VAR_7->endpoint->fatal_error)
  VAR_8 |= VAR_0;

 return VAR_8;
}
