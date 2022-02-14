
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_4__ {int vi_width; int vi_cheight; int vi_cwidth; } ;
struct TYPE_5__ {TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_char ;
struct ofwfb_softc {int* sc_font; int sc_font_height; int sc_ymargin; int sc_stride; int sc_xmargin; scalar_t__ sc_addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ofwfb_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_0, vm_offset_t VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 struct ofwfb_softc *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7, VAR_8, VAR_9;
 uint32_t *VAR_10, VAR_11, VAR_12;
 u_char *VAR_13;

 VAR_4 = (struct ofwfb_softc *)VAR_0;
        VAR_5 = (VAR_1 / VAR_0->va_info.vi_width) * VAR_0->va_info.vi_cheight;
        VAR_6 = (VAR_1 % VAR_0->va_info.vi_width) * VAR_0->va_info.vi_cwidth;
 VAR_13 = VAR_4->sc_font + VAR_2*VAR_4->sc_font_height;
 VAR_10 = (uint32_t *)VAR_4->sc_addr
  + (VAR_5 + VAR_4->sc_ymargin)*(VAR_4->sc_stride/4)
  + VAR_6 + VAR_4->sc_xmargin;

 VAR_11 = FUNC_2(VAR_4, FUNC_1(VAR_3));
 VAR_12 = FUNC_2(VAR_4, FUNC_0(VAR_3));

 for (VAR_7 = 0; VAR_7 < VAR_4->sc_font_height; VAR_7++) {
  for (VAR_8 = 0, VAR_9 = 7; VAR_8 < 8; VAR_8++, VAR_9--) {
   if ((VAR_13[VAR_7] & (1 << VAR_9)) == 0)
    *(VAR_10 + VAR_8) = VAR_12;
   else
    *(VAR_10 + VAR_8) = VAR_11;
  }
  VAR_10 += (VAR_4->sc_stride/4);
 }

 return (0);
}
