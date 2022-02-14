
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_info {int panel_hbp; int panel_hpw; int panel_hfp; int panel_vbp; int panel_vpw; int panel_vfp; int panel_freq; } ;
struct TYPE_4__ {int fb_height; int fb_width; int fb_pbase; } ;
struct diu_softc {int * res; TYPE_2__** sc_planes; TYPE_1__ sc_info; TYPE_2__* sc_cursor; TYPE_2__* sc_gamma; int sc_dev; struct panel_info sc_panel; } ;
struct diu_area_descriptor {int dummy; } ;
struct TYPE_5__ {int pixel_format; scalar_t__ next_ad_addr; void* chroma_key_min; scalar_t__ chroma_key_max; scalar_t__ display_offset; scalar_t__ aoi_offset; void* aoi_size; void* source_size; void* bitmap_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int,int,int,int,int,int,int,int ,int,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_2__* FUNC_3 (int,int ,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(struct diu_softc *VAR_27)
{
 struct panel_info *VAR_28;
 int VAR_29;

 VAR_28 = &VAR_27->sc_panel;


 VAR_29 = FUNC_1(VAR_27->res[0], VAR_11);
 VAR_29 &= ~(VAR_15 << VAR_17);
 FUNC_2(VAR_27->res[0], VAR_11, VAR_29);

 if (FUNC_4(VAR_27->sc_dev, VAR_28->panel_freq) < 0) {
  return (VAR_20);
 }



 FUNC_2(VAR_27->res[0], VAR_12, FUNC_6(VAR_27->sc_gamma));
 FUNC_2(VAR_27->res[0], VAR_5, FUNC_6(VAR_27->sc_cursor));
 FUNC_2(VAR_27->res[0], VAR_6, 0);

 VAR_29 = ((VAR_27->sc_info.fb_height) << VAR_3);
 VAR_29 |= VAR_27->sc_info.fb_width;
 FUNC_2(VAR_27->res[0], VAR_10, VAR_29);

 VAR_29 = (VAR_28->panel_hbp << VAR_0);
 VAR_29 |= (VAR_28->panel_hpw << VAR_25);
 VAR_29 |= (VAR_28->panel_hfp << VAR_21);
 FUNC_2(VAR_27->res[0], VAR_13, VAR_29);

 VAR_29 = (VAR_28->panel_vbp << VAR_1);
 VAR_29 |= (VAR_28->panel_vpw << VAR_26);
 VAR_29 |= (VAR_28->panel_vfp << VAR_22);
 FUNC_2(VAR_27->res[0], VAR_19, VAR_29);

 FUNC_2(VAR_27->res[0], VAR_4, 0);


 FUNC_2(VAR_27->res[0], VAR_14, 0x3f);


 VAR_27->sc_planes[0] = FUNC_3(sizeof(struct diu_area_descriptor),
  VAR_23, VAR_24, 0, VAR_2, 32, 0);
 FUNC_2(VAR_27->res[0], VAR_7, FUNC_6(VAR_27->sc_planes[0]));
 FUNC_2(VAR_27->res[0], VAR_8, 0);
 FUNC_2(VAR_27->res[0], VAR_9, 0);
 VAR_29 = FUNC_5((8 << (4 * 3)) | (8 << 4 * 2) | (8 << 4 * 1) | (8 << 4 * 0) | (1 << 28) | (3 << 16) | (3 << 25) | (2 << 19) | (1 << 21) | (0 << 24));
 VAR_27->sc_planes[0]->pixel_format = VAR_29;

 VAR_27->sc_planes[0]->bitmap_address = FUNC_5(VAR_27->sc_info.fb_pbase);

 VAR_29 = (VAR_27->sc_info.fb_width | (VAR_27->sc_info.fb_height << 12));
 VAR_27->sc_planes[0]->source_size = FUNC_5(VAR_29);

 VAR_29 = (VAR_27->sc_info.fb_width | (VAR_27->sc_info.fb_height << 16));
 VAR_27->sc_planes[0]->aoi_size = FUNC_5(VAR_29);

 VAR_27->sc_planes[0]->aoi_offset = 0;

 VAR_27->sc_planes[0]->display_offset = 0;

 VAR_27->sc_planes[0]->chroma_key_max = 0;

 VAR_29 = 255 << 16 | 255 << 8 | 255;
 VAR_27->sc_planes[0]->chroma_key_min = FUNC_5(VAR_29);

 VAR_27->sc_planes[0]->next_ad_addr = 0;


 FUNC_2(VAR_27->res[0], VAR_18, 0x1f5f666);


 VAR_29 = FUNC_1(VAR_27->res[0], VAR_11);
 VAR_29 &= ~(VAR_15 << VAR_17);
 VAR_29 |= (VAR_16 << VAR_17);
 FUNC_2(VAR_27->res[0], VAR_11, VAR_29);

 return (0);
}
