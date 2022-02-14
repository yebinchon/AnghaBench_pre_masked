
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_vector {int iv_event; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct intr_vector*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct intr_vector *VAR_1;

 VAR_1 = VAR_0;
 if (FUNC_0(FUNC_1(VAR_1->iv_event, ((void*)0)) != 0))
  FUNC_2(VAR_1);
}
