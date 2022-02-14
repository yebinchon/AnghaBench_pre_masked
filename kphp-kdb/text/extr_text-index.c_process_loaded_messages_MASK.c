
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ user_id; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 double FUNC_1 (int ) ;
 double VAR_6 ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4 (void) {
  int VAR_9;
  char *VAR_10;

  double VAR_11 = FUNC_1 (VAR_0);

  for (VAR_9 = VAR_4; VAR_9 < VAR_3; VAR_9++) {
    if (VAR_1[VAR_9]) {
      FUNC_0 (VAR_7 < VAR_8);
      FUNC_0 (VAR_2[VAR_7]->user_id == FUNC_3 (VAR_9));
      VAR_10 = VAR_5;
      FUNC_2 (VAR_2[VAR_7], VAR_1[VAR_9]);
      VAR_5 = VAR_10;
      VAR_7++;
    }
  }

  VAR_6 = FUNC_1 (VAR_0) - VAR_11;
}
