
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_5__ {int vi_cheight; int vi_width; int vi_height; int vi_cwidth; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_6__ {int va_flags; scalar_t__ va_window; TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
struct ofwfb_softc {int sc_font_height; int sc_width; int sc_height; int sc_xmargin; int sc_ymargin; int sc_va; int sc_font; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_2__*,char*,int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(int VAR_9, video_adapter_t *VAR_10, int VAR_11)
{
 struct ofwfb_softc *VAR_12;
 video_info_t *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = (struct ofwfb_softc *)VAR_10;
 VAR_13 = &VAR_10->va_info;

 FUNC_2(VAR_10, "ofwfb", -1, VAR_9);


 VAR_15 = 16;
 FUNC_0("hw.syscons.fsize", &VAR_15);
 if (VAR_15 == 8) {
  VAR_12->sc_font = VAR_7;
  VAR_12->sc_font_height = 8;
 } else if (VAR_15 == 14) {
  VAR_12->sc_font = VAR_5;
  VAR_12->sc_font_height = 14;
 } else {

  VAR_12->sc_font = VAR_6;
  VAR_12->sc_font_height = 16;
 }


 VAR_14 = 1;
 FUNC_0("hw.syscons.border", &VAR_14);

 VAR_13->vi_cheight = VAR_12->sc_font_height;
 VAR_13->vi_width = VAR_12->sc_width/8 - 2*VAR_14;
 VAR_13->vi_height = VAR_12->sc_height/VAR_12->sc_font_height - 2*VAR_14;
 VAR_13->vi_cwidth = 8;




 if (VAR_13->vi_width > VAR_0)
  VAR_13->vi_width = VAR_0;
 if (VAR_13->vi_height > VAR_1)
  VAR_13->vi_height = VAR_1;

 VAR_12->sc_xmargin = (VAR_12->sc_width - (VAR_13->vi_width * VAR_13->vi_cwidth)) / 2;
 VAR_12->sc_ymargin = (VAR_12->sc_height - (VAR_13->vi_height * VAR_13->vi_cheight))/2;





 VAR_10->va_window = (vm_offset_t) VAR_8;







 VAR_10->va_flags |= VAR_3 | VAR_2 | VAR_4;

 FUNC_1(&VAR_12->sc_va, 0);

 FUNC_3(&VAR_12->sc_va);

 return (0);
}
