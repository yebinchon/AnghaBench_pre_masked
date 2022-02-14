
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channel; int master; } ;
struct stm_file {TYPE_2__ output; struct stm_device* stm; } ;
struct stm_device {TYPE_1__* data; } ;
struct inode {int dummy; } ;
struct file {struct stm_file* private_data; } ;
struct TYPE_3__ {int (* unlink ) (TYPE_1__*,int ,int ) ;} ;


 int FUNC_0 (struct stm_file*) ;
 int FUNC_1 (struct stm_device*,TYPE_2__*) ;
 int FUNC_2 (struct stm_device*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct stm_file *VAR_2 = VAR_1->private_data;
 struct stm_device *VAR_3 = VAR_2->stm;

 if (VAR_3->data->unlink)
  VAR_3->data->unlink(VAR_3->data, VAR_2->output.master,
      VAR_2->output.channel);

 FUNC_1(VAR_3, &VAR_2->output);





 FUNC_2(VAR_3);
 FUNC_0(VAR_2);

 return 0;
}
