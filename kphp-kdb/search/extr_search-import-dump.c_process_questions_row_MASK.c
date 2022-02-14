
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_text_short_entry {unsigned int obj_id; char* text; scalar_t__ rate2; scalar_t__ rate; scalar_t__ type; } ;
struct lev_search_text_long_entry {unsigned int obj_id; int text_len; char* text; scalar_t__ rate2; scalar_t__ rate; int type; } ;


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
 void* FUNC_3 (int) ;

void FUNC_4 (void) {
  char *VAR_12, *VAR_13;
  int VAR_14, VAR_15, VAR_16, VAR_17;
  static char VAR_18[256];
  struct lev_search_text_short_entry *VAR_19;
  struct lev_search_text_long_entry *VAR_20;

  if (!VAR_0[VAR_7] || !FUNC_0(VAR_0[VAR_10])) {
    return;
  }

  VAR_12 = VAR_18;

  if (VAR_0[VAR_11] > 0) {
    VAR_12 += FUNC_1 (VAR_12, 'T', VAR_0[VAR_11]);
  }

  VAR_17 = VAR_12 - VAR_18;
  if (VAR_17 > 0) {
    *VAR_12 = ' ';
    VAR_17++;
  }

  VAR_14 = VAR_17 + VAR_1[VAR_8];

  if (VAR_14 > 8192) {
    return;
  }

  if (VAR_14 < 256) {
    VAR_19 = FUNC_3 (21+VAR_14);
    VAR_19->type = VAR_3 + VAR_14;
    VAR_19->rate = VAR_0[VAR_6];
    VAR_19->rate2 = VAR_0[VAR_9];
    VAR_19->obj_id = ((long long) VAR_0[VAR_7] << 32) + (unsigned) VAR_0[VAR_10];
    VAR_13 = VAR_19->text;
  } else {
    VAR_20 = FUNC_3 (23+VAR_14);
    VAR_20->type = VAR_2;
    VAR_20->rate = VAR_0[VAR_6];
    VAR_20->rate2 = VAR_0[VAR_9];
    VAR_20->obj_id = ((long long) VAR_0[VAR_7] << 32) + (unsigned) VAR_0[VAR_10];
    VAR_20->text_len = VAR_14;
    VAR_13 = VAR_20->text;
  }

  if (VAR_17) {
    FUNC_2 (VAR_13, VAR_18, VAR_17);
    VAR_13 += VAR_17;
  }

  VAR_12 = VAR_4[VAR_8];
  for (VAR_15 = VAR_1[VAR_8]; VAR_15 > 0; VAR_15--) {
    VAR_16 = (unsigned char) *VAR_12++;
    if (VAR_16 < ' ') { VAR_16 = ' '; }
    *VAR_13++ = VAR_16;
  }

  *VAR_13++ = 0;

  VAR_5++;
}
