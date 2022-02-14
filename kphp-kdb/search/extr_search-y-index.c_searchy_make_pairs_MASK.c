
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int position; int word; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char const*,int,TYPE_1__*,int ,int ,int ,long long,int*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2 (const char *VAR_4, int VAR_5, int VAR_6, long long VAR_7, int *VAR_8) {
  int VAR_9, VAR_10 = FUNC_1 (VAR_4, VAR_5, VAR_1, VAR_0, VAR_3, VAR_2, VAR_7, VAR_8);
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
    FUNC_0 (VAR_6, VAR_1[VAR_9].word, VAR_1[VAR_9].position);
  }
}
