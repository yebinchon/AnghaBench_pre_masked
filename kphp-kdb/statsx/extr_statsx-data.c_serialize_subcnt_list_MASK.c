
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int valid_until; unsigned long long mask_subcnt; int* subcnt; } ;


 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static char *FUNC_2 (char *VAR_0, struct counter *VAR_1) {





  if (VAR_1->valid_until < 1296637200) {
    VAR_0 += FUNC_1 (VAR_0, "s:5:\"extra\";a:0:{}");
    return VAR_0;
  }
  int VAR_2 = FUNC_0(VAR_1->mask_subcnt);
  unsigned long long VAR_3 = 1;
  int VAR_4, VAR_5;
  VAR_0 += FUNC_1 (VAR_0, "s:5:\"extra\";a:%d:{", VAR_2);
  for (VAR_4 = 0, VAR_5 = 0; VAR_4 < 64; VAR_4++, VAR_3 <<= 1)
    if (VAR_3 & VAR_1->mask_subcnt) {
      VAR_0 += FUNC_1 (VAR_0, "i:%d;i:%d;", VAR_4, VAR_1->subcnt[VAR_5++]);
    }
  *VAR_0++ = '}';
  return VAR_0;
}
