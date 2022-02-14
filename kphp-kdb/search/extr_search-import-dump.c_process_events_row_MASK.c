
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_text_short_entry {int rate; int rate2; int obj_id; char* text; scalar_t__ type; } ;
struct lev_search_text_long_entry {int rate; int rate2; int obj_id; int text_len; char* text; int type; } ;


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
 size_t VAR_14 ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (char*,char*,int) ;
 void* FUNC_3 (int) ;

void FUNC_4 (void) {
  char *VAR_15, *VAR_16;
  int VAR_17, VAR_18, VAR_19, VAR_20;
  static char VAR_21[256];
  struct lev_search_text_short_entry *VAR_22;
  struct lev_search_text_long_entry *VAR_23;

  if (!VAR_0[VAR_10] || !FUNC_0(VAR_0[VAR_10]) || VAR_0[VAR_11] != 1) {
    return;
  }

  VAR_15 = VAR_21;

  if (VAR_0[VAR_9] >= 0) {
    VAR_15 += FUNC_1 (VAR_15, 'T', VAR_0[VAR_9]);
  }
  if (VAR_0[VAR_7] > 0) {
    VAR_15 += FUNC_1 (VAR_15, 'C', VAR_0[VAR_7]);
  }
  if (VAR_0[VAR_6] > 0) {
    VAR_15 += FUNC_1 (VAR_15, 'c', VAR_0[VAR_6]);
  }

  VAR_20 = VAR_15 - VAR_21;
  if (VAR_20 > 0) {
    *VAR_15 = ' ';
    VAR_20++;
  }

  VAR_17 = VAR_20 + VAR_1[VAR_12] + VAR_1[VAR_8] + 1;

  if (VAR_17 > 8192) {
    return;
  }

  if (VAR_17 < 256) {
    VAR_22 = FUNC_3 (21+VAR_17);
    VAR_22->type = VAR_3 + VAR_17;
    VAR_22->rate = VAR_0[VAR_14];
    VAR_22->rate2 = VAR_0[VAR_13];
    VAR_22->obj_id = VAR_0[VAR_10];
    VAR_16 = VAR_22->text;
  } else {
    VAR_23 = FUNC_3 (23+VAR_17);
    VAR_23->type = VAR_2;
    VAR_23->rate = VAR_0[VAR_14];
    VAR_23->rate2 = VAR_0[VAR_13];
    VAR_23->obj_id = VAR_0[VAR_10];
    VAR_23->text_len = VAR_17;
    VAR_16 = VAR_23->text;
  }

  if (VAR_20) {
    FUNC_2 (VAR_16, VAR_21, VAR_20);
    VAR_16 += VAR_20;
  }

  VAR_15 = VAR_4[VAR_12];
  for (VAR_18 = VAR_1[VAR_12]; VAR_18 > 0; VAR_18--) {
    VAR_19 = (unsigned char) *VAR_15++;
    if (VAR_19 < ' ') { VAR_19 = ' '; }
    *VAR_16++ = VAR_19;
  }

  *VAR_16++ = '\t';

  VAR_15 = VAR_4[VAR_8];
  for (VAR_18 = VAR_1[VAR_8]; VAR_18 > 0; VAR_18--) {
    VAR_19 = (unsigned char) *VAR_15++;
    if (VAR_19 < ' ') { VAR_19 = ' '; }
    *VAR_16++ = VAR_19;
  }

  *VAR_16++ = 0;

  VAR_5++;
}
