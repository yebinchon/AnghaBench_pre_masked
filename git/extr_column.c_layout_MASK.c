
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int indent; scalar_t__ padding; } ;
struct column_data {int* len; int cols; TYPE_2__* list; int rows; TYPE_1__ opts; } ;
struct TYPE_4__ {int nr; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct column_data *VAR_0, int *VAR_1)
{
 int VAR_2;

 *VAR_1 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->list->nr; VAR_2++)
  if (*VAR_1 < VAR_0->len[VAR_2])
   *VAR_1 = VAR_0->len[VAR_2];

 *VAR_1 += VAR_0->opts.padding;

 VAR_0->cols = (VAR_0->opts.width - FUNC_1(VAR_0->opts.indent)) / *VAR_1;
 if (VAR_0->cols == 0)
  VAR_0->cols = 1;

 VAR_0->rows = FUNC_0(VAR_0->list->nr, VAR_0->cols);
}
