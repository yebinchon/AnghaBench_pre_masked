
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  char *VAR_4;

  FUNC_2 (VAR_0, "");
  FUNC_0 (VAR_3, VAR_2);
  FUNC_3 (VAR_3);

  VAR_4 = FUNC_1 ("LC_CTYPE");
  if (VAR_4 != ((void*)0))
    FUNC_2 (VAR_1, VAR_4);
  else if ((VAR_4 = FUNC_1 ("LC_ALL")))
    FUNC_2 (VAR_1, VAR_4);
  else
    FUNC_2 (VAR_1, "");
}
