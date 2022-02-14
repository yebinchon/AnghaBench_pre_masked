
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Top; scalar_t__ Bottom; } ;
struct TYPE_5__ {int X; } ;
struct TYPE_7__ {TYPE_2__ srWindow; TYPE_1__ dwSize; } ;
typedef TYPE_3__ CONSOLE_SCREEN_BUFFER_INFO ;


 scalar_t__ FUNC_0 (char*,int,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_5 ;
 int FUNC_3 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int VAR_11 ;

void FUNC_6(void) {
  if (FUNC_5(&VAR_11, 1))
    FUNC_3();
  VAR_6 = FUNC_0(L"CONOUT$",
                                       VAR_1 | VAR_2,
                                       VAR_0,
                                       0,
                                       VAR_4,
                                       0,
                                       0);
  if (VAR_6 != VAR_3) {
    CONSOLE_SCREEN_BUFFER_INFO VAR_12;
    FUNC_2(VAR_8,
                      ((void*)0),
                      VAR_5);
    FUNC_4(&VAR_9);
    if (FUNC_1(VAR_6, &VAR_12)) {
      VAR_10 = VAR_12.dwSize.X;
      VAR_7 = VAR_12.srWindow.Bottom - VAR_12.srWindow.Top + 1;
    }
  }
}
