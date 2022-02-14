
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psycho_icarg {int pica_map; int pica_sc; } ;
struct intr_vector {int iv_mid; struct psycho_icarg* iv_icarg; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct intr_vector *VAR_1 = VAR_0;
 struct psycho_icarg *VAR_2 = VAR_1->iv_icarg;

 FUNC_2(VAR_2->pica_sc, VAR_2->pica_map, FUNC_0(
     FUNC_1(VAR_2->pica_sc, VAR_2->pica_map), VAR_1->iv_mid));
}
