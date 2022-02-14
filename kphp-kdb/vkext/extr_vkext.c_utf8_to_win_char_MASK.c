
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

int FUNC_0 (int VAR_5) {
  if (VAR_5 < 0x80) {
    return VAR_5;
  }
  if (VAR_5 == 8238 || VAR_5 == 8236 || VAR_5 == 8235) return 0xda;
  switch (VAR_5 & ~0xff) {
    case 0x400: return VAR_3[VAR_5 & 0xff];
    case 0x2000: return VAR_1[VAR_5 & 0xff];
    case 0xff00: return VAR_4[VAR_5 & 0xff];
    case 0x2100: return VAR_2[VAR_5 & 0xff];
    case 0x000: return VAR_0[VAR_5 & 0xff];
  }
  return -1;
}
