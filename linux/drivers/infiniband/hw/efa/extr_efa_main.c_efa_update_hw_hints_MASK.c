
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ completion_timeout; scalar_t__ poll_interval; } ;
struct TYPE_3__ {int mmio_read_timeout; } ;
struct efa_com_dev {TYPE_2__ aq; TYPE_1__ mmio_read; } ;
struct efa_dev {struct efa_com_dev edev; } ;
struct efa_com_get_hw_hints_result {int mmio_read_timeout; scalar_t__ admin_completion_timeout; scalar_t__ poll_interval; } ;



__attribute__((used)) static void FUNC_0(struct efa_dev *VAR_0,
    struct efa_com_get_hw_hints_result *VAR_1)
{
 struct efa_com_dev *VAR_2 = &VAR_0->edev;

 if (VAR_1->mmio_read_timeout)
  VAR_2->mmio_read.mmio_read_timeout =
   VAR_1->mmio_read_timeout * 1000;

 if (VAR_1->poll_interval)
  VAR_2->aq.poll_interval = VAR_1->poll_interval;

 if (VAR_1->admin_completion_timeout)
  VAR_2->aq.completion_timeout =
   VAR_1->admin_completion_timeout;
}
