
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int piping; int * pipe; } ;
typedef TYPE_1__ GLog ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__**,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (GLog ** VAR_1, const char *VAR_2, int VAR_3)
{
  FILE *VAR_4 = ((void*)0);
  int VAR_5 = 0;




  if (VAR_2[0] == '-' && VAR_2[1] == '\0' && (*VAR_1)->pipe) {
    VAR_4 = (*VAR_1)->pipe;
    (*VAR_1)->piping = VAR_5 = 1;
  }


  if (!VAR_5 && (VAR_4 = FUNC_2 (VAR_2, "r")) == ((void*)0))
    FUNC_0 ("Unable to open the specified log file. %s", FUNC_4 (VAR_0));


  if (FUNC_3 (VAR_4, VAR_1, VAR_3)) {
    if (!VAR_5)
      FUNC_1 (VAR_4);
    return 1;
  }


  if (!VAR_5)
    FUNC_1 (VAR_4);

  return 0;
}
