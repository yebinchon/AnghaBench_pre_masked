
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_text_short_entry {int rate2; unsigned int obj_id; char* text; scalar_t__ rate; scalar_t__ type; } ;
struct lev_search_text_long_entry {int rate2; unsigned int obj_id; int text_len; char* text; scalar_t__ rate; int type; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 void* FUNC_1 (int) ;

void FUNC_2 (void) {
  char *VAR_14, *VAR_15;
  int VAR_16, VAR_17, VAR_18;
  struct lev_search_text_short_entry *VAR_19;
  struct lev_search_text_long_entry *VAR_20;

  if (VAR_0[VAR_11] || VAR_0[VAR_13] != 1 || VAR_0[VAR_10] || !FUNC_0(VAR_0[VAR_9])) {
    return;
  }

  VAR_16 = VAR_1[VAR_12] + VAR_1[VAR_6] + 1;
  if (VAR_16 > 4095) {
    return;
  }

  if (VAR_16 < 256) {
    VAR_19 = FUNC_1 (21+VAR_16);
    VAR_19->type = VAR_3 + VAR_16;
    VAR_19->rate = 0;
    VAR_19->rate2 = VAR_0[VAR_7];
    VAR_19->obj_id = (VAR_0[VAR_8] << 32) + (unsigned) VAR_0[VAR_9];
    VAR_15 = VAR_19->text;
  } else {
    VAR_20 = FUNC_1 (23+VAR_16);
    VAR_20->type = VAR_2;
    VAR_20->rate = 0;
    VAR_20->rate2 = VAR_0[VAR_7];
    VAR_20->obj_id = (VAR_0[VAR_8] << 32) + (unsigned) VAR_0[VAR_9];
    VAR_20->text_len = VAR_16;
    VAR_15 = VAR_20->text;
  }

  VAR_14 = VAR_4[VAR_12];
  for (VAR_17 = VAR_1[VAR_12]; VAR_17 > 0; VAR_17--) {
    VAR_18 = (unsigned char) *VAR_14++;
    if (VAR_18 < ' ') { VAR_18 = ' '; }
    *VAR_15++ = VAR_18;
  }

  *VAR_15++ = '\t';

  VAR_14 = VAR_4[VAR_6];
  for (VAR_17 = VAR_1[VAR_6]; VAR_17 > 0; VAR_17--) {
    VAR_18 = (unsigned char) *VAR_14++;
    if (VAR_18 < ' ') { VAR_18 = ' '; }
    *VAR_15++ = VAR_18;
  }

  *VAR_15++ = 0;

  VAR_5++;

}
