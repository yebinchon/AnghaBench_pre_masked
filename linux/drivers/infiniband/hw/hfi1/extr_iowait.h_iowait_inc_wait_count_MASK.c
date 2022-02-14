
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct iowait_work {TYPE_1__* iow; } ;
struct TYPE_2__ {int count; int tx_count; } ;



__attribute__((used)) static inline void FUNC_0(struct iowait_work *VAR_0, u16 VAR_1)
{
 if (!VAR_0)
  return;
 VAR_0->iow->tx_count++;
 VAR_0->iow->count += VAR_1;
}
