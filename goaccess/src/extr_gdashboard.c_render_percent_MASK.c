
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_8__ {int attr; TYPE_1__* pair; } ;
struct TYPE_7__ {int y; int w; int sel; int * win; } ;
struct TYPE_6__ {int idx; } ;
typedef TYPE_2__ GDashRender ;
typedef TYPE_3__ GColors ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,char*,int,int,int,int ) ;
 char* FUNC_2 (float,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int,int,char*,int,float) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void
FUNC_7 (GDashRender VAR_1, GColors * VAR_2, float VAR_3, int VAR_4, int VAR_5)
{
  WINDOW *VAR_6 = VAR_1.win;
  char *VAR_7;
  int VAR_8 = VAR_1.y, VAR_9 = VAR_1.w, VAR_10 = VAR_1.sel;

  if (VAR_10) {

    VAR_7 = FUNC_2 (VAR_3, VAR_4);
    FUNC_1 (VAR_6, VAR_7, "%s%%", VAR_8, VAR_5, VAR_9, VAR_0);
    FUNC_3 (VAR_7);
  } else {

    FUNC_6 (VAR_6, VAR_2->attr | FUNC_0 (VAR_2->pair->idx));
    FUNC_4 (VAR_6, VAR_8, VAR_5, "%*.2f%%", VAR_4, VAR_3);
    FUNC_5 (VAR_6, VAR_2->attr | FUNC_0 (VAR_2->pair->idx));
  }
}
