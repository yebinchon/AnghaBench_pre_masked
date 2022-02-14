
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {long long item_id; int extra; } ;


 int VAR_0 ;
 long long VAR_1 ;
 struct item** VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct item*,long long) ;
 int VAR_4 ;
 int FUNC_2 (long long) ;
 scalar_t__ VAR_5 ;
 struct item* FUNC_3 (int) ;

__attribute__((used)) static struct item *FUNC_4 (long long VAR_6, int VAR_7) {
  int VAR_8, VAR_9;
  struct item *VAR_10;
  if (VAR_6 <= 0 || !FUNC_2 (VAR_6)) { return 0; }
  VAR_8 = VAR_6 % VAR_1;
  VAR_9 = 1 + (VAR_6 % (VAR_1 - 1));
  int VAR_11 = -1;
  while ((VAR_10 = VAR_2[VAR_8]) != 0) {
    if (VAR_10->item_id == VAR_6) {
      return VAR_10;
    }
    if (VAR_11 < 0 && (VAR_10->extra & VAR_0)) { VAR_11 = VAR_8; }
    VAR_8 += VAR_9;
    if (VAR_8 >= VAR_1) { VAR_8 -= VAR_1; }
  }
  if (!VAR_7 || VAR_5 >= VAR_3) { return 0; }
  if (VAR_11 >= 0) {
    VAR_10 = VAR_2[VAR_11];
    VAR_4--;
  } else {
    VAR_10 = FUNC_3 (sizeof (struct item));
    if (!VAR_10) { return VAR_10; }
    VAR_2[VAR_8] = VAR_10;
    VAR_5++;
  }
  FUNC_0 (FUNC_1 (VAR_10, VAR_6));
  return VAR_10;
}
