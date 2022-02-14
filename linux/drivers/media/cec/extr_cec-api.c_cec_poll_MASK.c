
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct cec_fh* private_data; } ;
struct cec_fh {scalar_t__ total_queued_events; scalar_t__ queued_msgs; int wait; struct cec_adapter* adap; } ;
struct cec_adapter {scalar_t__ transmit_queue_sz; int lock; scalar_t__ is_configured; } ;
typedef int __poll_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_8,
        struct poll_table_struct *VAR_9)
{
 struct cec_fh *VAR_10 = VAR_8->private_data;
 struct cec_adapter *VAR_11 = VAR_10->adap;
 __poll_t VAR_12 = 0;

 FUNC_3(VAR_8, &VAR_10->wait, VAR_9);
 if (!FUNC_0(VAR_11))
  return VAR_1 | VAR_2;
 FUNC_1(&VAR_11->lock);
 if (VAR_11->is_configured &&
     VAR_11->transmit_queue_sz < VAR_0)
  VAR_12 |= VAR_4 | VAR_7;
 if (VAR_10->queued_msgs)
  VAR_12 |= VAR_3 | VAR_6;
 if (VAR_10->total_queued_events)
  VAR_12 |= VAR_5;
 FUNC_2(&VAR_11->lock);
 return VAR_12;
}
