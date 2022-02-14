
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lpReserved2; int cbReserved2; } ;
typedef TYPE_1__ STARTUPINFOW ;
typedef int * HANDLE ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

void FUNC_5(void) {
  HANDLE VAR_5;
  STARTUPINFOW VAR_6;


  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5 != ((void*)0) && VAR_5 != VAR_1)
    FUNC_2(VAR_5, VAR_0, 0);

  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 != ((void*)0) && VAR_5 != VAR_1)
    FUNC_2(VAR_5, VAR_0, 0);

  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5 != ((void*)0) && VAR_5 != VAR_1)
    FUNC_2(VAR_5, VAR_0, 0);


  FUNC_0(&VAR_6);
  if (FUNC_4(VAR_6.lpReserved2, VAR_6.cbReserved2))
    FUNC_3(VAR_6.lpReserved2);
}
