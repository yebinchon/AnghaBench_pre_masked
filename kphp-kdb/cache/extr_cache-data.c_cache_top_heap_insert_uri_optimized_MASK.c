
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_uri {int * data; } ;
struct amortization_counter {scalar_t__ value; } ;
struct TYPE_2__ {int size; int max_size; struct cache_uri** H; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct amortization_counter*) ;
 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (struct cache_uri *VAR_3) {
  struct amortization_counter *VAR_4 = ((struct amortization_counter *) &VAR_3->data[VAR_0]);
  int VAR_5, VAR_6;
  if (FUNC_2(VAR_1->size < VAR_1->max_size)) {
    FUNC_1 (VAR_2, VAR_4);
    VAR_5 = ++(VAR_1->size);
    while (VAR_5 > 1) {
      VAR_6 = VAR_5 >> 1;
      if (FUNC_0(VAR_6) <= VAR_4->value) {
        break;
      }
      VAR_1->H[VAR_5] = VAR_1->H[VAR_6];
      VAR_5 = VAR_6;
    }
    VAR_1->H[VAR_5] = VAR_3;
  } else {
    if (FUNC_2(FUNC_0(1) < VAR_4->value)) {
      FUNC_1 (VAR_2, VAR_4);
      if (FUNC_0(1) < VAR_4->value) {
        VAR_5 = 1;
        while (1) {
          VAR_6 = VAR_5 << 1;
          if (VAR_6 > VAR_1->size) {
            break;
          }
          if (VAR_6 < VAR_1->size && FUNC_0(VAR_6) > FUNC_0(VAR_6+1)) {
            VAR_6++;
          }
          if (VAR_4->value <= FUNC_0(VAR_6)) {
            break;
          }
          VAR_1->H[VAR_5] = VAR_1->H[VAR_6];
          VAR_5 = VAR_6;
        }
        VAR_1->H[VAR_5] = VAR_3;
      }
    }
  }
}
