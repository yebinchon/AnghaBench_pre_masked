
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cec_msg {int len; unsigned int* msg; int tx_status; } ;
struct cec_log_addrs {unsigned int* log_addr; int log_addr_mask; } ;
struct cec_adapter {int phys_addr; int * phys_addrs; TYPE_1__* ops; int is_configuring; struct cec_log_addrs log_addrs; } ;
struct TYPE_2__ {int (* adap_log_addr ) (struct cec_adapter*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cec_adapter*,unsigned int) ;
 int FUNC_1 (struct cec_adapter*,struct cec_msg*,int *,int) ;
 int FUNC_2 (struct cec_adapter*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_4,
          unsigned int VAR_5,
          unsigned int VAR_6)
{
 struct cec_log_addrs *VAR_7 = &VAR_4->log_addrs;
 struct cec_msg VAR_8 = { };
 const unsigned int VAR_9 = 2;
 unsigned int VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_4, VAR_6))
  return 0;


 VAR_8.len = 1;
 VAR_8.msg[0] = (VAR_6 << 4) | VAR_6;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_11 = FUNC_1(VAR_4, &VAR_8, ((void*)0), 1);





  if (!VAR_4->is_configuring)
   return -VAR_3;

  if (VAR_11)
   return VAR_11;





  if (VAR_8.tx_status & VAR_0)
   return -VAR_3;
  if (VAR_8.tx_status & VAR_2)
   return 0;
  if (VAR_8.tx_status & VAR_1)
   break;





 }







 if (VAR_10 == VAR_9)
  return 0;





 VAR_11 = VAR_4->ops->adap_log_addr(VAR_4, VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_7->log_addr[VAR_5] = VAR_6;
 VAR_7->log_addr_mask |= 1 << VAR_6;
 VAR_4->phys_addrs[VAR_6] = VAR_4->phys_addr;
 return 1;
}
