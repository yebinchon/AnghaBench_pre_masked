
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

const char *FUNC_1 (int VAR_0) {
  switch (VAR_0) {
    case 128: return "gz";
    case 130: return "bzip";
    case 129: return "xz";
  }
  static char VAR_1[32];
  FUNC_0 (VAR_1, "unknown (%d)", VAR_0);
  return VAR_1;
}
