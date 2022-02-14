
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (char const*,unsigned long*) ;
 unsigned long VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char const*,char*,char const**) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3)
{
 if (FUNC_4(VAR_3, "max-pack-size=", &VAR_3)) {
  unsigned long VAR_4;
  if (!FUNC_0(VAR_3, &VAR_4))
   return 0;
  if (VAR_4 < 8192) {
   FUNC_6("max-pack-size is now in bytes, assuming --max-pack-size=%lum", VAR_4);
   VAR_4 *= 1024 * 1024;
  } else if (VAR_4 < 1024 * 1024) {
   FUNC_6("minimum max-pack-size is 1 MiB");
   VAR_4 = 1024 * 1024;
  }
  VAR_1 = VAR_4;
 } else if (FUNC_4(VAR_3, "big-file-threshold=", &VAR_3)) {
  unsigned long VAR_5;
  if (!FUNC_0(VAR_3, &VAR_5))
   return 0;
  VAR_0 = VAR_5;
 } else if (FUNC_4(VAR_3, "depth=", &VAR_3)) {
  FUNC_2(VAR_3);
 } else if (FUNC_4(VAR_3, "active-branches=", &VAR_3)) {
  FUNC_1(VAR_3);
 } else if (FUNC_4(VAR_3, "export-pack-edges=", &VAR_3)) {
  FUNC_3(VAR_3);
 } else if (FUNC_5(VAR_3, "quiet")) {
  VAR_2 = 0;
 } else if (FUNC_5(VAR_3, "stats")) {
  VAR_2 = 1;
 } else {
  return 0;
 }

 return 1;
}
