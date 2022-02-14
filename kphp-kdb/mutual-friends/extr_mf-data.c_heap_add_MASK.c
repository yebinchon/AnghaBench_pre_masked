
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trp_node ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;

void FUNC_1 (trp_node *VAR_4) {
  if (VAR_3 + 1 >= VAR_0) {
    VAR_1 |= (1 << 20);
  }

  if (VAR_4 != ((void*)0) && VAR_3 + 1 < VAR_0) {
    VAR_2[++VAR_3] = VAR_4;
    FUNC_0 (VAR_3);
  }
}
