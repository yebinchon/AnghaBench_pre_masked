
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wAttributes; } ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_1__ CONSOLE_SCREEN_BUFFER_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_4(int VAR_8)
{
 CONSOLE_SCREEN_BUFFER_INFO VAR_9;
 DWORD VAR_10;
 HANDLE VAR_11;

 static int VAR_12 = 0;


 VAR_11 = (HANDLE) FUNC_3(VAR_8);
 if (VAR_11 == VAR_2)
  return 0;


 if (FUNC_2(VAR_11) != VAR_1)
  return 0;


 if (!VAR_8) {
  if (!FUNC_0(VAR_11, &VAR_10))
   return 0;






  VAR_9.wAttributes = 0;
 } else if (!FUNC_1(VAR_11, &VAR_9))
  return 0;

 if (VAR_8 >= 0 && VAR_8 <= 2)
  VAR_5[VAR_8] |= VAR_0;


 if (!VAR_12) {
  VAR_4 = VAR_11;
  VAR_3 = VAR_7 = VAR_9.wAttributes;
  VAR_6 = 0;
  VAR_12 = 1;
 }

 return 1;
}
