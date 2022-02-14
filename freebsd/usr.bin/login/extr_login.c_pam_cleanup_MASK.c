
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int *,int) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int * VAR_6 ;

__attribute__((used)) static void
FUNC_4(void)
{

 if (VAR_6 != ((void*)0)) {
  if (VAR_4) {
   VAR_3 = FUNC_0(VAR_6, 0);
   if (VAR_3 != VAR_1)
    FUNC_3("pam_close_session()");
  }
  VAR_4 = 0;
  if (VAR_2) {
   VAR_3 = FUNC_2(VAR_6, VAR_5|VAR_0);
   if (VAR_3 != VAR_1)
    FUNC_3("pam_setcred()");
  }
  VAR_2 = 0;
  FUNC_1(VAR_6, VAR_3);
  VAR_6 = ((void*)0);
 }
}
