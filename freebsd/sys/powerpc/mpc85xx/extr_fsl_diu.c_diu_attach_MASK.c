
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videomode {int hdisplay; int vdisplay; int hsync_start; int htotal; int hsync_end; int vsync_start; int vtotal; int vsync_end; int dot_clock; } ;
struct edid_info {struct videomode* edid_preferred_mode; } ;
struct TYPE_4__ {int fb_width; int fb_height; int fb_stride; int fb_bpp; int fb_depth; int fb_size; intptr_t fb_vbase; intptr_t fb_pbase; int fb_name; int fb_memattr; int fb_flags; } ;
struct TYPE_3__ {int panel_width; int panel_height; int panel_hbp; int panel_hfp; int panel_hpw; int panel_vbp; int panel_vfp; int panel_vpw; int panel_freq; } ;
struct diu_softc {int* sc_gamma; int * sc_fbd; TYPE_2__ sc_info; void* sc_cursor; TYPE_1__ sc_panel; int ih; int * res; int sc_dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*,void**) ;
 int FUNC_1 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int,int *,int ,struct diu_softc*,int *) ;
 void* FUNC_4 (int,int ,int ,int ,int ,int ,int ) ;
 int * FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct diu_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct diu_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (void*,struct edid_info*) ;
 int FUNC_14 (int ) ;
 struct videomode* FUNC_15 (int,int,int) ;
 scalar_t__ FUNC_16 (int ,int ,char*,char const**) ;
 int FUNC_17 (char const*,char*,int*,int*,int*) ;
 scalar_t__ FUNC_18 (intptr_t) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_11)
{
 struct edid_info VAR_12;
 struct diu_softc *VAR_13;
 const struct videomode *VAR_14;
 void *VAR_15;
 const char *VAR_16;
 phandle_t VAR_17;
 int VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;

 VAR_13 = FUNC_8(VAR_11);
 VAR_13->sc_dev = VAR_11;

 if (FUNC_2(VAR_11, VAR_10, VAR_13->res)) {
  FUNC_10(VAR_11, "could not allocate resources\n");
  return (VAR_1);
 }

 VAR_17 = FUNC_14(VAR_11);

 VAR_21 = FUNC_3(VAR_11, VAR_13->res[1], VAR_4 | VAR_3,
     ((void*)0), VAR_9, VAR_13, &VAR_13->ih);
 if (VAR_21) {
  FUNC_10(VAR_11, "Unable to alloc interrupt resource.\n");
  return (VAR_1);
 }


 if (FUNC_0(VAR_17, "edid", &VAR_15) <= 0) {

  if (FUNC_16(FUNC_6(VAR_11),
      FUNC_9(VAR_11), "mode", &VAR_16) != 0) {
   FUNC_10(VAR_11,
       "No EDID data and no video-mode env set\n");
   return (VAR_1);
  }
 }
 if (VAR_15 != ((void*)0)) {
  if (FUNC_13(VAR_15, &VAR_12) != 0) {
   FUNC_10(VAR_11, "Error parsing EDID\n");
   FUNC_1(VAR_15);
   return (VAR_1);
  }
  VAR_14 = VAR_12.edid_preferred_mode;
 } else {

  if ((VAR_21 = FUNC_17(VAR_16, "%dx%d@%d", &VAR_20, &VAR_18, &VAR_19)) != 3) {
   FUNC_10(VAR_11,
       "Cannot parse video mode: %s\n", VAR_16);
   return (VAR_1);
  }
  VAR_14 = FUNC_15(VAR_20, VAR_18, VAR_19);
  if (VAR_14 == ((void*)0)) {
   FUNC_10(VAR_11,
       "Cannot find mode for %dx%d@%d", VAR_20, VAR_18, VAR_19);
   return (VAR_1);
  }
 }

 VAR_13->sc_panel.panel_width = VAR_14->hdisplay;
 VAR_13->sc_panel.panel_height = VAR_14->vdisplay;
 VAR_13->sc_panel.panel_hbp = VAR_14->hsync_start - VAR_14->hdisplay;
 VAR_13->sc_panel.panel_hfp = VAR_14->htotal - VAR_14->hsync_end;
 VAR_13->sc_panel.panel_hpw = VAR_14->hsync_end - VAR_14->hsync_start;
 VAR_13->sc_panel.panel_vbp = VAR_14->vsync_start - VAR_14->vdisplay;
 VAR_13->sc_panel.panel_vfp = VAR_14->vtotal - VAR_14->vsync_end;
 VAR_13->sc_panel.panel_vpw = VAR_14->vsync_end - VAR_14->vsync_start;
 VAR_13->sc_panel.panel_freq = VAR_14->dot_clock;

 VAR_13->sc_info.fb_width = VAR_13->sc_panel.panel_width;
 VAR_13->sc_info.fb_height = VAR_13->sc_panel.panel_height;
 VAR_13->sc_info.fb_stride = VAR_13->sc_info.fb_width * 4;
 VAR_13->sc_info.fb_bpp = VAR_13->sc_info.fb_depth = 32;
 VAR_13->sc_info.fb_size = VAR_13->sc_info.fb_height * VAR_13->sc_info.fb_stride;
 VAR_13->sc_info.fb_vbase = (intptr_t)FUNC_4(VAR_13->sc_info.fb_size,
     VAR_5, VAR_6, 0, VAR_0, VAR_7, 0);
 VAR_13->sc_info.fb_pbase = (intptr_t)FUNC_18(VAR_13->sc_info.fb_vbase);
 VAR_13->sc_info.fb_flags = VAR_2;
 VAR_13->sc_info.fb_memattr = VAR_8;


 VAR_13->sc_gamma = FUNC_4(3 * 256, VAR_5, 0, 0,
     VAR_0, VAR_7, 0);

 for (VAR_22 = 0; VAR_22 < 3 * 256; VAR_22++)
  VAR_13->sc_gamma[VAR_22] = (VAR_22 % 256);


 VAR_13->sc_cursor = FUNC_4(32 * 32 * 2, VAR_5, VAR_6, 0,
     VAR_0, VAR_7, 0);

 FUNC_12(VAR_13);

 VAR_13->sc_info.fb_name = FUNC_7(VAR_11);


 VAR_13->sc_fbd = FUNC_5(VAR_11, "fbd", FUNC_9(VAR_11));
 if (VAR_13->sc_fbd == ((void*)0))
  FUNC_10(VAR_11, "Can't attach fbd device\n");

 if ((VAR_21 = FUNC_11(VAR_13->sc_fbd)) != 0) {
  FUNC_10(VAR_11, "Failed to attach fbd device: %d\n", VAR_21);
 }

 return (0);
}
