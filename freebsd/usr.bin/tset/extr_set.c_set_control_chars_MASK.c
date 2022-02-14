
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* c_cc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char FUNC_0 (char) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*,char**) ;

void
FUNC_3(void)
{
 char *VAR_10, *VAR_11, VAR_12, VAR_13[1024];

 VAR_10 = VAR_13;
 VAR_11 = FUNC_2("kb", &VAR_10);
 if (VAR_11 == ((void*)0) || VAR_11[1] != '\0')
  VAR_11 = FUNC_2("bc", &VAR_10);
 if (VAR_11 != ((void*)0) && VAR_11[1] == '\0')
  VAR_12 = VAR_11[0];
 else if (FUNC_1("bs"))
  VAR_12 = FUNC_0('h');
 else
  VAR_12 = 0;

 if (VAR_6 == 0 && VAR_12 != 0 && !FUNC_1("os"))
  VAR_6 = -1;
 if (VAR_6 < 0)
  VAR_6 = (VAR_12 != 0) ? VAR_12 : FUNC_0('h');

 if (VAR_9.c_cc[VAR_3] == 0 || VAR_6 != 0)
  VAR_9.c_cc[VAR_3] = VAR_6 ? VAR_6 : VAR_0;

 if (VAR_9.c_cc[VAR_4] == 0 || VAR_7 != 0)
   VAR_9.c_cc[VAR_4] = VAR_7 ? VAR_7 : VAR_1;

 if (VAR_9.c_cc[VAR_5] == 0 || VAR_8 != 0)
  VAR_9.c_cc[VAR_5] = VAR_8 ? VAR_8 : VAR_2;
}
