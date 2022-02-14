
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct base_data {struct base_data* base; } ;


 struct base_data* FUNC_0 (struct base_data*,struct base_data*) ;
 int FUNC_1 (struct base_data*) ;

__attribute__((used)) static void FUNC_2(struct base_data *VAR_0)
{
 struct base_data *VAR_1, *VAR_2 = ((void*)0);
 for (;;) {
  VAR_1 = FUNC_0(VAR_0, VAR_2);

  if (VAR_1) {
   VAR_2 = VAR_0;
   VAR_0 = VAR_1;
  } else {
   FUNC_1(VAR_0);
   VAR_0 = VAR_2;
   if (!VAR_0)
    return;
   VAR_2 = VAR_0->base;
  }
 }
}
