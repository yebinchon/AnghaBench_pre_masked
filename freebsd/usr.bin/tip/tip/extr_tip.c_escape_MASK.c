
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int e_char; int e_flags; int (* e_func ) (int) ;} ;
typedef TYPE_1__ esctable_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char FUNC_0 (int ) ;
 char* FUNC_1 (char) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_7;
 esctable_t *VAR_8;
 char VAR_9 = FUNC_0(FUNC_6(VAR_1));

 VAR_7 = FUNC_2();
 if (VAR_7 == VAR_0)
  return (VAR_0);
 VAR_7 = VAR_7 & VAR_4;
 for (VAR_8 = VAR_5; VAR_8->e_char; VAR_8++)
  if (VAR_8->e_char == VAR_7) {
   if ((VAR_8->e_flags&VAR_3) && VAR_6)
    continue;
   FUNC_4("%s", FUNC_1(VAR_9));
   (*VAR_8->e_func)(VAR_7);
   return (0);
  }

 if (VAR_9 != VAR_7)
  FUNC_3(VAR_2, &VAR_9, 1);
 return (VAR_7);
}
