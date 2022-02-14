
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_text_short_entry {int rate; int rate2; unsigned int obj_id; char* text; scalar_t__ type; } ;
struct lev_search_text_long_entry {int rate; int rate2; unsigned int obj_id; int text_len; char* text; int type; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;

void FUNC_2 (void) {
  char *VAR_13, *VAR_14;
  int VAR_15, VAR_16, VAR_17;
  struct lev_search_text_short_entry *VAR_18;
  struct lev_search_text_long_entry *VAR_19;

  if (VAR_0[VAR_11] || !FUNC_0(VAR_0[VAR_9])) {
    return;
  }

  VAR_15 = VAR_1[VAR_10] + VAR_1[VAR_12] + 1;
  if (VAR_15 > 4095) {
    return;
  }

  if (VAR_15 < 256) {
    VAR_18 = FUNC_1 (21+VAR_15);
    VAR_18->type = VAR_3 + VAR_15;
    VAR_18->rate = (VAR_0[VAR_7] > 0);
    VAR_18->rate2 = VAR_0[VAR_6];
    VAR_18->obj_id = (VAR_0[VAR_8] << 32) + (unsigned) VAR_0[VAR_9];
    VAR_14 = VAR_18->text;
  } else {
    VAR_19 = FUNC_1 (23+VAR_15);
    VAR_19->type = VAR_2;
    VAR_19->rate = (VAR_0[VAR_7] > 0);
    VAR_19->rate2 = VAR_0[VAR_6];
    VAR_19->obj_id = (VAR_0[VAR_8] << 32) + (unsigned) VAR_0[VAR_9];
    VAR_19->text_len = VAR_15;
    VAR_14 = VAR_19->text;
  }

  VAR_13 = VAR_4[VAR_10];
  for (VAR_16 = VAR_1[VAR_10]; VAR_16 > 0; VAR_16--) {
    VAR_17 = (unsigned char) *VAR_13++;
    if (VAR_17 < ' ') { VAR_17 = ' '; }
    *VAR_14++ = VAR_17;
  }

  *VAR_14++ = '\t';

  VAR_13 = VAR_4[VAR_12];
  for (VAR_16 = VAR_1[VAR_12]; VAR_16 > 0; VAR_16--) {
    VAR_17 = (unsigned char) *VAR_13++;
    if (VAR_17 < ' ') { VAR_17 = ' '; }
    *VAR_14++ = VAR_17;
  }

  *VAR_14++ = 0;

  VAR_5++;

}
