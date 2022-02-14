
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_vector {int iv_mid; int iv_vec; struct fhc_icarg* iv_icarg; } ;
struct fhc_icarg {int fica_memres; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct intr_vector *VAR_2 = VAR_1;
 struct fhc_icarg *VAR_3 = VAR_2->iv_icarg;

 FUNC_2(VAR_3->fica_memres, VAR_0,
     FUNC_0(VAR_2->iv_vec, VAR_2->iv_mid));
 (void)FUNC_1(VAR_3->fica_memres, VAR_0);
}
