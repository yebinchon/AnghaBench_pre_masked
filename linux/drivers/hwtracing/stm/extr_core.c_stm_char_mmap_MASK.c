
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; int * vm_ops; int vm_page_prot; scalar_t__ vm_pgoff; } ;
struct TYPE_3__ {unsigned long nr_chans; int channel; int master; } ;
struct stm_file {TYPE_1__ output; struct stm_device* stm; } ;
struct stm_device {int dev; TYPE_2__* data; } ;
struct file {struct stm_file* private_data; } ;
struct TYPE_4__ {unsigned long (* mmio_addr ) (TYPE_2__*,int ,int ,unsigned long) ;unsigned long sw_mmiosz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 unsigned long FUNC_2 (TYPE_2__*,int ,int ,unsigned long) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, struct vm_area_struct *VAR_7)
{
 struct stm_file *VAR_8 = VAR_6->private_data;
 struct stm_device *VAR_9 = VAR_8->stm;
 unsigned long VAR_10, VAR_11;

 if (!VAR_9->data->mmio_addr)
  return -VAR_1;

 if (VAR_7->vm_pgoff)
  return -VAR_0;

 VAR_10 = VAR_7->vm_end - VAR_7->vm_start;

 if (VAR_8->output.nr_chans * VAR_9->data->sw_mmiosz != VAR_10)
  return -VAR_0;

 VAR_11 = VAR_9->data->mmio_addr(VAR_9->data, VAR_8->output.master,
        VAR_8->output.channel,
        VAR_8->output.nr_chans);

 if (!VAR_11)
  return -VAR_0;

 FUNC_1(&VAR_9->dev);

 VAR_7->vm_page_prot = FUNC_0(VAR_7->vm_page_prot);
 VAR_7->vm_flags |= VAR_4 | VAR_3 | VAR_2;
 VAR_7->vm_ops = &VAR_5;
 FUNC_3(VAR_7, VAR_11, VAR_10);

 return 0;
}
