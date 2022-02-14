
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int browsers_hash_idx; void* user_browsers_hash; int browsers_file; } ;
typedef int FILE ;


 int FUNC_0 (int **) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 void* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (void*,char*,int) ;
 int FUNC_7 (void*,size_t,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 void* FUNC_10 (int) ;

void
FUNC_11 (void)
{
  char VAR_6[VAR_1 + 1];
  FILE *VAR_7;
  int VAR_8 = 0;
  size_t VAR_9, VAR_10 = FUNC_0 (VAR_2);

  VAR_3 = FUNC_10 (FUNC_0 (VAR_2) * sizeof (char **));

  for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9) {
    FUNC_7 (VAR_3, VAR_9, VAR_2[VAR_9][0], VAR_2[VAR_9][1]);
  }

  if (!VAR_4.browsers_file)
    return;


  if ((VAR_7 = FUNC_4 (VAR_4.browsers_file, "r")) == ((void*)0))
    FUNC_1 ("Unable to open browser's file: %s", FUNC_8 (VAR_5));

  VAR_4.user_browsers_hash = FUNC_10 (VAR_0 * sizeof (char **));

  while (FUNC_3 (VAR_6, sizeof VAR_6, VAR_7) != ((void*)0)) {
    while (VAR_6[0] == ' ' || VAR_6[0] == '\t')
      FUNC_5 (VAR_6, VAR_6 + 1, FUNC_9 (VAR_6));
    VAR_8++;

    if (VAR_6[0] == '\n' || VAR_6[0] == '\r' || VAR_6[0] == '#')
      continue;
    if (VAR_4.browsers_hash_idx >= VAR_0)
      FUNC_1 ("Maximum number of custom browsers has been reached");
    FUNC_6 (VAR_4.user_browsers_hash, VAR_6, VAR_8);
  }
  FUNC_2 (VAR_7);
}
