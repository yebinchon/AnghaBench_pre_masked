
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psycho_icarg {int pica_clr; int pica_sc; } ;
struct intr_vector {struct psycho_icarg* iv_icarg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct intr_vector *VAR_2 = VAR_1;
 struct psycho_icarg *VAR_3 = VAR_2->iv_icarg;

 FUNC_0(VAR_3->pica_sc, VAR_3->pica_clr, VAR_0);
}
