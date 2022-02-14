
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_vector {struct fire_msiqarg* iv_icarg; } ;
struct fire_msiqarg {int fmqa_mtx; } ;


 int FUNC_0 (struct intr_vector*,struct fire_msiqarg*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct intr_vector *VAR_1;
 struct fire_msiqarg *VAR_2;

 VAR_1 = VAR_0;
 VAR_2 = VAR_1->iv_icarg;
 FUNC_1(&VAR_2->fmqa_mtx);
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_2->fmqa_mtx);
}
