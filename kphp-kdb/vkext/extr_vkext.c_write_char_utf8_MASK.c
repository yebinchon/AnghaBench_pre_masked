
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char,char) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (int) ;

void FUNC_5 (int VAR_0) {

  if (!VAR_0) {



    return;
  }






  if (VAR_0 < 128) {
    FUNC_0 (VAR_0);
    return;
  }
  if (VAR_0 < 0x800) {
    FUNC_1 (0xc0 + (VAR_0 >> 6), 0x80 + (VAR_0 & 63));
    return;
  }
  if (VAR_0 < 0x10000) {
    FUNC_2 (0xe0 + (VAR_0 >> 12), 0x80 + ((VAR_0 >> 6) & 63), 0x80 + (VAR_0 & 63));
    return;
  }
  if (VAR_0 >= 0x1f000 && VAR_0 <= 0x1f6c0) {
    FUNC_3 (0xf0 + (VAR_0 >> 18), 0x80 + ((VAR_0 >> 12) & 63), 0x80 + ((VAR_0 >> 6) & 63), 0x80 + (VAR_0 & 63));
    return;
  }
  FUNC_1 ('$', '#');
  FUNC_4 (VAR_0);
  FUNC_0 (';');
}
