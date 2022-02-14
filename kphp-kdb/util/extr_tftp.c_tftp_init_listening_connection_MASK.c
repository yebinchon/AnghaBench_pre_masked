
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* tid; } ;
typedef TYPE_1__ tftp_connection_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int,int,int *,int ,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;

int FUNC_4 (int VAR_3, int VAR_4) {
  tftp_connection_t *VAR_5 = FUNC_1 (VAR_3, 1);
  VAR_5->tid[VAR_2] = VAR_3;
  if (VAR_4 < 0) {
    VAR_4 = FUNC_2 (VAR_3);
    if (VAR_4 < 0) {
      return -1;
    }
  }
  FUNC_0 (!FUNC_3 (VAR_5, VAR_4, VAR_3, &VAR_1, 0, VAR_0));
  return 0;
}
