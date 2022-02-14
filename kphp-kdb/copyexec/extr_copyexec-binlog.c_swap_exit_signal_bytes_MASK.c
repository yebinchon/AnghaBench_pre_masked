
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0 (unsigned *VAR_0) {
  unsigned VAR_1 = *VAR_0, VAR_2 = VAR_1 >> 16, VAR_3 = VAR_1 & 0xffff, VAR_4 = VAR_3 >> 8, VAR_5 = VAR_3 & 0xff;
  *VAR_0 = (VAR_2 << 16) | (VAR_5 << 8) | VAR_4;
}
