
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int * data; } ;
struct amortization_counter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct amortization_counter*) ;
 int FUNC_1 (int ,struct cache_uri*) ;
 int FUNC_2 (struct cache_uri*,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,char*,int *) ;

__attribute__((used)) static void FUNC_5 (struct cache_uri *VAR_7) {
  FUNC_4 (4, "cache_heap_insert_uri_from_given_disk (%s)\n", VAR_7->data + VAR_6);
  int VAR_8;
  const int VAR_9 = FUNC_2 (VAR_7, VAR_1, VAR_0, 0, ((void*)0));
  if (VAR_9 < 0) {
    return;
  }
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
    if (FUNC_3 (VAR_1 + VAR_8, &VAR_2)) {
      struct amortization_counter *VAR_10 = ((struct amortization_counter *) &VAR_7->data[VAR_3]);
      FUNC_0 (VAR_5, VAR_10);
      FUNC_1 (VAR_4, VAR_7);
      return;
    }
  }
}
