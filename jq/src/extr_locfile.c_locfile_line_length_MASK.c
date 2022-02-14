
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locfile {int nlines; int* linemap; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct locfile* VAR_0, int VAR_1) {
  FUNC_0(VAR_1 < VAR_0->nlines);
  return VAR_0->linemap[VAR_1+1] - VAR_0->linemap[VAR_1] -1;
}
