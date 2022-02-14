
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atpic_softc {int* sc_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct atpic_softc*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct atpic_softc *VAR_7, int VAR_8)
{

 VAR_7->sc_mask[VAR_8] = 0xff - ((VAR_8 == VAR_0) ? 4 : 0);

 FUNC_0(VAR_7, VAR_8, 0, VAR_3 | VAR_2);
 FUNC_0(VAR_7, VAR_8, 1, (VAR_8 == VAR_1) ? 8 : 0);
 FUNC_0(VAR_7, VAR_8, 1, (VAR_8 == VAR_1) ? 2 : 4);
 FUNC_0(VAR_7, VAR_8, 1, VAR_4);
 FUNC_0(VAR_7, VAR_8, 1, VAR_7->sc_mask[VAR_8]);
 FUNC_0(VAR_7, VAR_8, 0, VAR_6 | VAR_5);
}
