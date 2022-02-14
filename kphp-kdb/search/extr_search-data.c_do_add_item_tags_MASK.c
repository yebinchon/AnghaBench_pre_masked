
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_item_add_tags {long long obj_id; char* text; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,long long) ;
 struct lev_search_item_add_tags* FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (long long) ;

int FUNC_4 (const char *const VAR_1, int VAR_2, long long VAR_3) {
  char *VAR_4;
  int VAR_5;
  if (VAR_2 >= 256 || VAR_2 < 0 || !FUNC_3 (VAR_3)) {
    return 0;
  }
  FUNC_2 (VAR_2 < 256);
  struct lev_search_item_add_tags *VAR_6 = FUNC_1 (VAR_0 + VAR_2, 13+VAR_2, 0);
  VAR_6->obj_id = VAR_3;
  VAR_4 = VAR_6->text;
  VAR_5 = 0;
  while (VAR_5 < VAR_2) {
    if (VAR_1[VAR_5] == 0x1f) {
      do {
        *VAR_4++ = VAR_1[VAR_5++];
      } while (VAR_5 < VAR_2 && (unsigned char) VAR_1[VAR_5] >= 0x40);
    } else if ((unsigned char) VAR_1[VAR_5] < ' ' && VAR_1[VAR_5] != 9) {
      *VAR_4++ = ' ';
      VAR_5++;
    } else {
      *VAR_4++ = VAR_1[VAR_5++];
    }
  }
  *VAR_4 = 0;
  return FUNC_0 (VAR_4 - VAR_2, VAR_2, VAR_3);
}
