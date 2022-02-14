
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int uint8_t ;
struct ofwfb_softc {int sc_ymargin; int sc_width; int sc_stride; int sc_height; int sc_xmargin; scalar_t__ sc_addr; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_0, int VAR_1)
{
 struct ofwfb_softc *VAR_2;
 int VAR_3, VAR_4;
 uint8_t *VAR_5;
 uint8_t VAR_6;

 VAR_2 = (struct ofwfb_softc *)VAR_0;

 VAR_6 = FUNC_0(VAR_1);


 VAR_5 = (uint8_t *) VAR_2->sc_addr;
 for (VAR_3 = 0; VAR_3 < VAR_2->sc_ymargin; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_2->sc_width; VAR_4++) {
   *(VAR_5 + VAR_4) = VAR_6;
  }
  VAR_5 += VAR_2->sc_stride;
 }


 VAR_5 = (uint8_t *) VAR_2->sc_addr + (VAR_2->sc_height - VAR_2->sc_ymargin)*VAR_2->sc_stride;
 for (VAR_3 = 0; VAR_3 < VAR_2->sc_ymargin; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_2->sc_width; VAR_4++) {
   *(VAR_5 + VAR_4) = VAR_6;
  }
  VAR_5 += VAR_2->sc_stride;
 }


 VAR_5 = (uint8_t *) VAR_2->sc_addr + VAR_2->sc_ymargin*VAR_2->sc_stride;
 for (VAR_3 = 0; VAR_3 < VAR_2->sc_height - 2*VAR_2->sc_xmargin; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_2->sc_xmargin; VAR_4++) {
   *(VAR_5 + VAR_4) = VAR_6;
   *(VAR_5 + VAR_4 + VAR_2->sc_width - VAR_2->sc_xmargin) = VAR_6;
  }
  VAR_5 += VAR_2->sc_stride;
 }

 return (0);
}
