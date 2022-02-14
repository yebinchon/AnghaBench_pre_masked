
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct vmctx {int dummy; } ;
struct TYPE_2__ {int gc_misc_mm; int gc_latch0; int gc_latch1; int gc_latch2; int gc_latch3; int gc_read_map_sel; scalar_t__ gc_mode_oe; scalar_t__ gc_mode_rm; } ;
struct vga_softc {int* vga_ram; TYPE_1__ vga_gc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static uint64_t
FUNC_1(struct vmctx *VAR_1, uint64_t VAR_2, void *VAR_3)
{
 struct vga_softc *VAR_4 = VAR_3;
 uint8_t VAR_5;
 int VAR_6;

 VAR_6 = VAR_2;
 switch (VAR_4->vga_gc.gc_misc_mm) {
 case 0x0:



  VAR_6 -=0xa0000;
  VAR_6 &= (128 * VAR_0 - 1);
  break;
 case 0x1:



  VAR_6 -=0xa0000;
  VAR_6 &= (64 * VAR_0 - 1);
  break;
 case 0x2:



  FUNC_0(0);
 case 0x3:



  VAR_6 -=0xb8000;
  VAR_6 &= (32 * VAR_0 - 1);
  break;
 }


 VAR_4->vga_gc.gc_latch0 = VAR_4->vga_ram[VAR_6 + 0*64*VAR_0];
 VAR_4->vga_gc.gc_latch1 = VAR_4->vga_ram[VAR_6 + 1*64*VAR_0];
 VAR_4->vga_gc.gc_latch2 = VAR_4->vga_ram[VAR_6 + 2*64*VAR_0];
 VAR_4->vga_gc.gc_latch3 = VAR_4->vga_ram[VAR_6 + 3*64*VAR_0];

 if (VAR_4->vga_gc.gc_mode_rm) {

  FUNC_0(0);
 }

 VAR_5 = VAR_4->vga_gc.gc_read_map_sel;
 if (VAR_4->vga_gc.gc_mode_oe) {
  VAR_5 |= (VAR_6 & 1);
  VAR_6 &= ~1;
 }


 VAR_6 += VAR_5 * 64*VAR_0;

 return (VAR_4->vga_ram[VAR_6]);
}
