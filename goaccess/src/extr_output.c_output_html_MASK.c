
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ json_pretty_print; } ;
typedef int GLog ;
typedef int GHolder ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int * VAR_5 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int,char*,int ) ;

void
FUNC_13 (GLog * VAR_6, GHolder * VAR_7, const char *VAR_8)
{
  FILE *VAR_9;
  char VAR_10[VAR_0];

  if (VAR_8 != ((void*)0))
    VAR_9 = FUNC_2 (VAR_8, "w");
  else
    VAR_9 = VAR_5;

  if (!VAR_9)
    FUNC_0 ("Unable to open HTML file: %s.", FUNC_11 (VAR_2));


  if (VAR_1.json_pretty_print)
    VAR_3 = 1;
  FUNC_10 (VAR_3);

  FUNC_3 ();
  FUNC_12 (VAR_10, VAR_0, "%Y-%m-%d %H:%M:%S %z", VAR_4);

  FUNC_7 (VAR_9);

  FUNC_5 (VAR_9, VAR_10);
  FUNC_9 (VAR_9);
  FUNC_8 (VAR_9, VAR_6, VAR_7);
  FUNC_4 (VAR_9);

  FUNC_6 (VAR_9);

  FUNC_1 (VAR_9);
}
