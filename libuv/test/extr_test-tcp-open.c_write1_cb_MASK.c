
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int handle; } ;
typedef TYPE_1__ uv_write_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ,int *,int,void (*) (TYPE_1__*,int)) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(uv_write_t* VAR_4, int VAR_5) {
  uv_buf_t VAR_6;
  int VAR_7;

  FUNC_0(VAR_4 != ((void*)0));
  if (VAR_5) {
    FUNC_0(VAR_0);
    return;
  }

  if (VAR_1)
    return;

  VAR_6 = FUNC_1("P", 1);
  VAR_7 = FUNC_2(&VAR_3, VAR_4->handle, &VAR_6, 1, FUNC_3);
  FUNC_0(VAR_7 == 0);

  VAR_2++;
}
