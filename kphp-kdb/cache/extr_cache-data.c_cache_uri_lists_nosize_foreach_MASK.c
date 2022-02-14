
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int size; } ;
typedef enum cache_sorted_order { ____Placeholder_cache_sorted_order } cache_sorted_order ;


 int VAR_0 ;
 int VAR_1 ;
 struct cache_uri* FUNC_0 (struct cache_uri*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2 (void (*VAR_5)(struct cache_uri *), enum cache_sorted_order VAR_6, struct cache_uri *VAR_7) {
  FUNC_1 (VAR_2 & VAR_0);
  int VAR_8;
  struct cache_uri *VAR_9, *VAR_10;
  if (VAR_6 == VAR_4) {
    for (VAR_8 = VAR_1 - 1; VAR_8 >= 0; VAR_8--) {
      VAR_10 = &VAR_7[VAR_8];
      for (VAR_9 = FUNC_0(VAR_10); VAR_9 != VAR_10; VAR_9 = FUNC_0(VAR_9)) {
        if (VAR_9->size == -1) {
          VAR_5 (VAR_9);
        }
      }
    }
  } else {
    FUNC_1 (VAR_6 == VAR_3);
    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
      VAR_10 = &VAR_7[VAR_8];
      for (VAR_9 = FUNC_0(VAR_10); VAR_9 != VAR_10; VAR_9 = FUNC_0(VAR_9)) {
        if (VAR_9->size == -1) {
          VAR_5 (VAR_9);
        }
      }
    }
  }
}
