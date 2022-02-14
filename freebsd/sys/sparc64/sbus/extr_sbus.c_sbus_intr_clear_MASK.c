
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbus_icarg {int sica_clr; int sica_sc; } ;
struct intr_vector {struct sbus_icarg* iv_icarg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct intr_vector *VAR_2 = VAR_1;
 struct sbus_icarg *VAR_3 = VAR_2->iv_icarg;

 FUNC_0(VAR_3->sica_sc, VAR_3->sica_clr, VAR_0);
}
