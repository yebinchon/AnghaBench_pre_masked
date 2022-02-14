
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm_file {TYPE_1__* stm; int output; } ;
struct inode {int dummy; } ;
struct file {struct stm_file* private_data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device* FUNC_0 (int *,int *,unsigned int*,int ) ;
 unsigned int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct stm_file*) ;
 struct stm_file* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct inode*,struct file*) ;
 int FUNC_5 (struct device*) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_5, struct file *VAR_6)
{
 struct stm_file *VAR_7;
 struct device *VAR_8;
 unsigned int VAR_9 = FUNC_1(VAR_5);
 int VAR_10 = -VAR_1;

 VAR_8 = FUNC_0(&VAR_4, ((void*)0), &VAR_9, VAR_3);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  goto err_put_device;

 VAR_10 = -VAR_0;
 FUNC_6(&VAR_7->output);
 VAR_7->stm = FUNC_7(VAR_8);

 if (!FUNC_8(VAR_7->stm->owner))
  goto err_free;

 VAR_6->private_data = VAR_7;

 return FUNC_4(VAR_5, VAR_6);

err_free:
 FUNC_2(VAR_7);
err_put_device:

 FUNC_5(VAR_8);

 return VAR_10;
}
