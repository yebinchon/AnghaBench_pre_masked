
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2kbd_softc {struct atkbdc_softc* atkbdc_sc; int mtx; } ;
struct atkbdc_softc {int dummy; } ;


 struct ps2kbd_softc* FUNC_0 (int,int) ;
 int FUNC_1 (int ,struct ps2kbd_softc*,int) ;
 int FUNC_2 (struct ps2kbd_softc*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;

struct ps2kbd_softc *
FUNC_4(struct atkbdc_softc *VAR_1)
{
 struct ps2kbd_softc *VAR_2;

 VAR_2 = FUNC_0(1, sizeof (struct ps2kbd_softc));
 FUNC_3(&VAR_2->mtx, ((void*)0));
 FUNC_2(VAR_2);
 VAR_2->atkbdc_sc = VAR_1;

 FUNC_1(VAR_0, VAR_2, 1);

 return (VAR_2);
}
