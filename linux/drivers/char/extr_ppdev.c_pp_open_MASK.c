
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int phase; } ;
struct pp_struct {int * pdev; int irq_wait; int irqc; scalar_t__ irqresponse; scalar_t__ flags; TYPE_1__ state; } ;
struct inode {int dummy; } ;
struct file {struct pp_struct* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 unsigned int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct pp_struct* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5, struct file *VAR_6)
{
 unsigned int VAR_7 = FUNC_1(VAR_5);
 struct pp_struct *VAR_8;

 if (VAR_7 >= VAR_4)
  return -VAR_1;

 VAR_8 = FUNC_4(sizeof(struct pp_struct), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->state.mode = VAR_3;
 VAR_8->state.phase = FUNC_2(VAR_8->state.mode);
 VAR_8->flags = 0;
 VAR_8->irqresponse = 0;
 FUNC_0(&VAR_8->irqc, 0);
 FUNC_3(&VAR_8->irq_wait);





 VAR_8->pdev = ((void*)0);
 VAR_6->private_data = VAR_8;

 return 0;
}
