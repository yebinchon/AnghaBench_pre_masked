
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cchar; char* fmt; int flags; } ;
typedef TYPE_1__ PR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char) ;

void
FUNC_1(PR *VAR_1)
{
 static char const *VAR_2 = " -0+#";
 char *VAR_3, *VAR_4;





 VAR_1->flags = VAR_0;
 VAR_1->cchar[0] = 's';
 VAR_1->cchar[1] = '\0';
 for (VAR_3 = VAR_1->fmt; *VAR_3 != '%'; ++VAR_3);
 for (VAR_4 = ++VAR_3; *VAR_3 && FUNC_0(VAR_2, *VAR_3); ++VAR_3);
 while ((*VAR_4++ = *VAR_3++));
}
