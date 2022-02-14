
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_entry_t ;
typedef int u_char ;
struct TYPE_3__ {int eflags; } ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(vm_map_entry_t VAR_1, u_char VAR_2)
{
 VAR_1->eflags = (VAR_1->eflags & ~VAR_0) |
     (VAR_2 & VAR_0);
}
