
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct vmw_vga_topology_state {size_t primary; size_t pos_x; size_t pos_y; size_t width; size_t height; } ;
struct vmw_private {size_t vga_width; size_t vga_height; size_t vga_bpp; int capabilities; size_t vga_pitchlock; size_t num_displays; struct vmw_vga_topology_state* vga_save; scalar_t__ mmio_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
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
 scalar_t__ FUNC_0 (struct vmw_private*) ;
 int FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (struct vmw_private*,int ,size_t) ;

int FUNC_3(struct vmw_private *VAR_14)
{
 struct vmw_vga_topology_state *VAR_15;
 uint32_t VAR_16;

 FUNC_2(VAR_14, VAR_13, VAR_14->vga_width);
 FUNC_2(VAR_14, VAR_11, VAR_14->vga_height);
 FUNC_2(VAR_14, VAR_4, VAR_14->vga_bpp);
 if (VAR_14->capabilities & VAR_1)
  FUNC_2(VAR_14, VAR_12,
     VAR_14->vga_pitchlock);
 else if (FUNC_0(VAR_14))
  FUNC_1(VAR_14->vga_pitchlock,
          VAR_14->mmio_virt + VAR_2);

 if (!(VAR_14->capabilities & VAR_0))
  return 0;

 for (VAR_16 = 0; VAR_16 < VAR_14->num_displays; ++VAR_16) {
  VAR_15 = &VAR_14->vga_save[VAR_16];
  FUNC_2(VAR_14, VAR_6, VAR_16);
  FUNC_2(VAR_14, VAR_7, VAR_15->primary);
  FUNC_2(VAR_14, VAR_8, VAR_15->pos_x);
  FUNC_2(VAR_14, VAR_9, VAR_15->pos_y);
  FUNC_2(VAR_14, VAR_10, VAR_15->width);
  FUNC_2(VAR_14, VAR_5, VAR_15->height);
  FUNC_2(VAR_14, VAR_6, VAR_3);
 }

 return 0;
}
