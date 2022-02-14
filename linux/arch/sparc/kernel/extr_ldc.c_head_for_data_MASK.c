
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct ldc_channel {unsigned long tx_acked; unsigned long tx_head; TYPE_1__ cfg; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct ldc_channel *VAR_1)
{
 if (VAR_1->cfg.mode == VAR_0)
  return VAR_1->tx_acked;
 return VAR_1->tx_head;
}
