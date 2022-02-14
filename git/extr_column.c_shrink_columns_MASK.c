
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int width; scalar_t__ padding; int indent; } ;
struct column_data {size_t* width; int cols; int rows; TYPE_2__ opts; scalar_t__* len; TYPE_1__* list; } ;
struct TYPE_3__ {int nr; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (size_t*,int) ;
 int FUNC_2 (struct column_data*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct column_data *VAR_0)
{
 FUNC_1(VAR_0->width, VAR_0->cols);
 while (VAR_0->rows > 1) {
  int VAR_1, VAR_2, VAR_3, VAR_4;
  VAR_4 = VAR_0->rows;
  VAR_3 = VAR_0->cols;

  VAR_0->rows--;
  VAR_0->cols = FUNC_0(VAR_0->list->nr, VAR_0->rows);
  if (VAR_0->cols != VAR_3)
   FUNC_1(VAR_0->width, VAR_0->cols);
  FUNC_2(VAR_0);

  VAR_2 = FUNC_3(VAR_0->opts.indent);
  for (VAR_1 = 0; VAR_1 < VAR_0->cols; VAR_1++) {
   VAR_2 += VAR_0->len[VAR_0->width[VAR_1]];
   VAR_2 += VAR_0->opts.padding;
  }
  if (VAR_2 > VAR_0->opts.width) {
   VAR_0->rows = VAR_4;
   VAR_0->cols = VAR_3;
   break;
  }
 }
 FUNC_2(VAR_0);
}
