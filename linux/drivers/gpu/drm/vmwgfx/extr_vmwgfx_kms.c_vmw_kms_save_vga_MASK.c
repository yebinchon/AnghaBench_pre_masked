
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct vmw_vga_topology_state {scalar_t__ pos_x; scalar_t__ pos_y; scalar_t__ width; scalar_t__ height; void* primary; } ;
struct vmw_private {scalar_t__ vga_width; scalar_t__ vga_height; int capabilities; int num_displays; struct vmw_vga_topology_state* vga_save; scalar_t__ mmio_virt; void* vga_pitchlock; void* vga_bpp; } ;


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
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct vmw_private*) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (struct vmw_private*,int ) ;
 int FUNC_3 (struct vmw_private*,int ,size_t) ;

int FUNC_4(struct vmw_private *VAR_15)
{
 struct vmw_vga_topology_state *VAR_16;
 uint32_t VAR_17;

 VAR_15->vga_width = FUNC_2(VAR_15, VAR_14);
 VAR_15->vga_height = FUNC_2(VAR_15, VAR_11);
 VAR_15->vga_bpp = FUNC_2(VAR_15, VAR_4);
 if (VAR_15->capabilities & VAR_1)
  VAR_15->vga_pitchlock =
    FUNC_2(VAR_15, VAR_13);
 else if (FUNC_0(VAR_15))
  VAR_15->vga_pitchlock = FUNC_1(VAR_15->mmio_virt +
       VAR_2);

 if (!(VAR_15->capabilities & VAR_0))
  return 0;

 VAR_15->num_displays = FUNC_2(VAR_15,
       VAR_12);

 if (VAR_15->num_displays == 0)
  VAR_15->num_displays = 1;

 for (VAR_17 = 0; VAR_17 < VAR_15->num_displays; ++VAR_17) {
  VAR_16 = &VAR_15->vga_save[VAR_17];
  FUNC_3(VAR_15, VAR_6, VAR_17);
  VAR_16->primary = FUNC_2(VAR_15, VAR_7);
  VAR_16->pos_x = FUNC_2(VAR_15, VAR_8);
  VAR_16->pos_y = FUNC_2(VAR_15, VAR_9);
  VAR_16->width = FUNC_2(VAR_15, VAR_10);
  VAR_16->height = FUNC_2(VAR_15, VAR_5);
  FUNC_3(VAR_15, VAR_6, VAR_3);
  if (VAR_17 == 0 && VAR_15->num_displays == 1 &&
      VAR_16->width == 0 && VAR_16->height == 0) {






   VAR_16->width = VAR_15->vga_width - VAR_16->pos_x;
   VAR_16->height = VAR_15->vga_height - VAR_16->pos_y;
  }
 }

 return 0;
}
