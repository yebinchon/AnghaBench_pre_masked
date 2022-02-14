
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_map_entry_t ;
typedef int (* segment_callback ) (TYPE_1__*,void*) ;
struct TYPE_6__ {struct TYPE_6__* next; } ;


 int FUNC_0 (TYPE_1__*,void*) ;

__attribute__((used)) static void
FUNC_1(vm_map_entry_t VAR_0, segment_callback VAR_1, void *VAR_2)
{
 vm_map_entry_t VAR_3;

 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  (*VAR_1)(VAR_3, VAR_2);
}
