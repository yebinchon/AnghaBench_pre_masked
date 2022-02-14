
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0 (int VAR_0) {
  static const char *VAR_1[2] = { "section types", "section functions" };
  if (VAR_0 < 0 || VAR_0 > 1) {
    return "unknown section";
  }
  return VAR_1[VAR_0];
}
