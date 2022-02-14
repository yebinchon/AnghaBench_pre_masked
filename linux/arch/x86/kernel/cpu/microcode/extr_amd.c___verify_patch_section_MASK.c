
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct microcode_header_amd {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static bool
FUNC_1(const u8 *VAR_2, size_t VAR_3, u32 *VAR_4, bool VAR_5)
{
 u32 VAR_6, VAR_7;
 const u32 *VAR_8;

 if (VAR_3 < VAR_0) {
  if (!VAR_5)
   FUNC_0("Truncated patch section.\n");

  return 0;
 }

 VAR_8 = (const u32 *)VAR_2;
 VAR_6 = VAR_8[0];
 VAR_7 = VAR_8[1];

 if (VAR_6 != VAR_1) {
  if (!VAR_5)
   FUNC_0("Invalid type field (0x%x) in container file section header.\n",
    VAR_6);

  return 0;
 }

 if (VAR_7 < sizeof(struct microcode_header_amd)) {
  if (!VAR_5)
   FUNC_0("Patch of size %u too short.\n", VAR_7);

  return 0;
 }

 *VAR_4 = VAR_7;

 return 1;
}
