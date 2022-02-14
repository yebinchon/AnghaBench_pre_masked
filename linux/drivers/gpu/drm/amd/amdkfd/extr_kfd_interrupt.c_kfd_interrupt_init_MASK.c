
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_dev {int interrupts_active; int interrupt_work; int interrupt_lock; int ih_wq; TYPE_1__* device_info; int ih_fifo; } ;
struct TYPE_2__ {int ih_ring_entry_size; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

int FUNC_7(struct kfd_dev *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(&VAR_4->ih_fifo,
  VAR_1 * VAR_4->device_info->ih_ring_entry_size,
  VAR_0);
 if (VAR_5) {
  FUNC_2(FUNC_3(), "Failed to allocate IH fifo\n");
  return VAR_5;
 }

 VAR_4->ih_wq = FUNC_1("KFD IH", VAR_2, 1);
 FUNC_6(&VAR_4->interrupt_lock);

 FUNC_0(&VAR_4->interrupt_work, VAR_3);

 VAR_4->interrupts_active = 1;






 FUNC_5();

 return 0;
}
