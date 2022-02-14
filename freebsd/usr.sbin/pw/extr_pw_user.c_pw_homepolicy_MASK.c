
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userconf {char* home; } ;
typedef int home ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static char *
FUNC_2(struct userconf * VAR_1, char *VAR_2, const char *VAR_3)
{
 static char VAR_4[128];

 if (VAR_2)
  return (VAR_2);

 if (VAR_1->home == ((void*)0) || *VAR_1->home == '\0')
  FUNC_0(VAR_0, "no base home directory set");
 FUNC_1(VAR_4, sizeof(VAR_4), "%s/%s", VAR_1->home, VAR_3);

 return (VAR_4);
}
