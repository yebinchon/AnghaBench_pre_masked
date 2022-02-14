
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_text_short_entry {char* text; scalar_t__ obj_id; scalar_t__ rate2; scalar_t__ rate; scalar_t__ type; } ;
struct lev_search_text_long_entry {int text_len; char* text; scalar_t__ obj_id; scalar_t__ rate2; scalar_t__ rate; int type; } ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char,scalar_t__) ;
 int FUNC_2 (char*,char*,int) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 void* FUNC_3 (int) ;

void FUNC_4 (void) {
  char *VAR_17, *VAR_18;
  int VAR_19, VAR_20, VAR_21, VAR_22;
  static char VAR_23[256];
  struct lev_search_text_short_entry *VAR_24;
  struct lev_search_text_long_entry *VAR_25;

  if (!VAR_0[VAR_11] || !FUNC_0(VAR_0[VAR_11]) || VAR_0[VAR_14]) {
    return;
  }

  VAR_17 = VAR_23;

  if (VAR_0[VAR_6] > 0) {
    VAR_17 += FUNC_1 (VAR_17, 'T', VAR_0[VAR_6]);
  }
  if (VAR_0[VAR_15] > 0) {
    VAR_17 += FUNC_1 (VAR_17, 'S', VAR_0[VAR_15]);
  }
  if (VAR_0[VAR_9] > 0) {
    VAR_17 += FUNC_1 (VAR_17, 'C', VAR_0[VAR_9]);
  }
  if (VAR_0[VAR_7] > 0) {
    VAR_17 += FUNC_1 (VAR_17, 'c', VAR_0[VAR_7]);
  }

  VAR_22 = VAR_17 - VAR_23;
  if (VAR_22 > 0) {
    *VAR_17 = ' ';
    VAR_22++;
  }

  VAR_19 = VAR_22 + VAR_1[VAR_12] + VAR_1[VAR_10] + 1;

  if (VAR_19 > 8192) {
    return;
  }

  if (VAR_19 < 256) {
    VAR_24 = FUNC_3 (21+VAR_19);
    VAR_24->type = VAR_3 + VAR_19;
    VAR_24->rate = (VAR_0[VAR_8] <= VAR_0[VAR_16] ? VAR_0[VAR_8] : 0);
    VAR_24->rate2 = (VAR_0[VAR_13] > 0 ? VAR_0[VAR_13] : 1000000000);
    VAR_24->obj_id = VAR_0[VAR_11];
    VAR_18 = VAR_24->text;
  } else {
    VAR_25 = FUNC_3 (23+VAR_19);
    VAR_25->type = VAR_2;
    VAR_25->rate = (VAR_0[VAR_8] <= VAR_0[VAR_16] ? VAR_0[VAR_8] : 0);
    VAR_25->rate2 = (VAR_0[VAR_13] > 0 ? VAR_0[VAR_13] : 1000000000);
    VAR_25->obj_id = VAR_0[VAR_11];
    VAR_25->text_len = VAR_19;
    VAR_18 = VAR_25->text;
  }

  if (VAR_22) {
    FUNC_2 (VAR_18, VAR_23, VAR_22);
    VAR_18 += VAR_22;
  }

  VAR_17 = VAR_4[VAR_12];
  for (VAR_20 = VAR_1[VAR_12]; VAR_20 > 0; VAR_20--) {
    VAR_21 = (unsigned char) *VAR_17++;
    if (VAR_21 < ' ') { VAR_21 = ' '; }
    *VAR_18++ = VAR_21;
  }

  *VAR_18++ = '\t';

  VAR_17 = VAR_4[VAR_10];
  for (VAR_20 = VAR_1[VAR_10]; VAR_20 > 0; VAR_20--) {
    VAR_21 = (unsigned char) *VAR_17++;
    if (VAR_21 < ' ') { VAR_21 = ' '; }
    *VAR_18++ = VAR_21;
  }

  *VAR_18++ = 0;

  VAR_5++;
}
