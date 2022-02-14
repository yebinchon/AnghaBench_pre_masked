
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * items; scalar_t__ alloc; scalar_t__ nr; } ;
struct config_set {int hash_initialized; TYPE_1__ list; int config_hash; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;

void FUNC_1(struct config_set *VAR_1)
{
 FUNC_0(&VAR_1->config_hash, VAR_0, ((void*)0), 0);
 VAR_1->hash_initialized = 1;
 VAR_1->list.nr = 0;
 VAR_1->list.alloc = 0;
 VAR_1->list.items = ((void*)0);
}
