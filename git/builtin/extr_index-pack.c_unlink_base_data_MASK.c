
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct base_data {int * child; struct base_data* base; } ;
struct TYPE_2__ {int * base_cache; } ;


 int FUNC_0 (struct base_data*) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct base_data *VAR_0)
{
 struct base_data *VAR_1 = VAR_0->base;
 if (VAR_1)
  VAR_1->child = ((void*)0);
 else
  FUNC_1()->base_cache = ((void*)0);
 FUNC_0(VAR_0);
}
