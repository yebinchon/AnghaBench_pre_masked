
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int dummy; } ;
typedef int cache_disk_filter_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct cache_uri*,int *,int ,int ,int*) ;
 int FUNC_2 (struct cache_uri*,int *) ;
 int FUNC_3 (struct cache_uri*,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (struct cache_uri*,int *,int,int) ;
 int FUNC_6 (int,char*,...) ;

int FUNC_7 (struct cache_uri *VAR_2, cache_disk_filter_t *VAR_3) {
  FUNC_6 (4, "cache_uri_delete_remote_disk: (U:%p) starting\n", VAR_2);
  int VAR_4, VAR_5, VAR_6, VAR_7 = 0;
  VAR_5 = FUNC_1 (VAR_2, VAR_1, VAR_0, 0, &VAR_6);
  if (VAR_5 < 0) {
    return -1;
  }
  for (VAR_4 = 0; VAR_4 < VAR_5; ) {
    if (FUNC_4 (VAR_1 + VAR_4, VAR_3)) {
      VAR_7++;




      FUNC_3 (VAR_2, VAR_1 + VAR_4);

      VAR_5--;
      if (VAR_4 != VAR_5) {
        FUNC_0 (&VAR_1[VAR_4], &VAR_1[VAR_5]);
      }
    } else {
      VAR_4++;
    }
  }
  if (VAR_7) {
    FUNC_5 (VAR_2, VAR_1, VAR_5, VAR_6);
  }
  FUNC_6 (4, "cache_uri_delete_remote_disk: ending\n");
  return VAR_7;
}
