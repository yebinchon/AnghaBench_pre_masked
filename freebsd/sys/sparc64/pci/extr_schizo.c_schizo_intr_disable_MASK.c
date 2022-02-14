
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct schizo_icarg {int sica_map; int sica_sc; } ;
struct intr_vector {int iv_vec; struct schizo_icarg* iv_icarg; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct intr_vector *VAR_1 = VAR_0;
 struct schizo_icarg *VAR_2 = VAR_1->iv_icarg;

 FUNC_0(VAR_2->sica_sc, VAR_2->sica_map, VAR_1->iv_vec);
}
