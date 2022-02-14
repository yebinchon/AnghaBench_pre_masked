
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_uri {int * data; } ;
struct amortization_counter {int value; } ;
struct TYPE_2__ {int max_size; int size; struct cache_uri** H; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct cache_uri* FUNC_1 (struct cache_uri*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (struct cache_uri*) ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__* VAR_6 ;
 struct cache_uri* VAR_7 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*,int) ;
 struct cache_uri* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7 (int VAR_8) {
  static struct cache_uri *VAR_9 = ((void*)0);
  int VAR_10;
  FUNC_2 (VAR_3 & VAR_0);
  if (VAR_9 == ((void*)0)) {
    VAR_9 = FUNC_6 (FUNC_4 (""));
  }
  struct amortization_counter *VAR_11 = ((struct amortization_counter *) &VAR_9->data[VAR_5]);

  if (VAR_8 >= 1000000) {
    VAR_11->value = VAR_8 * 1e-6;
    VAR_8 = VAR_8 / 1000000 - 0;
  } else {
    VAR_11->value = VAR_8 ? VAR_8 : -1.0;
  }

  if (VAR_8 >= VAR_1) {
    VAR_8 = VAR_1 - 1;
  }

  for (VAR_10 = 1; VAR_10 <= VAR_6->max_size; VAR_10++) {
    VAR_6->H[VAR_10] = VAR_9;
  }
  VAR_6->size = VAR_6->max_size;
  struct cache_uri *VAR_12, *VAR_13;
  for (VAR_10 = VAR_1 - 1; VAR_10 >= VAR_8; VAR_10--) {
    VAR_13 = &VAR_7[VAR_10];
    for (VAR_12 = FUNC_1(VAR_13); VAR_12 != VAR_13; VAR_12 = FUNC_1(VAR_12)) {
      FUNC_3 (VAR_12);
    }
    if (VAR_4 <= VAR_2 && FUNC_0(1) > VAR_10) {
      FUNC_5 (2, "Skipping uncached buckets from %d to 0.\n", VAR_10 - 1);
      break;
    }
  }
}
