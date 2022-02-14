
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console_input {char* line; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct console_input* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct console_input*) ;
 int VAR_2 ;

char *FUNC_2(void)
{
  static struct console_input *VAR_3;


  if (VAR_3 != ((void*)0))
  {
    FUNC_1(&VAR_1, VAR_3);
  }

  VAR_3 = FUNC_0(&VAR_2, VAR_0);
  return VAR_3->line;
}
