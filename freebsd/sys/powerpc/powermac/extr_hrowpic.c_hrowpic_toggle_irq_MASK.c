
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct hrowpic_softc {int* sc_softreg; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct hrowpic_softc*,int ,size_t,int) ;

__attribute__((used)) static void
FUNC_4(struct hrowpic_softc *VAR_2, int VAR_3, int VAR_4)
{
 u_int VAR_5;
 u_int VAR_6;

 FUNC_2((VAR_3 > 0) && (VAR_3 <= VAR_1), ("en irq out of range"));




 if (VAR_3 == VAR_1)
  return;





 VAR_5 = FUNC_0(VAR_3);
 VAR_6 = FUNC_1(VAR_3);

 if (VAR_4)
  VAR_2->sc_softreg[VAR_5] |= (1 << VAR_6);
 else
  VAR_2->sc_softreg[VAR_5] &= ~(1 << VAR_6);

 FUNC_3(VAR_2, VAR_0, VAR_5, VAR_2->sc_softreg[VAR_5]);
}
