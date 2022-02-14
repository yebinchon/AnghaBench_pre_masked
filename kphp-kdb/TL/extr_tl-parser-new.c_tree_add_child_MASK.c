
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int nc; int size; struct tree** c; } ;


 int FUNC_0 (struct tree**) ;
 int FUNC_1 (void**,struct tree**,int) ;
 int FUNC_2 (struct tree**,int) ;
 void** FUNC_3 (int) ;

void FUNC_4 (struct tree *VAR_0, struct tree *VAR_1) {
  if (VAR_0->nc == VAR_0->size) {
    void **VAR_2 = FUNC_3 (sizeof (void *) * (++VAR_0->size));
    FUNC_1 (VAR_2, VAR_0->c, sizeof (void *) * (VAR_0->size - 1));
    if (VAR_0->c) {
      FUNC_2 (VAR_0->c, sizeof (void *) * (VAR_0->size - 1));
    }
    VAR_0->c = (void *)VAR_2;
    FUNC_0 (VAR_0->c);
  }
  VAR_0->c[VAR_0->nc ++] = VAR_1;
}
