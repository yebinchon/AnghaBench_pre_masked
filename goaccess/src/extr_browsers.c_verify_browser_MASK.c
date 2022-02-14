
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int browsers_hash_idx; int ** user_browsers_hash; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 int VAR_1 ;
 int ** VAR_2 ;
 char* FUNC_2 (char*) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_3 (char*,char*,size_t,int **) ;
 char* FUNC_4 (char*,char*,char*) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char*,int ) ;

char *
FUNC_7 (char *VAR_4, char *VAR_5)
{
  char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
  int VAR_8 = 0;
  size_t VAR_9 = 0;

  if (VAR_4 == ((void*)0) || *VAR_4 == '\0')
    return ((void*)0);


  for (VAR_8 = 0; VAR_8 < VAR_3.browsers_hash_idx; ++VAR_8) {
    if ((VAR_6 = FUNC_5 (VAR_4, VAR_3.user_browsers_hash[VAR_8][0])) == ((void*)0))
      continue;
    return FUNC_3 (VAR_6, VAR_5, VAR_8, VAR_3.user_browsers_hash);
  }

  if ((VAR_6 = FUNC_2 (VAR_4)) &&
      (VAR_7 = FUNC_4 (VAR_4, VAR_6, VAR_5)))
    return VAR_7;


  for (VAR_9 = 0; VAR_9 < FUNC_0 (VAR_1); ++VAR_9) {
    if ((VAR_6 = FUNC_5 (VAR_4, VAR_2[VAR_9][0])) == ((void*)0))
      continue;
    return FUNC_3 (VAR_6, VAR_5, VAR_9, VAR_2);
  }

  FUNC_6 (VAR_5, "Unknown", VAR_0);

  return FUNC_1 ("Unknown");
}
