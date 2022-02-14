
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsdvb_debugfs {int refcount; int stats_queue; } ;
struct file {struct smsdvb_debugfs* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct file*,int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (struct smsdvb_debugfs*) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_3, poll_table *VAR_4)
{
 struct smsdvb_debugfs *VAR_5 = VAR_3->private_data;
 int VAR_6;

 FUNC_0(&VAR_5->refcount);

 FUNC_2(VAR_3, &VAR_5->stats_queue, VAR_4);

 VAR_6 = FUNC_3(VAR_5);
 FUNC_1(&VAR_5->refcount, VAR_2);

 return VAR_6 > 0 ? VAR_0 | VAR_1 : 0;
}
