
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ freq; int code_len; int code; } ;
typedef TYPE_1__ word_t ;
struct TYPE_9__ {int * code_len; int * code; } ;
struct TYPE_8__ {int * code_len; int * code; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 TYPE_6__ VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (int *,char*,int,int ) ;

int FUNC_6 (char *VAR_6, int VAR_7, char *VAR_8, int VAR_9) {
  char *VAR_10, *VAR_11 = VAR_6, *VAR_12 = VAR_6 + VAR_7;
  int VAR_13, VAR_14, VAR_15 = 1;
  word_t *VAR_16;




  VAR_10 = VAR_8;
  while (*VAR_10) {
    FUNC_2 (VAR_11 <= VAR_12);
    VAR_13 = FUNC_4 (VAR_10);
    FUNC_2 (VAR_13 >= 0);

    VAR_16 = FUNC_5 (&VAR_5, VAR_10, VAR_13, 0);

    if (VAR_16 && VAR_16->freq > 0) {
      { int VAR_17=VAR_16->code_len; int VAR_18=VAR_16->code; while (VAR_17>0) { { if (VAR_15 >= 0x100) { *VAR_11++ = (char) VAR_15; VAR_15 = 1; } VAR_15 <<= 1; VAR_15 += VAR_18 < 0; }; VAR_18<<=1; VAR_17--; } };
      VAR_10 += VAR_13;
    } else {
      VAR_16 = VAR_4[VAR_13];
      { int VAR_19=VAR_16->code_len; int VAR_20=VAR_16->code; while (VAR_19>0) { { if (VAR_15 >= 0x100) { *VAR_11++ = (char) VAR_15; VAR_15 = 1; } VAR_15 <<= 1; VAR_15 += VAR_20 < 0; }; VAR_20<<=1; VAR_19--; } };
      while (VAR_13 > 0) {
        VAR_14 = (unsigned char) *VAR_10++;
        { int VAR_21=VAR_3.code_len[VAR_14]; int VAR_22=VAR_3.code[VAR_14]; while (VAR_21>0) { { if (VAR_15 >= 0x100) { *VAR_11++ = (char) VAR_15; VAR_15 = 1; } VAR_15 <<= 1; VAR_15 += VAR_22 < 0; }; VAR_22<<=1; VAR_21--; } };
        VAR_13--;
      }
    }

    if (!*VAR_10) {
      break;
    }

    VAR_13 = FUNC_3(VAR_10);
    if (VAR_13 < 0) {
      break;
    }

    VAR_16 = FUNC_5 (&VAR_2, VAR_10, VAR_13, 0);

    if (VAR_16 && VAR_16->freq > 0) {
      { int VAR_23=VAR_16->code_len; int VAR_24=VAR_16->code; while (VAR_23>0) { { if (VAR_15 >= 0x100) { *VAR_11++ = (char) VAR_15; VAR_15 = 1; } VAR_15 <<= 1; VAR_15 += VAR_24 < 0; }; VAR_24<<=1; VAR_23--; } };
      VAR_10 += VAR_13;
    } else {
      VAR_16 = VAR_1[VAR_13];
      { int VAR_25=VAR_16->code_len; int VAR_26=VAR_16->code; while (VAR_25>0) { { if (VAR_15 >= 0x100) { *VAR_11++ = (char) VAR_15; VAR_15 = 1; } VAR_15 <<= 1; VAR_15 += VAR_26 < 0; }; VAR_26<<=1; VAR_25--; } };
      while (VAR_13 > 0) {
        VAR_14 = (unsigned char) *VAR_10++;
        { int VAR_27=VAR_0.code_len[VAR_14]; int VAR_28=VAR_0.code[VAR_14]; while (VAR_27>0) { { if (VAR_15 >= 0x100) { *VAR_11++ = (char) VAR_15; VAR_15 = 1; } VAR_15 <<= 1; VAR_15 += VAR_28 < 0; }; VAR_28<<=1; VAR_27--; } };
        VAR_13--;
      }
    }
  }

  { if (VAR_15 >= 0x100) { *VAR_11++ = (char) VAR_15; VAR_15 = 1; } VAR_15 <<= 1; VAR_15 += 1; };
  while (VAR_15 < 0x100) {
    { if (VAR_15 >= 0x100) { *VAR_11++ = (char) VAR_15; VAR_15 = 1; } VAR_15 <<= 1; VAR_15 += 0; };
  }
  *VAR_11++ = (char) VAR_15;
  FUNC_2 (VAR_11 <= VAR_12);
  return VAR_11 - VAR_6;



}
