
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
struct TYPE_17__ {int attr; TYPE_3__* pair; } ;
struct TYPE_14__ {scalar_t__ method_len; } ;
struct TYPE_16__ {TYPE_4__ meta; TYPE_2__* data; int module; } ;
struct TYPE_15__ {int y; int w; int idx; int sel; int * win; } ;
struct TYPE_13__ {int idx; } ;
struct TYPE_12__ {TYPE_1__* metrics; } ;
struct TYPE_11__ {char* method; } ;
typedef TYPE_5__ GDashRender ;
typedef TYPE_6__ GDashModule ;
typedef TYPE_7__ GColors ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char*,int,int,int,int ) ;
 TYPE_7__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int,int,char*,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void
FUNC_6 (GDashModule * VAR_3, GDashRender VAR_4, int *VAR_5)
{
  GColors *VAR_6 = FUNC_2 (VAR_0, VAR_3->module);
  WINDOW *VAR_7 = VAR_4.win;

  int VAR_8 = VAR_4.y, VAR_9 = VAR_4.w, VAR_10 = VAR_4.idx, VAR_11 = VAR_4.sel;
  char *VAR_12 = VAR_3->data[VAR_10].metrics->method;

  if (VAR_12 == ((void*)0) || *VAR_12 == '\0')
    return;

  if (VAR_11) {

    FUNC_1 (VAR_7, VAR_12, "%s", VAR_8, *VAR_5, VAR_9, VAR_2);
  } else {

    FUNC_5 (VAR_7, VAR_6->attr | FUNC_0 (VAR_6->pair->idx));
    FUNC_3 (VAR_7, VAR_8, *VAR_5, "%s", VAR_12);
    FUNC_4 (VAR_7, VAR_6->attr | FUNC_0 (VAR_6->pair->idx));
  }

  *VAR_5 += VAR_3->meta.method_len + VAR_1;
}
