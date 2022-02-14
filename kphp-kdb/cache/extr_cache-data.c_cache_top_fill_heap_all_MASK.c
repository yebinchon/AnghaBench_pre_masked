
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_uri {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ max_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct cache_uri* FUNC_1 (struct cache_uri*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct cache_uri*) ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 struct cache_uri* VAR_7 ;
 struct cache_uri* VAR_8 ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5 (int VAR_9) {
  if (VAR_9 >= 1000000) {
    VAR_9 = VAR_9 / 1000000 - 0;
  }
  if (VAR_9 >= VAR_2) {
    VAR_9 = VAR_2 - 1;
  }

  FUNC_2 (VAR_4 & VAR_1);
  int VAR_10;
  struct cache_uri *VAR_11, *VAR_12;
  for (VAR_10 = VAR_2 - 1; VAR_10 >= VAR_9; VAR_10--) {
    VAR_12 = &VAR_7[VAR_10];
    for (VAR_11 = FUNC_1(VAR_12); VAR_11 != VAR_12; VAR_11 = FUNC_1(VAR_11)) {
      FUNC_3 (VAR_11);
    }
    VAR_12 = &VAR_8[VAR_10];
    for (VAR_11 = FUNC_1(VAR_12); VAR_11 != VAR_12; VAR_11 = FUNC_1(VAR_11)) {
      FUNC_3 (VAR_11);
    }
    if (VAR_5 <= VAR_3 && VAR_6->size == VAR_6->max_size && FUNC_0(1) > VAR_10) {
      FUNC_4 (2, "Skipping buckets from %d to 0.\n", VAR_10 - 1);
      break;
    }
  }

  if (VAR_4 & VAR_0) {
    while (VAR_10 >= 0) {
      VAR_12 = &VAR_7[VAR_10];
      for (VAR_11 = FUNC_1(VAR_12); VAR_11 != VAR_12; VAR_11 = FUNC_1(VAR_11)) {
        FUNC_3 (VAR_11);
      }
      VAR_10--;
    }
  }
}
