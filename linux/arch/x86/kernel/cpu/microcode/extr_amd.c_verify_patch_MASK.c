
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct microcode_header_amd {int processor_rev_id; int patch_id; scalar_t__ sb_dev_id; scalar_t__ nb_dev_id; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,size_t,size_t*,int) ;
 unsigned int FUNC_1 (int,size_t,size_t) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(u8 VAR_1, const u8 *VAR_2, size_t VAR_3, u32 *VAR_4, bool VAR_5)
{
 struct microcode_header_amd *VAR_6;
 unsigned int VAR_7;
 u32 VAR_8;
 u16 VAR_9;
 u8 VAR_10;

 if (!FUNC_0(VAR_2, VAR_3, &VAR_8, VAR_5))
  return -1;






 VAR_3 -= VAR_0;





 if (VAR_3 < VAR_8) {
  if (!VAR_5)
   FUNC_2("Patch of size %u truncated.\n", VAR_8);

  return -1;
 }

 VAR_7 = FUNC_1(VAR_1, VAR_8, VAR_3);
 if (!VAR_7) {
  if (!VAR_5)
   FUNC_2("Per-family patch size mismatch.\n");
  return -1;
 }

 *VAR_4 = VAR_8;

 VAR_6 = (struct microcode_header_amd *)(VAR_2 + VAR_0);
 if (VAR_6->nb_dev_id || VAR_6->sb_dev_id) {
  if (!VAR_5)
   FUNC_3("Patch-ID 0x%08x: chipset-specific code unsupported.\n", VAR_6->patch_id);
  return -1;
 }

 VAR_9 = VAR_6->processor_rev_id;
 VAR_10 = 0xf + (VAR_9 >> 12);
 if (VAR_10 != VAR_1)
  return 1;

 return 0;
}
