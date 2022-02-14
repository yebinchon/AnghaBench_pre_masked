
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned int vm_end; unsigned int vm_start; unsigned long vm_pgoff; long vm_ops; int vm_page_prot; } ;
struct file {struct agp_file_private* private_data; } ;
struct agp_kern_info {unsigned int aper_size; long vm_ops; unsigned long aper_base; } ;
struct agp_file_private {int access_flags; } ;
struct agp_client {int dummy; } ;
struct TYPE_4__ {int backend_acquired; int agp_mutex; } ;
struct TYPE_3__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,long,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,struct agp_kern_info*) ;
 TYPE_2__ VAR_8 ;
 struct agp_client* FUNC_2 (int ) ;
 int FUNC_3 (struct agp_client*,unsigned long,unsigned int,int ) ;
 TYPE_1__* VAR_9 ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned int,unsigned long,unsigned int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_10, struct vm_area_struct *VAR_11)
{
 unsigned int VAR_12, VAR_13;
 unsigned long VAR_14;
 struct agp_client *VAR_15;
 struct agp_file_private *VAR_16 = VAR_10->private_data;
 struct agp_kern_info VAR_17;

 FUNC_5(&(VAR_8.agp_mutex));

 if (VAR_8.backend_acquired != 1)
  goto out_eperm;

 if (!(FUNC_8(VAR_2, &VAR_16->access_flags)))
  goto out_eperm;

 FUNC_1(VAR_7, &VAR_17);
 VAR_12 = VAR_11->vm_end - VAR_11->vm_start;
 VAR_13 = VAR_17.aper_size;
 VAR_13 = VAR_13 * 0x100000;
 VAR_14 = VAR_11->vm_pgoff << VAR_6;
 FUNC_0("%lx:%lx", VAR_14, VAR_14+VAR_12);

 if (FUNC_8(VAR_0, &VAR_16->access_flags)) {
  if ((VAR_12 + VAR_14) > VAR_13)
   goto out_inval;

  VAR_15 = FUNC_2(VAR_9->pid);

  if (VAR_15 == ((void*)0))
   goto out_eperm;

  if (!FUNC_3(VAR_15, VAR_14, VAR_12, VAR_11->vm_page_prot))
   goto out_inval;

  FUNC_0("client vm_ops=%p", VAR_17.vm_ops);
  if (VAR_17.vm_ops) {
   VAR_11->vm_ops = VAR_17.vm_ops;
  } else if (FUNC_4(VAR_11, VAR_11->vm_start,
    (VAR_17.aper_base + VAR_14) >> VAR_6,
    VAR_12,
    FUNC_7(VAR_11->vm_page_prot))) {
   goto out_again;
  }
  FUNC_6(&(VAR_8.agp_mutex));
  return 0;
 }

 if (FUNC_8(VAR_1, &VAR_16->access_flags)) {
  if (VAR_12 != VAR_13)
   goto out_inval;

  FUNC_0("controller vm_ops=%p", VAR_17.vm_ops);
  if (VAR_17.vm_ops) {
   VAR_11->vm_ops = VAR_17.vm_ops;
  } else if (FUNC_4(VAR_11, VAR_11->vm_start,
    VAR_17.aper_base >> VAR_6,
    VAR_12,
    FUNC_7(VAR_11->vm_page_prot))) {
   goto out_again;
  }
  FUNC_6(&(VAR_8.agp_mutex));
  return 0;
 }

out_eperm:
 FUNC_6(&(VAR_8.agp_mutex));
 return -VAR_5;

out_inval:
 FUNC_6(&(VAR_8.agp_mutex));
 return -VAR_4;

out_again:
 FUNC_6(&(VAR_8.agp_mutex));
 return -VAR_3;
}
