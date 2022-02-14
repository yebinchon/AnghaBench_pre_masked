
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long long binlog_pos; scalar_t__ status; struct TYPE_4__* hnext; } ;
typedef TYPE_1__ transaction_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1 (long long VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++) {
    transaction_t *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7, *VAR_8;
    for (VAR_7 = VAR_0[VAR_4]; VAR_7 != ((void*)0); VAR_7 = VAR_8) {
      VAR_8 = VAR_7->hnext;
      if (VAR_7->binlog_pos >= VAR_3 || VAR_7->status == VAR_2) {
        VAR_7->hnext = ((void*)0);
        if (VAR_5) {
          VAR_6->hnext = VAR_7;
          VAR_6 = VAR_7;
        } else {
          VAR_5 = VAR_6 = VAR_7;
        }
      } else {
        FUNC_0 (VAR_7);
      }
    }
    VAR_0[VAR_4] = VAR_5;
  }
}
