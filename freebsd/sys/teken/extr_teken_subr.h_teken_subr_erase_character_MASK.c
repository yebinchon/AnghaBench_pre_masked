
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_9__ {scalar_t__ tp_col; } ;
struct TYPE_12__ {int t_curattr; TYPE_2__ t_cursor; TYPE_1__ t_winsize; } ;
typedef TYPE_4__ teken_t ;
struct TYPE_11__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_13__ {TYPE_3__ tr_end; TYPE_2__ tr_begin; } ;
typedef TYPE_5__ teken_rect_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__ const*,TYPE_5__*,int ,int *) ;

__attribute__((used)) static void
FUNC_1(const teken_t *VAR_1, unsigned int VAR_2)
{
 teken_rect_t VAR_3;

 VAR_3.tr_begin = VAR_1->t_cursor;
 VAR_3.tr_end.tp_row = VAR_1->t_cursor.tp_row + 1;

 if (VAR_1->t_cursor.tp_col + VAR_2 >= VAR_1->t_winsize.tp_col)
  VAR_3.tr_end.tp_col = VAR_1->t_winsize.tp_col;
 else
  VAR_3.tr_end.tp_col = VAR_1->t_cursor.tp_col + VAR_2;

 FUNC_0(VAR_1, &VAR_3, VAR_0, &VAR_1->t_curattr);
}
