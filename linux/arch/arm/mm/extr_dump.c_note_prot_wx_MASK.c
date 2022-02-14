
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pg_state {int current_prot; size_t level; unsigned long start_address; unsigned long wx_pages; int check_wx; } ;
struct TYPE_6__ {TYPE_2__* nx_bit; TYPE_1__* ro_bit; } ;
struct TYPE_5__ {int mask; int val; } ;
struct TYPE_4__ {int mask; int val; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,char*,void*) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct pg_state *VAR_2, unsigned long VAR_3)
{
 if (!VAR_2->check_wx)
  return;
 if ((VAR_2->current_prot & VAR_1[VAR_2->level].ro_bit->mask) ==
    VAR_1[VAR_2->level].ro_bit->val)
  return;
 if ((VAR_2->current_prot & VAR_1[VAR_2->level].nx_bit->mask) ==
    VAR_1[VAR_2->level].nx_bit->val)
  return;

 FUNC_0(1, "arm/mm: Found insecure W+X mapping at address %pS\n",
   (void *)VAR_2->start_address);

 VAR_2->wx_pages += (VAR_3 - VAR_2->start_address) / VAR_0;
}
