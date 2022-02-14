
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ids; int count; } ;
typedef TYPE_1__ git_oidarray ;
struct TYPE_6__ {int ptr; int size; } ;
typedef TYPE_2__ git_array_oid_t ;



void FUNC_0(git_oidarray *VAR_0, git_array_oid_t *VAR_1)
{
 VAR_0->count = VAR_1->size;
 VAR_0->ids = VAR_1->ptr;
}
