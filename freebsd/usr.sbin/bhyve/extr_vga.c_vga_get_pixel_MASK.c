
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int * dac_palette_rgb; } ;
struct TYPE_3__ {size_t atc_color_plane_enb; int atc_mode; int* atc_palette; size_t atc_color_select_45; size_t atc_color_select_67; } ;
struct vga_softc {int gc_width; int* vga_ram; TYPE_2__ vga_dac; TYPE_1__ vga_atc; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_0(struct vga_softc *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 uint8_t VAR_7;
 uint8_t VAR_8;

 VAR_5 = (VAR_4 * VAR_2->gc_width / 8) + (VAR_3 / 8);
 VAR_6 = 7 - (VAR_3 % 8);

 VAR_7 = (((VAR_2->vga_ram[VAR_5 + 0 * 64*VAR_1] >> VAR_6) & 0x1) << 0) |
  (((VAR_2->vga_ram[VAR_5 + 1 * 64*VAR_1] >> VAR_6) & 0x1) << 1) |
  (((VAR_2->vga_ram[VAR_5 + 2 * 64*VAR_1] >> VAR_6) & 0x1) << 2) |
  (((VAR_2->vga_ram[VAR_5 + 3 * 64*VAR_1] >> VAR_6) & 0x1) << 3);

 VAR_7 &= VAR_2->vga_atc.atc_color_plane_enb;

 if (VAR_2->vga_atc.atc_mode & VAR_0) {
  VAR_8 = VAR_2->vga_atc.atc_palette[VAR_7] & 0x0f;
  VAR_8 |= VAR_2->vga_atc.atc_color_select_45;
 } else {
  VAR_8 = VAR_2->vga_atc.atc_palette[VAR_7];
 }
 VAR_8 |= VAR_2->vga_atc.atc_color_select_67;

 return (VAR_2->vga_dac.dac_palette_rgb[VAR_8]);
}
