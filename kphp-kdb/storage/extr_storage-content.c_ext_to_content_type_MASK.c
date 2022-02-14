
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_0 (char VAR_10[4]) {
  int VAR_11 = VAR_10[0];
  VAR_11 <<= 8;
  VAR_11 |= VAR_10[1];
  VAR_11 <<= 8;
  VAR_11 |= VAR_10[2];
  VAR_11 |= 0x202020;
  switch (VAR_11) {
    case 0x62696e: return VAR_5;
    case 0x676966: return VAR_0;
    case 0x6a7067: return VAR_1;
    case 0x6d7033: return VAR_3;
    case 0x6d7034: return VAR_4;
    case 0x6d6f76: return VAR_2;
    case 0x706466: return VAR_6;
    case 0x706e67: return VAR_7;
    case 0x776270: return VAR_9;
  }
  return VAR_8;
}
