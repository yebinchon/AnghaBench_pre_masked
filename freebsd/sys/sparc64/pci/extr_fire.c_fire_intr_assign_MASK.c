
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intr_vector {struct fire_icarg* iv_icarg; } ;
struct fire_softc {int dummy; } ;
struct fire_icarg {int fica_clr; int fica_map; struct fire_softc* fica_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fire_softc*,int ,int,int) ;
 scalar_t__ FUNC_1 (struct fire_softc*,int ) ;
 int FUNC_2 (struct fire_softc*,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4)
{
 struct intr_vector *VAR_5;
 struct fire_icarg *VAR_6;
 struct fire_softc *VAR_7;
 uint64_t VAR_8;

 VAR_5 = VAR_4;
 VAR_6 = VAR_5->iv_icarg;
 VAR_7 = VAR_6->fica_sc;
 VAR_8 = FUNC_1(VAR_7, VAR_6->fica_map);
 if ((VAR_8 & VAR_2) != 0) {
  FUNC_2(VAR_7, VAR_6->fica_map, VAR_8 & ~VAR_2);
  FUNC_0(VAR_7, VAR_6->fica_map, 8,
      VAR_0 | VAR_1);
 }
 while (FUNC_1(VAR_7, VAR_6->fica_clr) != VAR_3)
  ;
 if ((VAR_8 & VAR_2) != 0)
  FUNC_3(VAR_4);
}
