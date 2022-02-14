
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct base_data {scalar_t__ size; scalar_t__ data; struct base_data* child; struct base_data* base; } ;
struct TYPE_2__ {int base_cache_used; struct base_data* base_cache; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (struct base_data*) ;

__attribute__((used)) static void FUNC_2(struct base_data *VAR_0, struct base_data *VAR_1)
{
 if (VAR_0)
  VAR_0->child = VAR_1;
 else
  FUNC_0()->base_cache = VAR_1;

 VAR_1->base = VAR_0;
 VAR_1->child = ((void*)0);
 if (VAR_1->data)
  FUNC_0()->base_cache_used += VAR_1->size;
 FUNC_1(VAR_1);
}
