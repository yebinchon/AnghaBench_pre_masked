
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0 (int VAR_0) {
  VAR_0 %= 100;
  if (VAR_0 / 10 == 1) {
    return "th";
  }
  if (VAR_0 % 10 == 1) {
    return "st";
  }
  if (VAR_0 % 10 == 2) {
    return "nd";
  }
  if (VAR_0 % 10 == 3) {
    return "rd";
  }
  return "th";
}
