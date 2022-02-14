
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct collection {int num; int* A; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,int,...) ;

__attribute__((used)) static char *FUNC_2 (char *VAR_0, int VAR_1, struct collection *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  static char VAR_6[32];
  int VAR_7, VAR_8, VAR_9;

  FUNC_0 (VAR_2->num > 0);
  VAR_8 = VAR_2->num;

  if (VAR_8 == 1 && VAR_5 <= 1) {
    if (!VAR_4) {
      return VAR_0 + FUNC_1 (VAR_0, "i:%d;i:%d;", VAR_1, (int) VAR_2->A[0]);
    } else {
      VAR_7 = FUNC_1 (VAR_6, "%d_%d", (int) (VAR_2->A[0] >> 32), (int) VAR_2->A[0]);
      return VAR_0 + FUNC_1 (VAR_0, "i:%d;s:%d:\"%s\";", VAR_1, VAR_7, VAR_6);
    }
  }

  if (VAR_8 > VAR_3) {
    VAR_8 = VAR_3;
  }

  VAR_0 += FUNC_1 (VAR_0, "i:%d;a:%d:{i:0;i:%d;", VAR_1, VAR_8+1, VAR_5 ? VAR_5 : VAR_2->num);

  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
    if (!VAR_4) {
      VAR_0 += FUNC_1 (VAR_0, "i:%d;i:%d;", VAR_9+1, (int) VAR_2->A[VAR_9]);
    } else {
      VAR_7 = FUNC_1 (VAR_6, "%d_%d", (int) (VAR_2->A[VAR_9] >> 32), (int) VAR_2->A[VAR_9]);
      VAR_0 += FUNC_1 (VAR_0, "i:%d;s:%d:\"%s\";", VAR_9+1, VAR_7, VAR_6);
    }
  }

  *VAR_0++ = '}';
  return VAR_0;
}
