
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cpu_hw_events {int * ds_bts_vaddr; } ;
struct TYPE_4__ {int bts_buffer; } ;
struct TYPE_6__ {TYPE_1__ cpu_debug_buffers; } ;
struct TYPE_5__ {int bts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (int *,int ) ;
 TYPE_3__* FUNC_2 (int) ;
 struct cpu_hw_events* FUNC_3 (int *,int) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_4(int VAR_3)
{
 struct cpu_hw_events *VAR_4 = FUNC_3(&VAR_1, VAR_3);
 void *VAR_5;

 if (!VAR_2.bts)
  return;


 VAR_5 = &FUNC_2(VAR_3)->cpu_debug_buffers.bts_buffer;
 FUNC_0(VAR_5, VAR_0);
 FUNC_1(VAR_4->ds_bts_vaddr, VAR_0);
 VAR_4->ds_bts_vaddr = ((void*)0);
}
