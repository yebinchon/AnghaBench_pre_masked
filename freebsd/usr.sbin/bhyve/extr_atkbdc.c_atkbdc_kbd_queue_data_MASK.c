
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int bcnt; size_t bwr; int * buffer; } ;
struct atkbdc_softc {TYPE_1__ kbd; int outport; int status; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct atkbdc_softc *VAR_3, uint8_t VAR_4)
{
 FUNC_0(FUNC_2(&VAR_3->mtx));

 if (VAR_3->kbd.bcnt < VAR_0) {
  VAR_3->kbd.buffer[VAR_3->kbd.bwr] = VAR_4;
  VAR_3->kbd.bwr = (VAR_3->kbd.bwr + 1) % VAR_0;
  VAR_3->kbd.bcnt++;
  VAR_3->status |= VAR_2;
  VAR_3->outport |= VAR_1;
 } else {
  FUNC_1("atkbd data buffer full\n");
 }

 return (VAR_3->kbd.bcnt < VAR_0);
}
