
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_item {long long item_id; int extra; } ;


 int VAR_0 ;
 struct index_item* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct index_item *FUNC_0 (long long VAR_3) {
  int VAR_4 = -1, VAR_5 = VAR_2, VAR_6;
  while (VAR_5 - VAR_4 > 1) {
    VAR_6 = ((VAR_4 + VAR_5) >> 1);
    if (VAR_1[VAR_6].item_id <= VAR_3) { VAR_4 = VAR_6; } else { VAR_5 = VAR_6; }
  }
  if (VAR_4 >= 0 && VAR_1[VAR_4].item_id == VAR_3 && !(VAR_1[VAR_4].extra & VAR_0)) {
    return VAR_1 + VAR_4;
  } else {
    return 0;
  }
}
