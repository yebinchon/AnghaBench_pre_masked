
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {size_t nc; int * c; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;

void FUNC_2 (struct tree *VAR_0) {
  FUNC_0 (VAR_0->nc);
  FUNC_1 (VAR_0->c[--VAR_0->nc]);
}
