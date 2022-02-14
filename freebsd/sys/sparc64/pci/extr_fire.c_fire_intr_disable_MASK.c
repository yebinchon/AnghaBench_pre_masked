
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_vector {struct fire_icarg* iv_icarg; } ;
struct fire_softc {int dummy; } ;
struct fire_icarg {int fica_map; struct fire_softc* fica_sc; } ;


 int FUNC_0 (struct fire_softc*,int ) ;
 int FUNC_1 (struct fire_softc*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct intr_vector *VAR_2;
 struct fire_icarg *VAR_3;
 struct fire_softc *VAR_4;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2->iv_icarg;
 VAR_4 = VAR_3->fica_sc;
 FUNC_1(VAR_4, VAR_3->fica_map,
     FUNC_0(VAR_4, VAR_3->fica_map) & ~VAR_0);
}
