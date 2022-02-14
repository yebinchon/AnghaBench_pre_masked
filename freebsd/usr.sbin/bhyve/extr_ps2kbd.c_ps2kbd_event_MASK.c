
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ num; } ;
struct ps2kbd_softc {int atkbdc_sc; int mtx; TYPE_1__ fifo; int enabled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ps2kbd_softc*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, uint32_t VAR_2, void *VAR_3)
{
 struct ps2kbd_softc *VAR_4 = VAR_3;
 int VAR_5;

 FUNC_2(&VAR_4->mtx);
 if (!VAR_4->enabled) {
  FUNC_3(&VAR_4->mtx);
  return;
 }
 VAR_5 = VAR_4->fifo.num == VAR_0;
 FUNC_1(VAR_4, VAR_1, VAR_2);
 FUNC_3(&VAR_4->mtx);

 if (!VAR_5)
  FUNC_0(VAR_4->atkbdc_sc, 1);
}
