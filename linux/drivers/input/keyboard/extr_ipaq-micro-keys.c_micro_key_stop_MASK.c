
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipaq_micro_keys {TYPE_1__* micro; } ;
struct TYPE_2__ {int lock; int * key_data; int * key; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ipaq_micro_keys *VAR_0)
{
 FUNC_0(&VAR_0->micro->lock);
 VAR_0->micro->key = ((void*)0);
 VAR_0->micro->key_data = ((void*)0);
 FUNC_1(&VAR_0->micro->lock);
}
