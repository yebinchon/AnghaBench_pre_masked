
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1 (unsigned int *VAR_0, const char *VAR_1) {

  int VAR_2 = (unsigned char)VAR_1[0];
  if ((VAR_2 & 0x80) == 0) {
    *VAR_0 = VAR_2;
    return (VAR_2 != 0);
  }

  if (!((VAR_2 & 0x40) != 0)) {*VAR_0 = 0xFFFFFFFF; return -1;};

  int VAR_3 = (unsigned char)VAR_1[1];
  if (!((VAR_3 & 0xc0) == 0x80)) {*VAR_0 = 0xFFFFFFFF; return -1;};
  if ((VAR_2 & 0x20) == 0) {
    if (!((VAR_2 & 0x1e) > 0)) {*VAR_0 = 0xFFFFFFFF; return -1;};
    *VAR_0 = (((VAR_2 & 0x1f) << 6) | (VAR_3 & 0x3f));
    return 2;
  }

  int VAR_4 = (unsigned char)VAR_1[2];
  if (!((VAR_4 & 0xc0) == 0x80)) {*VAR_0 = 0xFFFFFFFF; return -1;};
  if ((VAR_2 & 0x10) == 0) {
    if (!(((VAR_2 & 0x0f) | (VAR_3 & 0x20)) > 0)) {*VAR_0 = 0xFFFFFFFF; return -1;};
    *VAR_0 = (((VAR_2 & 0x0f) << 12) | ((VAR_3 & 0x3f) << 6) | (VAR_4 & 0x3f));
    return 3;
  }

  int VAR_5 = (unsigned char)VAR_1[3];
  if (!((VAR_5 & 0xc0) == 0x80)) {*VAR_0 = 0xFFFFFFFF; return -1;};
  if ((VAR_2 & 0x08) == 0) {
    if (!(((VAR_2 & 0x07) | (VAR_3 & 0x30)) > 0)) {*VAR_0 = 0xFFFFFFFF; return -1;};
    *VAR_0 = (((VAR_2 & 0x07) << 18) | ((VAR_3 & 0x3f) << 12) | ((VAR_4 & 0x3f) << 6) | (VAR_5 & 0x3f));
    return 4;
  }

  int VAR_6 = (unsigned char)VAR_1[4];
  if (!((VAR_6 & 0xc0) == 0x80)) {*VAR_0 = 0xFFFFFFFF; return -1;};
  if ((VAR_2 & 0x04) == 0) {
    if (!(((VAR_2 & 0x03) | (VAR_3 & 0x38)) > 0)) {*VAR_0 = 0xFFFFFFFF; return -1;};
    *VAR_0 = (((VAR_2 & 0x03) << 24) | ((VAR_3 & 0x3f) << 18) | ((VAR_4 & 0x3f) << 12) | ((VAR_5 & 0x3f) << 6) | (VAR_6 & 0x3f));
    return 5;
  }

  int VAR_7 = (unsigned char)VAR_1[5];
  if (!((VAR_7 & 0xc0) == 0x80)) {*VAR_0 = 0xFFFFFFFF; return -1;};
  if ((VAR_2 & 0x02) == 0) {
    if (!(((VAR_2 & 0x01) | (VAR_3 & 0x3c)) > 0)) {*VAR_0 = 0xFFFFFFFF; return -1;};
    *VAR_0 = (((VAR_2 & 0x01) << 30) | ((VAR_3 & 0x3f) << 24) | ((VAR_4 & 0x3f) << 18) | ((VAR_5 & 0x3f) << 12) | ((VAR_6 & 0x3f) << 6) | (VAR_7 & 0x3f));
    return 6;
  }

  if (!(0)) {*VAR_0 = 0xFFFFFFFF; return -1;};

}
