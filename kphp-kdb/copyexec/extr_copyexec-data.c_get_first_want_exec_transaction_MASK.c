
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ binlog_pos; struct TYPE_5__* hnext; } ;
typedef TYPE_1__ transaction_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static transaction_t *FUNC_1 (void) {
  int VAR_2;
  transaction_t *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
  for (VAR_2 = 0; VAR_2 <= VAR_1; VAR_2++) {
    transaction_t *VAR_5;
    for (VAR_5 = VAR_0[VAR_2]; VAR_5 != ((void*)0); VAR_5 = VAR_5->hnext) {
      if (FUNC_0 (VAR_5)) {
        if (!VAR_3 || VAR_3->binlog_pos > VAR_5->binlog_pos) {
          VAR_3 = VAR_5;
        }
      } else {
        if (!VAR_4 || VAR_4->binlog_pos < VAR_5->binlog_pos) {
          VAR_4 = VAR_5;
        }
      }
    }
  }
  return VAR_3 ? VAR_3 : VAR_4;
}
