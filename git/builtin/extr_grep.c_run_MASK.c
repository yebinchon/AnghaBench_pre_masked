
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_item {int source; } ;
struct grep_opt {struct work_item* output_priv; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 struct work_item* FUNC_2 () ;
 int FUNC_3 (struct grep_opt*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct work_item*) ;

__attribute__((used)) static void *FUNC_6(void *VAR_0)
{
 int VAR_1 = 0;
 struct grep_opt *VAR_2 = VAR_0;

 while (1) {
  struct work_item *VAR_3 = FUNC_2();
  if (!VAR_3)
   break;

  VAR_2->output_priv = VAR_3;
  VAR_1 |= FUNC_3(VAR_2, &VAR_3->source);
  FUNC_4(&VAR_3->source);
  FUNC_5(VAR_3);
 }
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);

 return (void*) (intptr_t) VAR_1;
}
