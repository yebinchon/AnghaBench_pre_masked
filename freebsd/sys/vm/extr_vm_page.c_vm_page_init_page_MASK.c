
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
struct TYPE_4__ {int segind; scalar_t__ dirty; scalar_t__ valid; int pool; int order; scalar_t__ psind; int queue; int phys_addr; scalar_t__ aflags; scalar_t__ flags; int busy_lock; scalar_t__ ref_count; int * object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(vm_page_t VAR_4, vm_paddr_t VAR_5, int VAR_6)
{

 VAR_4->object = ((void*)0);
 VAR_4->ref_count = 0;
 VAR_4->busy_lock = VAR_3;
 VAR_4->flags = VAR_4->aflags = 0;
 VAR_4->phys_addr = VAR_5;
 VAR_4->queue = VAR_0;
 VAR_4->psind = 0;
 VAR_4->segind = VAR_6;
 VAR_4->order = VAR_2;
 VAR_4->pool = VAR_1;
 VAR_4->valid = VAR_4->dirty = 0;
 FUNC_0(VAR_4);
}
