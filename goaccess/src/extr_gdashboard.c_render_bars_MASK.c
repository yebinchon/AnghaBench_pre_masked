
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_17__ {int attr; TYPE_4__* pair; } ;
struct TYPE_13__ {int max_hits; } ;
struct TYPE_16__ {TYPE_3__ meta; TYPE_2__* data; } ;
struct TYPE_15__ {int y; int w; int idx; int sel; int * win; } ;
struct TYPE_14__ {int idx; } ;
struct TYPE_12__ {TYPE_1__* metrics; } ;
struct TYPE_11__ {int hits; } ;
typedef TYPE_5__ GDashRender ;
typedef TYPE_6__ GDashModule ;
typedef TYPE_7__ GColors ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,char*,int,int,int,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ,int) ;
 TYPE_7__* FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int,char*,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void
FUNC_8 (GDashModule * VAR_2, GDashRender VAR_3, int *VAR_4)
{
  GColors *VAR_5 = FUNC_4 (VAR_0);
  WINDOW *VAR_6 = VAR_3.win;
  char *VAR_7;
  int VAR_8 = VAR_3.y, VAR_9 = VAR_3.w, VAR_10 = VAR_3.idx, VAR_11 = VAR_3.sel;

  VAR_7 = FUNC_3 (VAR_2->data[VAR_10].metrics->hits, VAR_2->meta.max_hits, *VAR_4);
  if (VAR_11)
    FUNC_1 (VAR_6, VAR_7, "%s", VAR_8, *VAR_4, VAR_9, VAR_1);
  else {
    FUNC_7 (VAR_6, VAR_5->attr | FUNC_0 (VAR_5->pair->idx));
    FUNC_5 (VAR_6, VAR_8, *VAR_4, "%s", VAR_7);
    FUNC_6 (VAR_6, VAR_5->attr | FUNC_0 (VAR_5->pair->idx));
  }
  FUNC_2 (VAR_7);
}
