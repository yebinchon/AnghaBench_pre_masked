
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int osb_blend1_size; int osb_blend0_size; int osd_blend_din0_scope_v; int osd_blend_din0_scope_h; } ;
struct meson_drm {scalar_t__ io_base; TYPE_1__ viu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct meson_drm *VAR_5)
{
 FUNC_2(VAR_5->viu.osd_blend_din0_scope_h,
         VAR_5->io_base +
         FUNC_0(VAR_3));
 FUNC_2(VAR_5->viu.osd_blend_din0_scope_v,
         VAR_5->io_base +
         FUNC_0(VAR_4));
 FUNC_2(VAR_5->viu.osb_blend0_size,
         VAR_5->io_base +
         FUNC_0(VAR_1));
 FUNC_2(VAR_5->viu.osb_blend1_size,
         VAR_5->io_base +
         FUNC_0(VAR_2));
 FUNC_1(3 << 8, 3 << 8,
       VAR_5->io_base + FUNC_0(VAR_0));
}
