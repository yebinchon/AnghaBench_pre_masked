
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int8_t ;
typedef int u_char ;
struct ofwfb_softc {int sc_ymargin; int sc_stride; uintptr_t sc_xmargin; int sc_height; int sc_width; scalar_t__ sc_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_1, int VAR_2, int VAR_3, uint8_t *VAR_4,
    uint32_t VAR_5, int VAR_6, int VAR_7)
{
 struct ofwfb_softc *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 uint8_t *VAR_12;
 u_char VAR_13, VAR_14;

 VAR_8 = (struct ofwfb_softc *)VAR_1;
 VAR_12 = (u_int8_t *)((uintptr_t)VAR_8->sc_addr
  + (VAR_3 + VAR_8->sc_ymargin)*VAR_8->sc_stride
  + VAR_2 + VAR_8->sc_xmargin);

 VAR_13 = FUNC_1(VAR_0);
 VAR_14 = FUNC_0(VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_6 && VAR_9+VAR_3 < VAR_8->sc_height - 2*VAR_8->sc_ymargin; VAR_9++) {




  for (VAR_10 = 0, VAR_11 = VAR_7; VAR_10 < 8; VAR_10++, VAR_11--) {
   if (VAR_2 + VAR_10 >= VAR_8->sc_width - 2*VAR_8->sc_xmargin)
    continue;

   if (VAR_4[VAR_9] & (1 << VAR_11))
    VAR_12[VAR_10] = (VAR_12[VAR_10] == VAR_13) ? VAR_14 : VAR_13;
  }

  VAR_12 += (VAR_8->sc_stride / sizeof(u_int8_t));
 }

 return (0);
}
