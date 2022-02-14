
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
typedef int fontFamily ;
typedef int cfi ;
struct TYPE_7__ {int dll; } ;
struct TYPE_6__ {int cbSize; int FontFamily; } ;
typedef int LPVOID ;
typedef int HKEY ;
typedef int DWORD ;
typedef TYPE_1__ CONSOLE_FONT_INFOEX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__ (*) (int ,int ,TYPE_1__*),int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__ (*) (int ,int ,TYPE_1__*)) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int *) ;
 int FUNC_5 (int ,char*,int *,int *,int ,int*) ;
 int VAR_6 ;
 int FUNC_6 (int ,char const*,int ,int*,int *) ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(void)
{
 DWORD VAR_10 = 0;
 FUNC_0(VAR_8, VAR_0, FUNC_1,
   VAR_2, VAR_0, VAR_5);


 if (!VAR_9)
  return;


 if (FUNC_2(FUNC_1)) {
  CONSOLE_FONT_INFOEX VAR_11;
  VAR_11.cbSize = sizeof(VAR_11);
  if (FUNC_1(VAR_7, 0, &VAR_11))
   VAR_10 = VAR_11.FontFamily;
 } else {

  HKEY VAR_12;
  if (VAR_1 == FUNC_4(VAR_3, "Console",
    0, VAR_4, &VAR_12)) {
   DWORD VAR_13 = sizeof(VAR_10);
   FUNC_5(VAR_12, "FontFamily", ((void*)0), ((void*)0),
     (LPVOID) &VAR_10, &VAR_13);
   FUNC_3(VAR_12);
  }
 }

 if (!(VAR_10 & VAR_6)) {
  const wchar_t *VAR_14 = L"\nWarning: Your console font probably "
   L"doesn\'t support Unicode. If you experience strange "
   L"characters in the output, consider switching to a "
   L"TrueType font such as Consolas!\n";
  DWORD VAR_15;
  FUNC_6(VAR_7, VAR_14, FUNC_7(VAR_14), &VAR_15, ((void*)0));
 }
}
