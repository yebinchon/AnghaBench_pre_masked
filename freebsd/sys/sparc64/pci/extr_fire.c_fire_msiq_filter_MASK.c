
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intr_vector {struct fire_msiqarg* iv_icarg; } ;
struct TYPE_2__ {int fica_clr; int fica_sc; } ;
struct fire_msiqarg {TYPE_1__ fmqa_fica; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct intr_vector*,struct fire_msiqarg*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct intr_vector *VAR_2;
 struct fire_msiqarg *VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2->iv_icarg;
 FUNC_1();
 FUNC_3(VAR_2, VAR_3);
 FUNC_0(VAR_3->fmqa_fica.fica_sc, VAR_3->fmqa_fica.fica_clr,
     VAR_0);
 FUNC_2();
}
