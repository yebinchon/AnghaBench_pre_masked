
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hubbub {int dummy; } ;
struct TYPE_2__ {int agp_base; int agp_top; int agp_bot; int fb_offset; int fb_top; int fb_base; } ;
struct dcn_hubbub_phys_addr_config {TYPE_1__ system_aperture; } ;
struct dcn20_hubbub {int dummy; } ;


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
 int FUNC_0 (int ,int ,int ,int ) ;
 struct dcn20_hubbub* FUNC_1 (struct hubbub*) ;
 int FUNC_2 (struct hubbub*) ;

__attribute__((used)) static int FUNC_3(struct hubbub *VAR_13,
  struct dcn_hubbub_phys_addr_config *VAR_14)
{
 struct dcn20_hubbub *VAR_15 = FUNC_1(VAR_13);

 FUNC_0(VAR_6, 0,
  VAR_9, VAR_14->system_aperture.fb_base);
 FUNC_0(VAR_7, 0,
   VAR_11, VAR_14->system_aperture.fb_top);
 FUNC_0(VAR_8, 0,
   VAR_10, VAR_14->system_aperture.fb_offset);
 FUNC_0(VAR_4, 0,
   VAR_1, VAR_14->system_aperture.agp_bot);
 FUNC_0(VAR_5, 0,
   VAR_2, VAR_14->system_aperture.agp_top);
 FUNC_0(VAR_3, 0,
   VAR_0, VAR_14->system_aperture.agp_base);

 FUNC_2(VAR_13);

 return VAR_12;
}
