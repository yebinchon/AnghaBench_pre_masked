
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upa_icarg {int uica_imr; int uica_sc; } ;
struct intr_vector {int iv_vec; struct upa_icarg* iv_icarg; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct intr_vector *VAR_1 = VAR_0;
 struct upa_icarg *VAR_2 = VAR_1->iv_icarg;

 FUNC_1(VAR_2->uica_sc, VAR_2->uica_imr, 0x0, VAR_1->iv_vec);
 (void)FUNC_0(VAR_2->uica_sc, VAR_2->uica_imr, 0x0);
}
