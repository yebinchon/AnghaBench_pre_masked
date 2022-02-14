
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xbe_flags; scalar_t__ xbe_version; char* xbe_name; char* xbe_interpreter; int xbe_msize; int xbe_moffset; int* xbe_magic; int* xbe_mask; } ;
typedef TYPE_1__ ximgact_binmisc_entry_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(ximgact_binmisc_entry_t *VAR_4)
{
 uint32_t VAR_5, VAR_6 = VAR_4->xbe_flags;

 if (VAR_4->xbe_version != VAR_0) {
  FUNC_0(VAR_3, "Error: XBE version mismatch\n");
  return;
 }

 FUNC_1("name: %s\n", VAR_4->xbe_name);
 FUNC_1("interpreter: %s\n", VAR_4->xbe_interpreter);
 FUNC_1("flags: %s%s\n", (VAR_6 & VAR_1) ? "ENABLED " : "",
     (VAR_6 & VAR_2) ? "USE_MASK " : "");
 FUNC_1("magic size: %u\n", VAR_4->xbe_msize);
 FUNC_1("magic offset: %u\n", VAR_4->xbe_moffset);

 FUNC_1("magic: ");
 for(VAR_5 = 0; VAR_5 < VAR_4->xbe_msize; VAR_5++) {
  if (VAR_5 && !(VAR_5 % 12))
   FUNC_1("\n       ");
  else
   if (VAR_5 && !(VAR_5 % 4))
    FUNC_1(" ");
  FUNC_1("0x%02x ", VAR_4->xbe_magic[VAR_5]);
 }
 FUNC_1("\n");

 if (VAR_6 & VAR_2) {
  FUNC_1("mask:  ");
  for(VAR_5 = 0; VAR_5 < VAR_4->xbe_msize; VAR_5++) {
   if (VAR_5 && !(VAR_5 % 12))
    FUNC_1("\n       ");
   else
    if (VAR_5 && !(VAR_5 % 4))
     FUNC_1(" ");
   FUNC_1("0x%02x ", VAR_4->xbe_mask[VAR_5]);
  }
  FUNC_1("\n");
 }

 FUNC_1("\n");
}
