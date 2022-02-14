
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_6__ {scalar_t__ end; scalar_t__ start; TYPE_1__* right; } ;
struct TYPE_5__ {scalar_t__ max_free; } ;



__attribute__((used)) static inline vm_size_t
FUNC_0(vm_map_entry_t VAR_0, vm_map_entry_t VAR_1)
{

 return (VAR_0->right != ((void*)0) ?
     VAR_0->right->max_free : VAR_1->start - VAR_0->end);
}
