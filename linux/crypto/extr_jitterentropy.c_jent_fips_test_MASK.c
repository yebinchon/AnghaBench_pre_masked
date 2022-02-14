
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_data {scalar_t__ old_data; scalar_t__ data; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct rand_data*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct rand_data *VAR_0)
{
 if (!FUNC_0())
  return;


 if (!VAR_0->old_data) {
  VAR_0->old_data = VAR_0->data;
  FUNC_1(VAR_0);
 }

 if (VAR_0->data == VAR_0->old_data)
  FUNC_2("jitterentropy: Duplicate output detected\n");

 VAR_0->old_data = VAR_0->data;
}
