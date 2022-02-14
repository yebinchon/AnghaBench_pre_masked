
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_text_short_entry {int rate2; long long obj_id; char* text; } ;
struct lev_search_text_long_entry {int rate2; long long obj_id; int text_len; char* text; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (char*,int,long long,int,int) ;
 int FUNC_2 (long long) ;

int FUNC_3 (const char *VAR_2, int VAR_3, long long VAR_4, int VAR_5, int VAR_6) {
  char *VAR_7;
  int VAR_8;
  if (VAR_3 >= 65536 || VAR_3 < 0 || !FUNC_2 (VAR_4)) {
    return 0;
  }
  if (VAR_3 < 256) {
    struct lev_search_text_short_entry *VAR_9 = FUNC_0 (VAR_1+VAR_3, 21+VAR_3, VAR_5);
    VAR_9->rate2 = VAR_6;
    VAR_9->obj_id = VAR_4;
    VAR_7 = VAR_9->text;
  } else {
    struct lev_search_text_long_entry *VAR_10 = FUNC_0 (VAR_0, 23+VAR_3, VAR_5);
    VAR_10->rate2 = VAR_6;
    VAR_10->obj_id = VAR_4;
    VAR_10->text_len = VAR_3;
    VAR_7 = VAR_10->text;
  }
  VAR_8 = 0;
  while (VAR_8 < VAR_3) {
    if (VAR_2[VAR_8] == 0x1f) {
      do {
        *VAR_7++ = VAR_2[VAR_8++];
      } while (VAR_8 < VAR_3 && (unsigned char) VAR_2[VAR_8] >= 0x40);
    } else if ((unsigned char) VAR_2[VAR_8] < ' ' && VAR_2[VAR_8] != 9) {
      *VAR_7++ = ' ';
      VAR_8++;
    } else {
      *VAR_7++ = VAR_2[VAR_8++];
    }
  }
  *VAR_7 = 0;
  return FUNC_1 (VAR_7 - VAR_3, VAR_3, VAR_4, VAR_5, VAR_6);
}
