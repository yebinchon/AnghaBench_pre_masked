
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statsx_gather_extra {int valid_until; int * subcnt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static int *FUNC_1 (int *VAR_1, struct statsx_gather_extra *VAR_2) {





  if (VAR_2->valid_until < 1296637200) {
    *(VAR_1++) = 0;
    return VAR_1;
  }
  if (FUNC_0 (VAR_2->subcnt, VAR_0)) {
    *(VAR_1++) = 0;
    return VAR_1;
  }
  *(VAR_1++) = VAR_0;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    *(VAR_1++) = VAR_2->subcnt[VAR_3];
  }
  return VAR_1;
}
