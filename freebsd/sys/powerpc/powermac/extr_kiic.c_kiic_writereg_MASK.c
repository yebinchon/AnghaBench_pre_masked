
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct kiic_softc {int sc_regstep; int sc_reg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct kiic_softc *VAR_0, u_int VAR_1, u_int VAR_2)
{
 FUNC_1(VAR_0->sc_reg, VAR_0->sc_regstep * VAR_1, VAR_2);
 FUNC_0(100);
}
