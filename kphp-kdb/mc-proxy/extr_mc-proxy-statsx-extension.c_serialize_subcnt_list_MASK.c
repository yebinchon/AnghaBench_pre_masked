
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statsx_gather_extra {int* subcnt; int valid_until; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static char *FUNC_2 (char *VAR_1, struct statsx_gather_extra *VAR_2) {





  int VAR_3 = FUNC_0 (VAR_2->subcnt, VAR_0);
  if (!VAR_3) {
    return VAR_1;
  }
  if (VAR_2->valid_until < 1296637200) {
    VAR_1 += FUNC_1 (VAR_1, "s:5:\"extra\";a:0:{}");
    return VAR_1;
  }
  int VAR_4;
  VAR_1 += FUNC_1 (VAR_1, "s:5:\"extra\";a:%d:{", VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if (VAR_2->subcnt[VAR_4]) {
      VAR_1 += FUNC_1 (VAR_1, "i:%d;i:%d;", VAR_4, VAR_2->subcnt[VAR_4]);
    }
  *VAR_1++ = '}';
  return VAR_1;
}
