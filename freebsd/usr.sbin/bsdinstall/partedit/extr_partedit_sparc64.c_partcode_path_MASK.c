
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

const char *
FUNC_1(const char *VAR_0, const char *VAR_1) {
 if (FUNC_0(VAR_0, "VTOC8") == 0) {
  if (FUNC_0(VAR_1, "ufs") == 0) {
   return ("/boot/boot1");
  } else if (FUNC_0(VAR_1, "zfs") == 0) {
   return ("/boot/zfsboot");
  }
 }
 return (((void*)0));
}
