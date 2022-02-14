
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {int h; int w; int x; int y; int win; scalar_t__ status; scalar_t__ start; scalar_t__ selectable; scalar_t__ multiple; scalar_t__ idx; scalar_t__ count; } ;
typedef TYPE_1__ GMenu ;


 int FUNC_0 (int *,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_2 (int) ;

GMenu *
FUNC_3 (WINDOW * VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
  GMenu *VAR_5 = FUNC_2 (sizeof (GMenu));

  FUNC_1 (VAR_5, 0, sizeof *VAR_5);
  VAR_5->count = 0;
  VAR_5->idx = 0;
  VAR_5->multiple = 0;
  VAR_5->selectable = 0;
  VAR_5->start = 0;
  VAR_5->status = 0;

  VAR_5->h = VAR_1;
  VAR_5->w = VAR_2;
  VAR_5->x = VAR_4;
  VAR_5->y = VAR_3;
  VAR_5->win = FUNC_0 (VAR_0, VAR_5->h, VAR_5->w, VAR_5->y, VAR_5->x);

  return VAR_5;
}
