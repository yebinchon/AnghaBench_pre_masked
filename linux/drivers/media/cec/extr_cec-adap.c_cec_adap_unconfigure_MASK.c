
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ log_addr_mask; } ;
struct cec_adapter {scalar_t__ phys_addr; int is_configuring; int is_configured; int kthread_waitq; int phys_addrs; TYPE_2__ log_addrs; TYPE_1__* ops; int needs_hpd; } ;
struct TYPE_3__ {int (* adap_log_addr ) (struct cec_adapter*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cec_adapter*) ;
 int FUNC_2 (struct cec_adapter*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct cec_adapter*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct cec_adapter *VAR_2)
{
 if (!VAR_2->needs_hpd ||
     VAR_2->phys_addr != VAR_1)
  FUNC_0(VAR_2->ops->adap_log_addr(VAR_2, VAR_0));
 VAR_2->log_addrs.log_addr_mask = 0;
 VAR_2->is_configuring = 0;
 VAR_2->is_configured = 0;
 FUNC_3(VAR_2->phys_addrs, 0xff, sizeof(VAR_2->phys_addrs));
 FUNC_1(VAR_2);
 FUNC_5(&VAR_2->kthread_waitq);
 FUNC_2(VAR_2);
}
