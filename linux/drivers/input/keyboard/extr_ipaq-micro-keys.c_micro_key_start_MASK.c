
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipaq_micro_keys {TYPE_1__* micro; } ;
struct TYPE_2__ {int lock; struct ipaq_micro_keys* key_data; int key; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ipaq_micro_keys *VAR_1)
{
 FUNC_0(&VAR_1->micro->lock);
 VAR_1->micro->key = VAR_0;
 VAR_1->micro->key_data = VAR_1;
 FUNC_1(&VAR_1->micro->lock);
}
