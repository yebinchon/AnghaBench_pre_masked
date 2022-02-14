
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_vector {struct fire_icarg* iv_icarg; } ;
struct fire_icarg {int fica_clr; int fica_sc; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct intr_vector *VAR_2;
 struct fire_icarg *VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2->iv_icarg;
 FUNC_0(VAR_3->fica_sc, VAR_3->fica_clr, VAR_0);
}
