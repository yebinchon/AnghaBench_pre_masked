
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_15__ {int attr; TYPE_3__* pair; } ;
struct TYPE_14__ {TYPE_2__* data; int module; } ;
struct TYPE_13__ {int y; int w; int idx; int sel; int * win; } ;
struct TYPE_12__ {int idx; } ;
struct TYPE_11__ {TYPE_1__* metrics; } ;
struct TYPE_10__ {char* protocol; } ;
typedef TYPE_4__ GDashRender ;
typedef TYPE_5__ GDashModule ;
typedef TYPE_6__ GColors ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,char*,int,int,int,int ) ;
 TYPE_6__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int,int,char*,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void
FUNC_6 (GDashModule * VAR_4, GDashRender VAR_5, int *VAR_6)
{
  GColors *VAR_7 = FUNC_2 (VAR_0, VAR_4->module);
  WINDOW *VAR_8 = VAR_5.win;

  int VAR_9 = VAR_5.y, VAR_10 = VAR_5.w, VAR_11 = VAR_5.idx, VAR_12 = VAR_5.sel;
  char *VAR_13 = VAR_4->data[VAR_11].metrics->protocol;

  if (VAR_13 == ((void*)0) || *VAR_13 == '\0')
    return;

  if (VAR_12) {

    FUNC_1 (VAR_8, VAR_13, "%s", VAR_9, *VAR_6, VAR_10, VAR_3);
  } else {

    FUNC_5 (VAR_8, VAR_7->attr | FUNC_0 (VAR_7->pair->idx));
    FUNC_3 (VAR_8, VAR_9, *VAR_6, "%s", VAR_13);
    FUNC_4 (VAR_8, VAR_7->attr | FUNC_0 (VAR_7->pair->idx));
  }

  *VAR_6 += VAR_2 - 1 + VAR_1;
}
