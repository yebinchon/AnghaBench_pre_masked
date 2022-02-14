
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spu_context {TYPE_1__* switch_log; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_4__ {struct spu_context* i_ctx; } ;
struct TYPE_3__ {int wait; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,int *,int *) ;
 int FUNC_3 (struct spu_context*) ;
 int FUNC_4 (struct spu_context*) ;
 scalar_t__ FUNC_5 (struct spu_context*) ;

__attribute__((used)) static __poll_t FUNC_6(struct file *VAR_1, poll_table *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_1);
 struct spu_context *VAR_4 = FUNC_0(VAR_3)->i_ctx;
 __poll_t VAR_5 = 0;
 int VAR_6;

 FUNC_2(VAR_1, &VAR_4->switch_log->wait, VAR_2);

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  return VAR_6;

 if (FUNC_5(VAR_4) > 0)
  VAR_5 |= VAR_0;

 FUNC_4(VAR_4);

 return VAR_5;
}
