
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {long long item_id; } ;
typedef TYPE_1__ item_t ;
typedef int get_item_f_mode ;



 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;

 int FUNC_1 (long long) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static item_t *FUNC_5 (long long VAR_6, get_item_f_mode VAR_7) {
  int VAR_8, VAR_9;
  item_t *VAR_10, *VAR_11;
  if (VAR_6 <= 0) { return 0; }
  if (VAR_3) {
    VAR_9 = FUNC_1(VAR_6);
    VAR_8 = VAR_9 % VAR_0;
    VAR_9 = 1 + (VAR_9 % (VAR_0 - 1));
  } else {
    VAR_8 = VAR_6 % VAR_0;
    VAR_9 = 1 + (VAR_6 % (VAR_0 - 1));
  }

  switch (VAR_7) {
    case 128:
      while ((VAR_11 = VAR_1[VAR_8]) != 0) {
        if (VAR_11->item_id == VAR_6) {
          return VAR_11;
        }
        VAR_8 += VAR_9;
        if (VAR_8 >= VAR_0) { VAR_8 -= VAR_0; }
      }
      return 0;
    case 129:
      while ((VAR_11 = VAR_1[VAR_8]) != 0) {
        if (FUNC_0(VAR_11)) {
          break;
        }
        VAR_8 += VAR_9;
        if (VAR_8 >= VAR_0) { VAR_8 -= VAR_0; }
      }
    if (VAR_5 >= VAR_2) { return 0; }
    VAR_10 = FUNC_4 (sizeof (item_t));
    if (!VAR_10) { return VAR_10; }
    if (VAR_11) {
      FUNC_3 (VAR_11, sizeof (item_t));
      VAR_4++;
    }
    else { VAR_5++; }
    VAR_1[VAR_8] = VAR_10;
    VAR_10->item_id = VAR_6;
    return VAR_10;
  }
  FUNC_2 (0);
  return 0;
}
