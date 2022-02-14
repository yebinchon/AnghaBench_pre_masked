
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct log_c {int log_dev_failed; TYPE_1__* ti; } ;
struct TYPE_2__ {int table; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct log_c *VAR_0)
{
 if (VAR_0->log_dev_failed)
  return;

 VAR_0->log_dev_failed = 1;
 FUNC_0(VAR_0->ti->table);
}
