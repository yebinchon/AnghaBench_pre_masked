
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {struct configuration_entry* entry_name; } ;
struct TYPE_12__ {TYPE_5__ cep; } ;
struct TYPE_9__ {struct configuration_entry* entry_name; } ;
struct TYPE_10__ {TYPE_3__ cep; } ;
struct TYPE_7__ {struct configuration_entry* entry_name; } ;
struct TYPE_8__ {TYPE_1__ cep; } ;
struct configuration_entry {struct configuration_entry* mp_cache_entries; TYPE_6__ mp_cache_params; TYPE_4__ negative_cache_params; TYPE_2__ positive_cache_params; struct configuration_entry* name; int mp_cache_lock; int negative_cache_lock; int positive_cache_lock; } ;


 int FUNC_0 (void (*) (struct configuration_entry*)) ;
 int FUNC_1 (void (*) (struct configuration_entry*)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct configuration_entry*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct configuration_entry *VAR_0)
{
 FUNC_0(FUNC_5);
 FUNC_2(VAR_0 != ((void*)0));
 FUNC_4(&VAR_0->positive_cache_lock);
 FUNC_4(&VAR_0->negative_cache_lock);
 FUNC_4(&VAR_0->mp_cache_lock);
 FUNC_3(VAR_0->name);
 FUNC_3(VAR_0->positive_cache_params.cep.entry_name);
 FUNC_3(VAR_0->negative_cache_params.cep.entry_name);
 FUNC_3(VAR_0->mp_cache_params.cep.entry_name);
 FUNC_3(VAR_0->mp_cache_entries);
 FUNC_3(VAR_0);
 FUNC_1(FUNC_5);
}
