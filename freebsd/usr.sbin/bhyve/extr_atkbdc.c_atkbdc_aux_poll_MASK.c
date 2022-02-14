
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbdc_softc {int status; int outport; int ps2mouse_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atkbdc_softc*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct atkbdc_softc *VAR_3)
{
 if (FUNC_1(VAR_3->ps2mouse_sc) > 0) {
  VAR_3->status |= VAR_1 | VAR_2;
  VAR_3->outport |= VAR_0;
  FUNC_0(VAR_3);
 }
}
