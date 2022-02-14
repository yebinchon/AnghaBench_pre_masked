
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hEvent; } ;
typedef int * HANDLE ;


 int * FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(void) {
  HANDLE VAR_2;

  VAR_2 = FUNC_0(((void*)0), VAR_0, VAR_0, ((void*)0));
  if (VAR_2 == ((void*)0))
    FUNC_3(FUNC_1(), "CreateEvent");

  FUNC_2(&VAR_1, 0, sizeof VAR_1);
  VAR_1.hEvent = (HANDLE) ((uintptr_t) VAR_2 | 1);
}
