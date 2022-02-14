
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct openpic_softc {scalar_t__ sc_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct openpic_softc*,int ) ;
 int FUNC_3 (struct openpic_softc*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static __inline void
FUNC_6(struct openpic_softc *VAR_3, int VAR_4)
{
 u_int VAR_5;
 uint32_t VAR_6;

 FUNC_4();
 VAR_5 = FUNC_0((VAR_3->sc_dev == VAR_2) ? FUNC_1(VAR_1) : 0);
 VAR_6 = FUNC_2(VAR_3, VAR_5);
 VAR_6 &= ~VAR_0;
 VAR_6 |= VAR_4;
 FUNC_3(VAR_3, VAR_5, VAR_6);
 FUNC_5();
}
