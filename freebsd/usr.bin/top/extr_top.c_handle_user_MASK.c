
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* uid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char*,size_t,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(char *VAR_2, size_t VAR_3)
{
    int VAR_4 = 0;
    int VAR_5 = -1;
    char *VAR_6 = VAR_2;

    FUNC_2(VAR_0, "Username to show (+ for all): ");
    if (FUNC_4(VAR_2, VAR_3, 0) <= 0)
    {
 FUNC_1();
 return (VAR_4);
    }

    if (VAR_2[0] == '+' || VAR_2[0] == '-')
    {
 if (VAR_2[1] == '\0')
 {
     FUNC_6();
     goto end;
 }
 else
     ++VAR_6;
    }

    if ((VAR_5 = FUNC_7(VAR_6)) == -1)
    {
 FUNC_2(VAR_0, " %s: unknown user", VAR_6);
 VAR_4 = 1;
 goto end;
    }

    if (VAR_6 == VAR_2)
    {
 FUNC_6();
 VAR_1.uid[0] = VAR_5;
 goto end;
    }

    if (VAR_2[0] == '+')
    {
 if (FUNC_0(VAR_5))
 {
     FUNC_2(VAR_0, " too many users, reset with '+'");
     VAR_4 = 1;
     goto end;
 }
    }
    else
 FUNC_5(VAR_5);

end:
    FUNC_3('\r');
    return (VAR_4);
}
