
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* indent; char const* nl; scalar_t__ padding; } ;
struct column_data {int* len; size_t* width; int rows; int cols; TYPE_3__* list; TYPE_1__ opts; int colopts; } ;
struct TYPE_6__ {int nr; TYPE_2__* items; } ;
struct TYPE_5__ {char* string; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct column_data*,int,int) ;
 int FUNC_2 (char*,char*,char*,char const*) ;

__attribute__((used)) static int FUNC_3(struct column_data *VAR_1, int VAR_2,
   const char *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_5);
 if (VAR_6 >= VAR_1->list->nr)
  return -1;

 VAR_7 = VAR_1->len[VAR_6];
 if (VAR_1->width && VAR_1->len[VAR_1->width[VAR_4]] < VAR_2) {





  VAR_7 += VAR_2 - VAR_1->len[VAR_1->width[VAR_4]];
  VAR_7 -= VAR_1->opts.padding;
 }

 if (FUNC_0(VAR_1->colopts) == VAR_0)
  VAR_8 = VAR_6 + VAR_1->rows >= VAR_1->list->nr;
 else
  VAR_8 = VAR_4 == VAR_1->cols - 1 || VAR_6 == VAR_1->list->nr - 1;

 FUNC_2("%s%s%s",
        VAR_4 == 0 ? VAR_1->opts.indent : "",
        VAR_1->list->items[VAR_6].string,
        VAR_8 ? VAR_1->opts.nl : VAR_3 + VAR_7);
 return 0;
}
