
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_text_short_entry {int rate2; long long obj_id; char* text; } ;
struct lev_search_text_long_entry {int rate2; long long obj_id; int text_len; char* text; } ;
typedef int netbuffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 void* FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,long long,int,int) ;
 int FUNC_4 (long long) ;
 int FUNC_5 (int *,char*,int) ;

int FUNC_6 (netbuffer_t *VAR_2, int VAR_3, long long VAR_4, int VAR_5, int VAR_6) {
  char *VAR_7, *VAR_8;
  int VAR_9;

  if (VAR_3 >= 65536 || VAR_3 < 0 || !FUNC_4 (VAR_4)) {
    FUNC_0 (VAR_2, VAR_3);
    return 0;
  }

  if (VAR_3 < 256) {
    struct lev_search_text_short_entry *VAR_10 = FUNC_1 (VAR_1+VAR_3, 21+VAR_3, VAR_5);
    VAR_10->rate2 = VAR_6;
    VAR_10->obj_id = VAR_4;
    VAR_7 = VAR_10->text;
  } else {
    struct lev_search_text_long_entry *VAR_11 = FUNC_1 (VAR_0, 23+VAR_3, VAR_5);
    VAR_11->rate2 = VAR_6;
    VAR_11->obj_id = VAR_4;
    VAR_11->text_len = VAR_3;
    VAR_7 = VAR_11->text;
  }

  VAR_9 = FUNC_5 (VAR_2, VAR_7, VAR_3);
  FUNC_2 (VAR_9 == VAR_3);

  VAR_8 = VAR_7 + VAR_9;

  while (VAR_7 < VAR_8) {
    if (*VAR_7 == 0x1f) {
      do {
        VAR_7++;
      } while (VAR_7 < VAR_8 && (unsigned char) *VAR_7 >= 0x40);
    } else if ((unsigned char) *VAR_7 < ' ' && *VAR_7 != 9) {
      *VAR_7++ = ' ';
    } else {
      VAR_7++;
    }
  }
  *VAR_7 = 0;
  return FUNC_3 (VAR_7 - VAR_3, VAR_3, VAR_4, VAR_5, VAR_6);
}
