
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ran; int event; } ;
typedef TYPE_1__ uv_once_t ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int,int ,int *) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8(uv_once_t* VAR_2, void (*VAR_3)(void)) {
  DWORD VAR_4;
  HANDLE VAR_5, VAR_6;

  VAR_6 = FUNC_1(((void*)0), 1, 0, ((void*)0));
  if (VAR_6 == 0) {

    FUNC_7(FUNC_2(), "CreateEvent");
  }

  VAR_5 = FUNC_3(&VAR_2->event,
                                                     VAR_6,
                                                     ((void*)0));

  if (VAR_5 == ((void*)0)) {

    VAR_3();

    VAR_4 = FUNC_4(VAR_6);
    FUNC_6(VAR_4);
    VAR_2->ran = 1;

  } else {


    FUNC_0(VAR_6);
    VAR_4 = FUNC_5(VAR_5, VAR_0);
    FUNC_6(VAR_4 == VAR_1);
  }
}
