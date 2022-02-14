
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {long long item_id; } ;
typedef TYPE_1__ item_t ;
typedef int get_item_f_mode ;



 long long VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;

 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static item_t *FUNC_4 (long long VAR_5, get_item_f_mode VAR_6) {
  int VAR_7, VAR_8;
  item_t *VAR_9, *VAR_10;
  if (VAR_5 <= 0) { return 0; }
  VAR_7 = VAR_5 % VAR_0;
  VAR_8 = 1 + (VAR_5 % (VAR_0 - 1));

  switch (VAR_6) {
    case 128:
      while ((VAR_10 = VAR_1[VAR_7]) != 0) {
        if (VAR_10->item_id == VAR_5) {
          return VAR_10;
        }
        VAR_7 += VAR_8;
        if (VAR_7 >= VAR_0) { VAR_7 -= VAR_0; }
      }
      return 0;
    case 129:
      while ((VAR_10 = VAR_1[VAR_7]) != 0) {
        if (FUNC_0(VAR_10)) {
          break;
        }
        VAR_7 += VAR_8;
        if (VAR_7 >= VAR_0) { VAR_7 -= VAR_0; }
      }
    if (VAR_4 >= VAR_2) { return 0; }
    VAR_9 = FUNC_3 (sizeof (item_t));
    if (!VAR_9) { return VAR_9; }
    if (VAR_10) {
      FUNC_2 (VAR_10, sizeof (item_t));
      VAR_3++;
    }
    else { VAR_4++; }
    VAR_1[VAR_7] = VAR_9;
    VAR_9->item_id = VAR_5;
    return VAR_9;
  }
  FUNC_1 (0);
  return 0;
}
