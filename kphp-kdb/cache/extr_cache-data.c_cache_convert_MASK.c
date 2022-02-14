
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef union cache_packed_local_copy_location {int dummy; } cache_packed_local_copy_location ;
struct cache_uri {int dummy; } ;
struct TYPE_5__ {int flags; int location; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,union cache_packed_local_copy_location*) ;
 int FUNC_1 (struct cache_uri*,TYPE_1__*,int ,int ,int *) ;
 int FUNC_2 (struct cache_uri*,TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static int FUNC_7 (struct cache_uri *VAR_3, char *VAR_4, int VAR_5) {
  int VAR_6, VAR_7 = FUNC_1 (VAR_3, VAR_2, VAR_1, 0, ((void*)0));
  if (VAR_7 < 0) {
    FUNC_6 (1, "cache_convert: cache_local_copy_unpack failed.\n");
    return -1;
  }
  int VAR_8 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
    union cache_packed_local_copy_location VAR_9;
    int VAR_10 = FUNC_0 (VAR_2 + VAR_6, &VAR_9);
    FUNC_6 (4, "cache_local_copy_get_flags returns %d.\n", VAR_10);
    if (VAR_10 != 1) {
      continue;
    }
    if (VAR_8 != VAR_6) {
      VAR_2[VAR_8] = VAR_2[VAR_6];
    }
    VAR_8++;
  }
  if (!VAR_8) {
    return 0;
  }
  VAR_6 = FUNC_3 () % VAR_8;
  if (VAR_2[VAR_6].flags & VAR_0) {
    FUNC_2 (VAR_3, VAR_2 + VAR_6);
  }
  int VAR_11 = FUNC_5 (VAR_2[VAR_6].location);
  if (VAR_5 < VAR_11 + 1) {
    FUNC_6 (1, "cache_convert: output buffer is too small (%d bytes).\n", VAR_5);
    return -1;
  }
  FUNC_4 (VAR_4, VAR_2[VAR_6].location);
  return 1;
}
