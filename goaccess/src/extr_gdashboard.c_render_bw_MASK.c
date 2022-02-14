
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_19__ {int attr; TYPE_4__* pair; } ;
struct TYPE_16__ {scalar_t__ bw_len; } ;
struct TYPE_18__ {scalar_t__ module; TYPE_5__ meta; TYPE_3__* data; } ;
struct TYPE_17__ {int y; int w; int idx; int sel; int * win; } ;
struct TYPE_15__ {int idx; } ;
struct TYPE_14__ {scalar_t__ is_subitem; TYPE_2__* metrics; } ;
struct TYPE_12__ {char* sbw; } ;
struct TYPE_13__ {TYPE_1__ bw; } ;
typedef TYPE_6__ GDashRender ;
typedef TYPE_7__ GDashModule ;
typedef TYPE_8__ GColors ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,char*,int,int,int,int ) ;
 int FUNC_2 (char*) ;
 TYPE_8__* FUNC_3 (int ,scalar_t__) ;
 char* FUNC_4 (scalar_t__,char) ;
 int FUNC_5 (int *,int,int,char*,scalar_t__,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void
FUNC_8 (GDashModule * VAR_4, GDashRender VAR_5, int *VAR_6)
{
  GColors *VAR_7 = FUNC_3 (VAR_0, VAR_4->module);
  WINDOW *VAR_8 = VAR_5.win;

  int VAR_9 = VAR_5.y, VAR_10 = VAR_5.w, VAR_11 = VAR_5.idx, VAR_12 = VAR_5.sel;
  char *VAR_13 = VAR_4->data[VAR_11].metrics->bw.sbw;

  if (VAR_4->module == VAR_2 && VAR_4->data[VAR_11].is_subitem)
    goto out;

  if (VAR_12) {
    char *VAR_14 = FUNC_4 (VAR_4->meta.bw_len, 's');

    FUNC_1 (VAR_8, VAR_13, VAR_14, VAR_9, *VAR_6, VAR_10, VAR_3);
    FUNC_2 (VAR_14);
  } else {

    FUNC_7 (VAR_8, VAR_7->attr | FUNC_0 (VAR_7->pair->idx));
    FUNC_5 (VAR_8, VAR_9, *VAR_6, "%*s", VAR_4->meta.bw_len, VAR_13);
    FUNC_6 (VAR_8, VAR_7->attr | FUNC_0 (VAR_7->pair->idx));
  }

out:
  *VAR_6 += VAR_4->meta.bw_len + VAR_1;
}
