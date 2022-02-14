
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ hash_t ;
struct TYPE_2__ {scalar_t__ hash; int order; int message_id; } ;


 int* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,scalar_t__,int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_2 (hash_t VAR_6, int **VAR_7) {
  int VAR_8 = -1, VAR_9 = VAR_3, VAR_10;
  while (VAR_9 - VAR_8 > 1) {
    VAR_10 = (VAR_8 + VAR_9) >> 1;
    if (VAR_2[VAR_10].hash <= VAR_6) VAR_8 = VAR_10; else VAR_9 = VAR_10;
  }

  if (VAR_8 < 0 || VAR_2[VAR_8].hash != VAR_6) return 0;

  VAR_10 = VAR_2[VAR_8].order;
  VAR_9 = VAR_2[VAR_8].message_id;
  if (VAR_5) {
    FUNC_1 (VAR_4, "lookup_list: found hash=%ld, message/offset=%d, count=%d\n", VAR_6, VAR_9, VAR_10);
  }
  FUNC_0 (VAR_10 > 0 && (VAR_10 <= VAR_1 || VAR_10 == 1));

  if (VAR_10 == 1) {
    if (VAR_7) *VAR_7 = &VAR_2[VAR_8].message_id;
    return VAR_10;
  }

  FUNC_0 (VAR_9 >= 0 && VAR_9 + VAR_10 <= VAR_1);
  if (VAR_7) *VAR_7 = VAR_0 + VAR_9;
  return VAR_10;
}
