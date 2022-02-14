
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int X; } ;
struct TYPE_8__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_9__ {TYPE_1__ dwSize; TYPE_2__ dwCursorPosition; } ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_2__ COORD ;
typedef TYPE_3__ CONSOLE_SCREEN_BUFFER_INFO ;


 int FUNC_0 (scalar_t__,int,int ,TYPE_2__,int *) ;
 int FUNC_1 (scalar_t__,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,TYPE_2__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(void) {
  HANDLE VAR_2;
  CONSOLE_SCREEN_BUFFER_INFO VAR_3;
  COORD VAR_4;
  DWORD VAR_5;

  VAR_2 = (HANDLE)FUNC_3(FUNC_4(VAR_1));
  if (VAR_2 == VAR_0)
    return -1;

  if (!FUNC_1(VAR_2, &VAR_3))
    return -1;

  VAR_4 = VAR_3.dwCursorPosition;
  if (VAR_4.Y <= 0)
    return -1;

  VAR_4.X = 0;

  if (!FUNC_2(VAR_2, VAR_4))
    return -1;

  if (!FUNC_0(VAR_2,
                                   0x20,
                                   VAR_3.dwSize.X,
                                   VAR_4,
                                   &VAR_5)) {
    return -1;
  }

  return 0;
}
