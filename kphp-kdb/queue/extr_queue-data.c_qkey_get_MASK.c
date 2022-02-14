
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* x; TYPE_2__* y; } ;
typedef TYPE_1__ shmap_pair_string_vptr ;
struct TYPE_10__ {char* name; } ;
typedef TYPE_2__ qkey ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_4 () ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__) ;
 TYPE_1__* FUNC_6 (int *,TYPE_1__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qkey *FUNC_7 (char *VAR_4, int VAR_5) {
  shmap_pair_string_vptr VAR_6, *VAR_7;
  VAR_6.y = ((void*)0);
  VAR_6.x = VAR_4;

  qkey *VAR_8 = ((void*)0);
  if (VAR_5) {
    VAR_7 = FUNC_5 (&VAR_0, VAR_6);
    if (VAR_7->y == ((void*)0)) {
      VAR_2 -= FUNC_1();
      VAR_7->x = FUNC_2 (VAR_7->x);
      VAR_2 += FUNC_1();

      VAR_8 = VAR_7->y = FUNC_4();
      VAR_8->name = VAR_7->x;
    } else if (VAR_5 == 1) {
      FUNC_0 ("Keys collision" && 0);
    } else {
      VAR_8 = VAR_7->y;
    }

    if (VAR_3 > 2) {
      FUNC_3 (VAR_1, "Key created : [%s]\n", VAR_4);
    }

  } else {


    VAR_7 = FUNC_6 (&VAR_0, VAR_6);
    if (VAR_7 != ((void*)0)) {
      VAR_8 = VAR_7->y;
    }
  }

  return VAR_8;
}
