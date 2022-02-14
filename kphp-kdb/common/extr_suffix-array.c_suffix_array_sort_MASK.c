
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* y; int n; int* p; } ;
typedef TYPE_1__ suffix_array_t ;
typedef int dyn_mark_t ;
struct TYPE_6__ {void* value; void* prev; void* head; } ;
typedef TYPE_2__ buckets_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int*,int const,int*,int) ;
 void* FUNC_3 (int) ;
 int* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5 (suffix_array_t *VAR_0) {
  unsigned char *VAR_1 = VAR_0->y;
  const int VAR_2 = VAR_0->n;
  int *VAR_3 = VAR_0->p;
  int VAR_4, VAR_5, VAR_6;
  dyn_mark_t VAR_7;
  FUNC_0 (VAR_7);
  int *VAR_8 = FUNC_4 (4 * 256);
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    VAR_8[VAR_1[VAR_4]]++;
  }
  VAR_6 = 0;
  for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
    if (VAR_8[VAR_4]) {
      VAR_8[VAR_4] = VAR_6++;
    }
  }

  buckets_t VAR_9;
  VAR_9.head = FUNC_3 (4 * (VAR_2 + 1));
  VAR_9.head++;
  VAR_9.prev = FUNC_3 (4 * VAR_2);
  VAR_9.value = FUNC_3 (4 * VAR_2);
  int *VAR_10 = FUNC_3 (4 * VAR_2), *VAR_11 = FUNC_3 (4 * VAR_2);
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    VAR_3[VAR_5] = VAR_5;
  }
  int VAR_12 = 1;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    VAR_10[VAR_4] = VAR_8[VAR_1[VAR_4]];
  }
  FUNC_2 (&VAR_9, VAR_3, VAR_2, VAR_10, 0);
  VAR_4 = VAR_6 - 1;
  while (VAR_4 < VAR_2 - 1) {
    FUNC_2 (&VAR_9, VAR_3, VAR_2, VAR_10, VAR_12);
    FUNC_2 (&VAR_9, VAR_3, VAR_2, VAR_10, 0);
    VAR_11[VAR_3[0]] = VAR_4 = 0;
    for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++) {
      int VAR_13 = VAR_3[VAR_5], VAR_14 = VAR_3[VAR_5-1];
      if (VAR_10[VAR_13] != VAR_10[VAR_14]) {
        VAR_11[VAR_13] = ++VAR_4;
        continue;
      }
      VAR_13 += VAR_12;
      VAR_14 += VAR_12;
      if ((VAR_13 < VAR_2 ? VAR_10[VAR_13] : -1) != (VAR_14 < VAR_2 ? VAR_10[VAR_14] : -1)) {
        VAR_4++;
      }
      VAR_11[VAR_3[VAR_5]] = VAR_4;
    }
    int *VAR_15 = VAR_10; VAR_10 = VAR_11; VAR_11 = VAR_15;
    VAR_12 <<= 1;
  }
  FUNC_1 (VAR_7);
}
