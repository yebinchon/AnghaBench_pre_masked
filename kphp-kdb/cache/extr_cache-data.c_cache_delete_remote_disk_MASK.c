
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_cache_change_disk_status {int packed_location; } ;
struct cache_uri {int * local_copy; struct cache_uri* hnext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cache_uri** VAR_3 ;
 long long VAR_4 ;
 struct cache_uri* FUNC_0 (struct cache_uri*) ;
 int FUNC_1 (struct lev_cache_change_disk_status*,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct cache_uri*,int *) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 struct cache_uri* VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static int FUNC_6 (struct lev_cache_change_disk_status *VAR_9) {
  FUNC_5 (2, "cache_delete_remote_disk: starting\n");
  FUNC_1 (VAR_9, 1);
  FUNC_2 (&VAR_6, VAR_9->packed_location);
  long long VAR_10 = 0;
  int VAR_11;
  struct cache_uri *VAR_12, *VAR_13, *VAR_14;
  const int VAR_15 = FUNC_4 (VAR_9->packed_location);
  if (VAR_5 & VAR_1) {
    for (VAR_11 = VAR_2 - 1; VAR_11 >= 0; VAR_11--) {
      if (VAR_5 & VAR_0) {
        if (VAR_11 != 0 && VAR_11 != VAR_15) {
          continue;
        }
      }
      VAR_13 = &VAR_7[VAR_11];
      for (VAR_12 = FUNC_0(VAR_13); VAR_12 != VAR_13; VAR_12 = VAR_14) {
        VAR_14 = FUNC_0(VAR_12);





        int VAR_16 = FUNC_3 (VAR_12, &VAR_6);
        if (VAR_16 > 0) {
          VAR_10 += VAR_16;
        }
      }
    }
  } else {
    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
      for (VAR_12 = VAR_3[VAR_11]; VAR_12 != ((void*)0); VAR_12 = VAR_12->hnext) {
        if (VAR_12->local_copy != ((void*)0)) {
          int VAR_17 = FUNC_3 (VAR_12, &VAR_6);
          if (VAR_17 > 0) {
            VAR_10 += VAR_17;
          }
        }
      }
    }
  }
  FUNC_5 (2, "cache_delete_remote_disk: r = %lld\n", VAR_10);
  return (VAR_10 < VAR_4) ? VAR_10 : VAR_4;
}
