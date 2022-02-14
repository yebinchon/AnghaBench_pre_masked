
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int index_header ;
struct TYPE_2__ {int priv_mask; int user_id; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;

void FUNC_4 (index_header *VAR_4) {
  FUNC_1 ();
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) if (VAR_1[VAR_5] && VAR_1[VAR_5]->priv_mask != 1) {
    FUNC_3 (VAR_1[VAR_5]->user_id * VAR_3 + VAR_2);
    FUNC_3 (VAR_1[VAR_5]->priv_mask);
    FUNC_0 (VAR_1[VAR_5]->priv_mask & 1);
  }
  FUNC_2 ();
}
