
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* vm_offset_t ;
typedef TYPE_2__* vm_map_t ;
typedef int pmap_t ;
struct TYPE_4__ {void* start; void* end; int eflags; struct TYPE_4__* prev; struct TYPE_4__* next; } ;
struct TYPE_5__ {scalar_t__ nupdates; scalar_t__ anon_loc; scalar_t__ busy; scalar_t__ timestamp; int * root; scalar_t__ flags; TYPE_1__ header; int pmap; scalar_t__ system_map; int needs_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(vm_map_t VAR_2, pmap_t VAR_3, vm_offset_t VAR_4, vm_offset_t VAR_5)
{

 VAR_2->header.next = VAR_2->header.prev = &VAR_2->header;
 VAR_2->header.eflags = VAR_1;
 VAR_2->needs_wakeup = VAR_0;
 VAR_2->system_map = 0;
 VAR_2->pmap = VAR_3;
 VAR_2->header.end = VAR_4;
 VAR_2->header.start = VAR_5;
 VAR_2->flags = 0;
 VAR_2->root = ((void*)0);
 VAR_2->timestamp = 0;
 VAR_2->busy = 0;
 VAR_2->anon_loc = 0;



}
