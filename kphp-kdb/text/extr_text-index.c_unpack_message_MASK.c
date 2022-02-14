
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* str; } ;
typedef TYPE_1__ word_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,unsigned int,int*) ;
 TYPE_1__* FUNC_4 (int *,unsigned int,int*) ;

int FUNC_5 (char *VAR_5, char *VAR_6, int VAR_7) {
  char *VAR_8 = VAR_5, *VAR_9 = VAR_6;
  int VAR_10 = VAR_7 * 8 - 1;
  int VAR_11 = VAR_6[VAR_7-1];

  FUNC_1 (VAR_11);
  while (!(VAR_11 & 1)) { VAR_11 >>= 1; VAR_10--; }

  unsigned VAR_12 = FUNC_2 (*((unsigned *) VAR_9));
  unsigned VAR_13 = (((unsigned char) VAR_9[4]) << 1) + 1;
  VAR_9 += 5;



  while (VAR_10 > 0) {
    word_t *VAR_14;
    int VAR_15, VAR_16, VAR_17;


    VAR_14 = FUNC_4 (&VAR_4, VAR_12, &VAR_17);
    { int VAR_18=(VAR_17); VAR_10-=VAR_18; do {if (!(VAR_13&0xff)) {VAR_13=((*VAR_9++)<<1)+1;} VAR_12<<=1; if (VAR_13&0x100) VAR_12++; VAR_13<<=1;} while (--VAR_18);};
    if (VAR_14->len != 2 || VAR_14->str[0]) {
      char *VAR_19 = VAR_14->str, *VAR_20 = VAR_19 + VAR_14->len;
      while (VAR_19 < VAR_20) {
        *VAR_8++ = *VAR_19++;
      }
    } else {

      VAR_16 = (unsigned char) VAR_14->str[1];
      FUNC_1 (VAR_16 > 0);
      do {
        VAR_15 = FUNC_3 (&VAR_3, VAR_12, &VAR_17);
        { int VAR_21=(VAR_17); VAR_10-=VAR_21; do {if (!(VAR_13&0xff)) {VAR_13=((*VAR_9++)<<1)+1;} VAR_12<<=1; if (VAR_13&0x100) VAR_12++; VAR_13<<=1;} while (--VAR_21);};
        *VAR_8++ = VAR_15;
      } while (--VAR_16);
    }

    if (VAR_10 <= 0) {
      break;
    }


    VAR_14 = FUNC_4 (&VAR_2, VAR_12, &VAR_17);
    { int VAR_22=(VAR_17); VAR_10-=VAR_22; do {if (!(VAR_13&0xff)) {VAR_13=((*VAR_9++)<<1)+1;} VAR_12<<=1; if (VAR_13&0x100) VAR_12++; VAR_13<<=1;} while (--VAR_22);};
    if (VAR_14->len != 2 || VAR_14->str[0]) {
      char *VAR_23 = VAR_14->str, *VAR_24 = VAR_23 + VAR_14->len;
      while (VAR_23 < VAR_24) {
        *VAR_8++ = *VAR_23++;
      }
    } else {

      VAR_16 = (unsigned char) VAR_14->str[1];
      FUNC_1 (VAR_16 > 0);
      do {
        VAR_15 = FUNC_3 (&VAR_1, VAR_12, &VAR_17);
        { int VAR_25=(VAR_17); VAR_10-=VAR_25; do {if (!(VAR_13&0xff)) {VAR_13=((*VAR_9++)<<1)+1;} VAR_12<<=1; if (VAR_13&0x100) VAR_12++; VAR_13<<=1;} while (--VAR_25);};
        *VAR_8++ = VAR_15;
      } while (--VAR_16);
    }
  }
  FUNC_1 (!VAR_10 && VAR_8 < VAR_5 + VAR_0);



  *VAR_8 = 0;

  return VAR_8 - VAR_5;
}
