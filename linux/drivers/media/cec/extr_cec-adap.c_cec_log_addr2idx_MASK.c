
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int num_log_addrs; scalar_t__* log_addr; } ;
struct cec_adapter {TYPE_1__ log_addrs; } ;



__attribute__((used)) static int FUNC_0(const struct cec_adapter *VAR_0, u8 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->log_addrs.num_log_addrs; VAR_2++)
  if (VAR_0->log_addrs.log_addr[VAR_2] == VAR_1)
   return VAR_2;
 return -1;
}
