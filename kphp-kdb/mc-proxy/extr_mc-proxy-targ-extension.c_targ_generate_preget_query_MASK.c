
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tot_buckets; } ;


 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (char*,char*,scalar_t__,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2 (char *VAR_5, const char *VAR_6, int VAR_7, void *VAR_8, int VAR_9) {
  if (!VAR_4) {
    return 0;
  }
  if (VAR_4 > 0) {
    int VAR_10 = FUNC_1 (VAR_5, "set temp%d 0 0 %d\r\n", VAR_4, VAR_2);
    FUNC_0 (VAR_5 + VAR_10, VAR_3, VAR_2);
    return VAR_10 + VAR_2;
  } else if (VAR_4 < 0) {
    int VAR_11;
    int VAR_12 = 0;
    VAR_1[0] = 0x30303030;
    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) if (VAR_3[VAR_11] % VAR_0->tot_buckets == VAR_9) {
      VAR_1[++VAR_12] = VAR_3[VAR_11];
    }
    int VAR_13 = FUNC_1 (VAR_5, "set xtemp%d 0 0 %d\r\n", VAR_4, 4 * VAR_12 + 4);
    FUNC_0 (VAR_5 + VAR_13, VAR_1, 4 * VAR_12 + 4);
    return VAR_13 + 4 * VAR_12 + 4;
  } else {
    return 0;
  }
}
