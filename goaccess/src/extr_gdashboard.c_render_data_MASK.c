
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_18__ {int attr; TYPE_3__* pair; } ;
struct TYPE_15__ {int data_len; } ;
struct TYPE_17__ {scalar_t__ module; TYPE_4__ meta; TYPE_2__* data; } ;
struct TYPE_16__ {int y; int w; int idx; int sel; int * win; } ;
struct TYPE_14__ {int idx; } ;
struct TYPE_13__ {scalar_t__ is_subitem; TYPE_1__* metrics; } ;
struct TYPE_12__ {int data; } ;
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
 int FUNC_2 (char*) ;
 TYPE_7__* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *,int,int,char*,char*) ;
 int FUNC_5 (int *,TYPE_5__,char*,int) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static void
FUNC_11 (GDashModule * VAR_5, GDashRender VAR_6, int *VAR_7)
{
  GColors *VAR_8 = FUNC_3 (VAR_0, VAR_5->module);
  WINDOW *VAR_9 = VAR_6.win;

  char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
  int VAR_13 = VAR_6.y, VAR_14 = VAR_6.w, VAR_15 = VAR_6.idx, VAR_16 = VAR_6.sel;
  int VAR_17 = 0;

  VAR_11 = FUNC_8 (VAR_5->data[VAR_15].metrics->data, 0, VAR_14 - *VAR_7);
  if (VAR_5->module == VAR_3) {
    VAR_10 = FUNC_6 (VAR_11);
    VAR_17 = FUNC_7 (VAR_10);
  }

  if (VAR_16 && VAR_5->module == VAR_2 && VAR_5->data[VAR_15].is_subitem) {
    FUNC_5 (VAR_9, VAR_6, VAR_11, *VAR_7);
  } else if (VAR_16) {
    VAR_12 = VAR_5->module == VAR_3 ? VAR_10 : VAR_11;
    FUNC_1 (VAR_9, VAR_12, "%s", VAR_13, *VAR_7, VAR_14, VAR_4);
  } else {
    FUNC_10 (VAR_9, VAR_8->attr | FUNC_0 (VAR_8->pair->idx));
    FUNC_4 (VAR_9, VAR_13, *VAR_7, "%s", VAR_5->module == VAR_3 ? VAR_10 : VAR_11);
    FUNC_9 (VAR_9, VAR_8->attr | FUNC_0 (VAR_8->pair->idx));
  }

  *VAR_7 += VAR_5->module == VAR_3 ? VAR_17 : VAR_5->meta.data_len;
  *VAR_7 += VAR_1;
  FUNC_2 (VAR_11);
  FUNC_2 (VAR_10);
}
