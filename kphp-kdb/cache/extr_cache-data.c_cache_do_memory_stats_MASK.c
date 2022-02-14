
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pos; } ;
typedef TYPE_1__ cache_buffer_t ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*,int,int) ;

int FUNC_2 (char *VAR_3, int VAR_4) {
  cache_buffer_t VAR_5;
  FUNC_0 (&VAR_5, VAR_3, VAR_4);
  int VAR_6;
  for (VAR_6 = VAR_2; VAR_6 <= VAR_1 + 3; VAR_6++) {
    if (VAR_0[VAR_6]) {
      FUNC_1 (&VAR_5, "FreeCnt[%d] = %d\n", VAR_6, (int) VAR_0[VAR_6]);
    }
  }
  return VAR_5.pos;
}
