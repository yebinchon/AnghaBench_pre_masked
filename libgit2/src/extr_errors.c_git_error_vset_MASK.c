
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
typedef int git_buf ;
struct TYPE_2__ {int error_buf; } ;
typedef int DWORD ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char const*,int ) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 char* FUNC_10 (int) ;

void FUNC_11(int VAR_3, const char *VAR_4, va_list VAR_5)
{



 int VAR_6 = (VAR_3 == VAR_0) ? VAR_2 : 0;
 git_buf *VAR_7 = &VAR_1->error_buf;

 FUNC_4(VAR_7);
 if (VAR_4) {
  FUNC_7(VAR_7, VAR_4, VAR_5);
  if (VAR_3 == VAR_0)
   FUNC_3(VAR_7, ": ");
 }

 if (VAR_3 == VAR_0) {
  if (VAR_6)
   FUNC_6(VAR_7, FUNC_10(VAR_6));

  if (VAR_6)
   VAR_2 = 0;
 }

 if (!FUNC_5(VAR_7))
  FUNC_9(VAR_3);
}
