
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int slb_preload_tail; int slb_preload_nr; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct thread_info *VAR_1)
{
 if (!VAR_1->slb_preload_nr)
  return;
 VAR_1->slb_preload_nr--;
 VAR_1->slb_preload_tail = (VAR_1->slb_preload_tail + 1) % VAR_0;
}
