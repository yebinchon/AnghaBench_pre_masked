
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__** k; int * r; } ;
typedef TYPE_1__ qkey_group ;
struct TYPE_6__ {int subscribed; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,int,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 TYPE_3__* FUNC_5 (char*,int,int,int,int,int *) ;

qkey_group *FUNC_6 (char *VAR_3, int VAR_4, int VAR_5, int *VAR_6, int VAR_7, int VAR_8) {
  int VAR_9 = FUNC_4 (VAR_3);
  if (VAR_9 % VAR_1) {
    FUNC_0 (VAR_2, 1, "Failed : 2. kn %% KEY_LEN : %d %% %d\n", VAR_9, VAR_1);
    return ((void*)0);
  }
  VAR_9 /= VAR_1;
  if (VAR_9 != VAR_7 || VAR_9 <= 0) {
    FUNC_0 (VAR_2, 1, "Failed : 2. kn != req_ts_n || kn <= 0 : %d != %d || %d <= 0\n", VAR_9, VAR_7, VAR_9);
    return ((void*)0);
  }

  int VAR_10, VAR_11;
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
    for (VAR_11 = VAR_10 + 1; VAR_11 < VAR_9; VAR_11++) {
      if (!FUNC_2 (VAR_3 + VAR_1 * VAR_10, VAR_3 + VAR_1 * VAR_11, VAR_1)) {
        FUNC_0 (VAR_2, 1, "Failed : 2. Key %d == key %d\n", VAR_10, VAR_11);
      }
    }
  }

  qkey_group *VAR_12 = FUNC_3 (VAR_9);
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
    VAR_12->k[VAR_10] = FUNC_5 (VAR_3 + VAR_1 * VAR_10, VAR_4, VAR_5, VAR_6[VAR_10], VAR_8, &VAR_12->r[VAR_10]);
    if (VAR_12->k[VAR_10] != ((void*)0) && !VAR_12->k[VAR_10]->lock) {
      VAR_12->k[VAR_10]->subscribed = FUNC_1 (VAR_0);
    }
  }

  return VAR_12;
}
