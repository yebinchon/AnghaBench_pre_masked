
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
 int FUNC_1 (char*,char,scalar_t__) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 void* FUNC_4 (int) ;

void FUNC_5 (void) {
  char *VAR_16, *VAR_17;
  int VAR_18, VAR_19, VAR_20, VAR_21;
  static char VAR_22[256];
  struct lev_search_text_short_entry *VAR_23;
  struct lev_search_text_long_entry *VAR_24;

  if (VAR_0[VAR_10] > 0) {
    FUNC_3 (VAR_0[VAR_10], VAR_0[VAR_6]);
  }

  if (!VAR_0[VAR_10] || !FUNC_0(VAR_0[VAR_10]) || VAR_0[VAR_11]) {
    return;
  }

  VAR_16 = VAR_22;

  if (VAR_0[VAR_15] > 0) {
    VAR_16 += FUNC_1 (VAR_16, 'T', VAR_0[VAR_15]);
  }
  if (VAR_0[VAR_14] > 0) {
    VAR_16 += FUNC_1 (VAR_16, 'S', VAR_0[VAR_14]);
  }
  if (VAR_0[VAR_8] > 0) {
    VAR_16 += FUNC_1 (VAR_16, 'C', VAR_0[VAR_8]);
  }
  if (VAR_0[VAR_7] > 0) {
    VAR_16 += FUNC_1 (VAR_16, 'c', VAR_0[VAR_7]);
  }

  VAR_21 = VAR_16 - VAR_22;
  if (VAR_21 > 0) {
    *VAR_16 = ' ';
    VAR_21++;
  }

  VAR_18 = VAR_21 + VAR_1[VAR_12] + VAR_1[VAR_9] + 1;

  if (VAR_18 > 8192) {
    return;
  }

  if (VAR_18 < 256) {
    VAR_23 = FUNC_4 (21+VAR_18);
    VAR_23->type = VAR_3 + VAR_18;
    VAR_23->rate = 0;
    VAR_23->rate2 = VAR_0[VAR_13];
    VAR_23->obj_id = VAR_0[VAR_10];
    VAR_17 = VAR_23->text;
  } else {
    VAR_24 = FUNC_4 (23+VAR_18);
    VAR_24->type = VAR_2;
    VAR_24->rate = 0;
    VAR_24->rate2 = VAR_0[VAR_13];
    VAR_24->obj_id = VAR_0[VAR_10];
    VAR_24->text_len = VAR_18;
    VAR_17 = VAR_24->text;
  }

  if (VAR_21) {
    FUNC_2 (VAR_17, VAR_22, VAR_21);
    VAR_17 += VAR_21;
  }

  VAR_16 = VAR_4[VAR_12];
  for (VAR_19 = VAR_1[VAR_12]; VAR_19 > 0; VAR_19--) {
    VAR_20 = (unsigned char) *VAR_16++;
    if (VAR_20 < ' ') { VAR_20 = ' '; }
    *VAR_17++ = VAR_20;
  }

  *VAR_17++ = '\t';

  VAR_16 = VAR_4[VAR_9];
  for (VAR_19 = VAR_1[VAR_9]; VAR_19 > 0; VAR_19--) {
    VAR_20 = (unsigned char) *VAR_16++;
    if (VAR_20 < ' ') { VAR_20 = ' '; }
    *VAR_17++ = VAR_20;
  }

  *VAR_17++ = 0;

  VAR_5++;
}
