
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_text_short_entry {unsigned int obj_id; char* text; scalar_t__ rate2; void* rate; scalar_t__ type; } ;
struct lev_search_text_long_entry {unsigned int obj_id; int text_len; char* text; scalar_t__ rate2; void* rate; int type; } ;


 void** VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 void* FUNC_1 (int) ;

void FUNC_2 (void) {
  char *VAR_10, *VAR_11;
  int VAR_12, VAR_13, VAR_14;
  struct lev_search_text_short_entry *VAR_15;
  struct lev_search_text_long_entry *VAR_16;

  if (!VAR_0[VAR_7] || !FUNC_0(VAR_0[VAR_9])) {
    return;
  }

  VAR_12 = VAR_1[VAR_8];

  if (VAR_12 > 8192) {
    return;
  }

  if (VAR_12 < 256) {
    VAR_15 = FUNC_1 (21+VAR_12);
    VAR_15->type = VAR_3 + VAR_12;
    VAR_15->rate = VAR_0[VAR_6];
    VAR_15->rate2 = 0;
    VAR_15->obj_id = ((long long) VAR_0[VAR_7] << 32) + (unsigned) VAR_0[VAR_9];
    VAR_11 = VAR_15->text;
  } else {
    VAR_16 = FUNC_1 (23+VAR_12);
    VAR_16->type = VAR_2;
    VAR_16->rate = VAR_0[VAR_6];
    VAR_16->rate2 = 0;
    VAR_16->obj_id = ((long long) VAR_0[VAR_7] << 32) + (unsigned) VAR_0[VAR_9];
    VAR_16->text_len = VAR_12;
    VAR_11 = VAR_16->text;
  }

  VAR_10 = VAR_4[VAR_8];
  for (VAR_13 = VAR_1[VAR_8]; VAR_13 > 0; VAR_13--) {
    VAR_14 = (unsigned char) *VAR_10++;
    if (VAR_14 < ' ') { VAR_14 = ' '; }
    *VAR_11++ = VAR_14;
  }

  *VAR_11++ = 0;

  VAR_5++;
}
