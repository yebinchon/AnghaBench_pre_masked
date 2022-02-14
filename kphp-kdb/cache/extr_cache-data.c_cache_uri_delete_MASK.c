
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_cache_uri {int data; } ;
struct cache_uri {scalar_t__ last_access; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct cache_uri*) ;
 struct cache_uri* FUNC_2 (char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,char*,char*,...) ;

__attribute__((used)) static void FUNC_5 (struct lev_cache_uri *VAR_4, int VAR_5) {
  FUNC_0 (VAR_2 > 0);
  if (VAR_1 & VAR_0) {
    char VAR_6[256];
    FUNC_3 (VAR_6, VAR_4->data, VAR_5);
    VAR_6[VAR_5] = 0;
    struct cache_uri *VAR_7 = FUNC_2 (VAR_6, 0);
    if (VAR_7 == ((void*)0)) {
      FUNC_4 (2, "Delete not existing global uri - \"%s\".\n", VAR_6);
      return;
    }
    if (VAR_7->last_access >= VAR_2 - VAR_3 + 7200) {
      FUNC_4 (2, "Skip deleting global uri, since it isn't too old - \"%s\", log_last_ts: %d, last_access: %d\n", VAR_6, VAR_2, VAR_7->last_access);
      return;
    }
    FUNC_0 (VAR_7 == FUNC_2 (VAR_6, -1));
    FUNC_1 (VAR_7);
  }
}
