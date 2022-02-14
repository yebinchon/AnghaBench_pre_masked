
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct column_data {int cols; size_t* width; int rows; scalar_t__* len; TYPE_1__* list; } ;
struct TYPE_2__ {int nr; } ;


 void* FUNC_0 (struct column_data*,int,int) ;

__attribute__((used)) static void FUNC_1(struct column_data *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_0->cols; VAR_2++) {
  VAR_0->width[VAR_2] = FUNC_0(VAR_0, VAR_2, 0);
  for (VAR_3 = 0; VAR_3 < VAR_0->rows; VAR_3++) {
   VAR_1 = FUNC_0(VAR_0, VAR_2, VAR_3);
   if (VAR_1 < VAR_0->list->nr &&
       VAR_0->len[VAR_0->width[VAR_2]] < VAR_0->len[VAR_1])
    VAR_0->width[VAR_2] = VAR_1;
  }
 }
}
