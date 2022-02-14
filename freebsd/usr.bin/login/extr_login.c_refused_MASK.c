
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pw_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char const*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ,char*,int ,char const*,int ,...) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_6, const char *VAR_7, int VAR_8)
{

 if (VAR_6 != ((void*)0))
     FUNC_1("%s.\n", VAR_6);
 if (VAR_2)
  FUNC_2(VAR_0, "LOGIN %s REFUSED (%s) FROM %s ON TTY %s",
      VAR_4->pw_name, VAR_7, VAR_3, VAR_5);
 else
  FUNC_2(VAR_0, "LOGIN %s REFUSED (%s) ON TTY %s",
      VAR_4->pw_name, VAR_7, VAR_5);
 if (VAR_8)
  FUNC_0(VAR_1, 1);
}
