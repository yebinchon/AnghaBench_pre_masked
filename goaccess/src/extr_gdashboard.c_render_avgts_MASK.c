
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
struct TYPE_16__ {scalar_t__ module; TYPE_3__* data; } ;
struct TYPE_15__ {int y; int w; int idx; int sel; int * win; } ;
struct TYPE_14__ {int idx; } ;
struct TYPE_13__ {scalar_t__ is_subitem; TYPE_2__* metrics; } ;
struct TYPE_11__ {char* sts; } ;
struct TYPE_12__ {TYPE_1__ avgts; } ;
typedef TYPE_5__ GDashRender ;
typedef TYPE_6__ GDashModule ;
typedef TYPE_7__ GColors ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,char*,int,int,int,int ) ;
 TYPE_7__* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *,int,int,char*,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void
FUNC_6 (GDashModule * VAR_5, GDashRender VAR_6, int *VAR_7)
{
  GColors *VAR_8 = FUNC_2 (VAR_0, VAR_5->module);
  WINDOW *VAR_9 = VAR_6.win;

  int VAR_10 = VAR_6.y, VAR_11 = VAR_6.w, VAR_12 = VAR_6.idx, VAR_13 = VAR_6.sel;
  char *VAR_14 = VAR_5->data[VAR_12].metrics->avgts.sts;

  if (VAR_5->module == VAR_3 && VAR_5->data[VAR_12].is_subitem)
    goto out;

  if (VAR_13) {

    FUNC_1 (VAR_9, VAR_14, "%9s", VAR_10, *VAR_7, VAR_11, VAR_4);
  } else {

    FUNC_5 (VAR_9, VAR_8->attr | FUNC_0 (VAR_8->pair->idx));
    FUNC_3 (VAR_9, VAR_10, *VAR_7, "%9s", VAR_14);
    FUNC_4 (VAR_9, VAR_8->attr | FUNC_0 (VAR_8->pair->idx));
  }

out:
  *VAR_7 += VAR_2 + VAR_1;
}
