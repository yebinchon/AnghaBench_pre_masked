
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node; } ;
struct sync_file {int fence; int wq; TYPE_1__ cb; int flags; } ;
struct file {struct sync_file* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct file*,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static __poll_t FUNC_6(struct file *VAR_3, poll_table *VAR_4)
{
 struct sync_file *VAR_5 = VAR_3->private_data;

 FUNC_3(VAR_3, &VAR_5->wq, VAR_4);

 if (FUNC_2(&VAR_5->cb.node) &&
     !FUNC_4(VAR_1, &VAR_5->flags)) {
  if (FUNC_0(VAR_5->fence, &VAR_5->cb,
        VAR_2) < 0)
   FUNC_5(&VAR_5->wq);
 }

 return FUNC_1(VAR_5->fence) ? VAR_0 : 0;
}
