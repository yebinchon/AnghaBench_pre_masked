
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keylist {int keys; int top_p; } ;


 int FUNC_0 (struct keylist*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(struct keylist *VAR_0)
{
 VAR_0->top_p -= FUNC_2(VAR_0->keys);

 FUNC_3(VAR_0->keys,
  FUNC_1(VAR_0->keys),
  FUNC_0(VAR_0));
}
