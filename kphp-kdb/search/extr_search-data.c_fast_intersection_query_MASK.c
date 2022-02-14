
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cur_y; scalar_t__ cur; } ;
typedef TYPE_1__ iheap_en_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4 (void) {
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    if (!FUNC_1 (VAR_0+VAR_6, VAR_3[VAR_6], VAR_2[VAR_6], 0)) {
      return;
    }
  }
  if (VAR_4) {
    VAR_4 = VAR_5;
    if (VAR_4 > VAR_1) {
      VAR_4 = VAR_1;
    }
  }

  if (VAR_5 == 1) {
    iheap_en_t *VAR_7 = VAR_0;
    if (VAR_4) {
      while (VAR_7->cur) {
        if (VAR_7->cur_y & 1) {
          if (!FUNC_3 (VAR_7->cur, 1)) { break; }
        }
        FUNC_0 (VAR_7);
      }
    } else {
      while (VAR_7->cur) {
        if (!FUNC_3 (VAR_7->cur, VAR_7->cur_y & 1)) { break; }
        FUNC_0 (VAR_7);
      }
    }
  } else {
    FUNC_2 ();
  }
}
