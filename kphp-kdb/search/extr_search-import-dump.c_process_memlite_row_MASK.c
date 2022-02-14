
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
 void* FUNC_1 (int) ;

void FUNC_2 (void) {
  char *VAR_12, *VAR_13;
  int VAR_14, VAR_15, VAR_16;
  struct lev_search_text_short_entry *VAR_17;
  struct lev_search_text_long_entry *VAR_18;

  if (!VAR_0[VAR_8] || !FUNC_0(VAR_0[VAR_8]) || VAR_0[VAR_10] == 4) {
    return;
  }

  VAR_14 = VAR_1[VAR_7] + VAR_1[VAR_9] + 1;

  if (VAR_14 > 1024) {
    return;
  }

  if (VAR_14 < 256) {
    VAR_17 = FUNC_1 (21+VAR_14);
    VAR_17->type = VAR_3 + VAR_14;
    VAR_17->rate = VAR_0[VAR_11];
    VAR_17->rate2 = VAR_0[VAR_6];
    VAR_17->obj_id = VAR_0[VAR_8];
    VAR_13 = VAR_17->text;
  } else {
    VAR_18 = FUNC_1 (23+VAR_14);
    VAR_18->type = VAR_2;
    VAR_18->rate = VAR_0[VAR_11];
    VAR_18->rate2 = VAR_0[VAR_6];
    VAR_18->obj_id = VAR_0[VAR_8];
    VAR_18->text_len = VAR_14;
    VAR_13 = VAR_18->text;
  }

  VAR_12 = VAR_4[VAR_7];
  for (VAR_15 = VAR_1[VAR_7]; VAR_15 > 0; VAR_15--) {
    VAR_16 = (unsigned char) *VAR_12++;
    if (VAR_16 < ' ') { VAR_16 = ' '; }
    *VAR_13++ = VAR_16;
  }

  *VAR_13++ = '\t';

  VAR_12 = VAR_4[VAR_9];
  for (VAR_15 = VAR_1[VAR_9]; VAR_15 > 0; VAR_15--) {
    VAR_16 = (unsigned char) *VAR_12++;
    if (VAR_16 < ' ') { VAR_16 = ' '; }
    *VAR_13++ = VAR_16;
  }

  *VAR_13++ = 0;

  VAR_5++;
}
