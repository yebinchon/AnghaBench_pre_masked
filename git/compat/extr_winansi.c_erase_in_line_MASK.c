
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ X; } ;
struct TYPE_5__ {scalar_t__ X; } ;
struct TYPE_6__ {TYPE_4__ dwCursorPosition; TYPE_1__ dwSize; } ;
typedef int DWORD ;
typedef TYPE_2__ CONSOLE_SCREEN_BUFFER_INFO ;


 int FUNC_0 (int ,char,scalar_t__,TYPE_4__,int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
 CONSOLE_SCREEN_BUFFER_INFO VAR_1;
 DWORD VAR_2;

 if (!VAR_0)
  return;

 FUNC_1(VAR_0, &VAR_1);
 FUNC_0(VAR_0, ' ',
  VAR_1.dwSize.X - VAR_1.dwCursorPosition.X, VAR_1.dwCursorPosition,
  &VAR_2);
}
