
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

void FUNC_1 (const unsigned char *VAR_0, int *VAR_1) {
  int *VAR_2 = VAR_1;


  int VAR_3, VAR_4, VAR_5, VAR_6;

  while (*VAR_0) {
    VAR_3 = *VAR_0++;
    if ((VAR_3 & 0x80) == 0) {
      *VAR_1++ = VAR_3;
    } else if ((VAR_3 & 0x40) == 0) {
      if (!(0)) {VAR_1 = VAR_2; break;};
    } else if ((VAR_3 & 0x20) == 0) {
      VAR_4 = *VAR_0++;
      if (!((VAR_4 & 0xc0) == 0x80)) {VAR_1 = VAR_2; break;};
      if (!((VAR_3 & 0x1e) > 0)) {VAR_1 = VAR_2; break;};
      *VAR_1++ = ((VAR_3 & 0x1f) << 6) | (VAR_4 & 0x3f);
    } else if ((VAR_3 & 0x10) == 0) {
      VAR_4 = *VAR_0++;
      if (!((VAR_4 & 0xc0) == 0x80)) {VAR_1 = VAR_2; break;};
      VAR_5 = *VAR_0++;
      if (!((VAR_5 & 0xc0) == 0x80)) {VAR_1 = VAR_2; break;};
      if (!(((VAR_3 & 0x0f) | (VAR_4 & 0x20)) > 0)) {VAR_1 = VAR_2; break;};
      *VAR_1++ = ((VAR_3 & 0x0f) << 12) | ((VAR_4 & 0x3f) << 6) | (VAR_5 & 0x3f);
    } else if ((VAR_3 & 0x08) == 0) {
      VAR_4 = *VAR_0++;
      if (!((VAR_4 & 0xc0) == 0x80)) {VAR_1 = VAR_2; break;};
      VAR_5 = *VAR_0++;
      if (!((VAR_5 & 0xc0) == 0x80)) {VAR_1 = VAR_2; break;};
      VAR_6 = *VAR_0++;
      if (!((VAR_6 & 0xc0) == 0x80)) {VAR_1 = VAR_2; break;};
      if (!(((VAR_3 & 0x07) | (VAR_4 & 0x30)) > 0)) {VAR_1 = VAR_2; break;};
      *VAR_1++ = ((VAR_3 & 0x07) << 18) | ((VAR_4 & 0x3f) << 12) | ((VAR_5 & 0x3f) << 6) | (VAR_6 & 0x3f);
    } else {
      if (!(0)) {VAR_1 = VAR_2; break;};
    }
  }
  *VAR_1 = 0;

}
