
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int visitors_perc_len; scalar_t__ max_visitors; } ;
struct TYPE_13__ {TYPE_3__* data; int module; TYPE_1__ meta; } ;
struct TYPE_12__ {int idx; } ;
struct TYPE_11__ {TYPE_2__* metrics; scalar_t__ is_subitem; } ;
struct TYPE_10__ {scalar_t__ visitors; int visitors_perc; } ;
typedef TYPE_4__ GDashRender ;
typedef TYPE_5__ GDashModule ;
typedef int GColors ;
typedef int GColorItem ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__,int *,int ,int,int) ;

__attribute__((used)) static void
FUNC_2 (GDashModule * VAR_4, GDashRender VAR_5, int *VAR_6)
{
  GColorItem VAR_7 = VAR_0;
  GColors *VAR_8;
  int VAR_9 = VAR_4->meta.visitors_perc_len + 3, VAR_10 = VAR_5.idx;

  if (VAR_4->module == VAR_3 && VAR_4->data[VAR_10].is_subitem)
    goto out;

  if (VAR_4->meta.max_visitors == VAR_4->data[VAR_10].metrics->visitors)
    VAR_7 = VAR_1;

  VAR_8 = FUNC_0 (VAR_7, VAR_4->module);
  FUNC_1 (VAR_5, VAR_8, VAR_4->data[VAR_10].metrics->visitors_perc, VAR_9, *VAR_6);

out:
  *VAR_6 += VAR_9 + 1 + VAR_2;
}
