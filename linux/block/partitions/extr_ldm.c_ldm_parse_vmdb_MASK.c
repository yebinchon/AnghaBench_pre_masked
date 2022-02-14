
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vmdb {int ver_major; int ver_minor; scalar_t__ vblk_size; scalar_t__ last_vblk_seq; scalar_t__ vblk_offset; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static bool FUNC_6 (const u8 *VAR_1, struct vmdb *VAR_2)
{
 FUNC_0 (!VAR_1 || !VAR_2);

 if (VAR_0 != FUNC_2(VAR_1)) {
  FUNC_3 ("Cannot find the VMDB, database may be corrupt.");
  return 0;
 }

 VAR_2->ver_major = FUNC_1(VAR_1 + 0x12);
 VAR_2->ver_minor = FUNC_1(VAR_1 + 0x14);
 if ((VAR_2->ver_major != 4) || (VAR_2->ver_minor != 10)) {
  FUNC_5 ("Expected VMDB version %d.%d, got %d.%d. "
   "Aborting.", 4, 10, VAR_2->ver_major, VAR_2->ver_minor);
  return 0;
 }

 VAR_2->vblk_size = FUNC_2(VAR_1 + 0x08);
 if (VAR_2->vblk_size == 0) {
  FUNC_5 ("Illegal VBLK size");
  return 0;
 }

 VAR_2->vblk_offset = FUNC_2(VAR_1 + 0x0C);
 VAR_2->last_vblk_seq = FUNC_2(VAR_1 + 0x04);

 FUNC_4 ("Parsed VMDB successfully.");
 return 1;
}
