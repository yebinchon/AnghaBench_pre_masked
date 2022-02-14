
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cache_uri {int dummy; } ;
struct TYPE_3__ {struct cache_uri** H; } ;
typedef TYPE_1__ cache_heap_t ;


 scalar_t__ FUNC_0 (struct cache_uri*) ;
 int FUNC_1 (struct cache_uri*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3 (const char *const VAR_0, cache_heap_t *VAR_1, int VAR_2) {
  int VAR_3;
  FUNC_2 ("%s:\n", VAR_0);
  for (VAR_3 = 1; VAR_3 <= VAR_2 && VAR_3 <= 10; VAR_3++) {
    struct cache_uri *VAR_4 = VAR_1->H[VAR_3];
    FUNC_2 ("%d: %s %.6lg\n", VAR_3, FUNC_1 (VAR_4), (double) FUNC_0 (VAR_4));
  }
}
