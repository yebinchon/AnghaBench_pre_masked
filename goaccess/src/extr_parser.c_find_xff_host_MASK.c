
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type_ip; int * host; } ;
typedef TYPE_1__ GLogItem ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int*) ;
 char* FUNC_3 (char*,char**,int ) ;
 int FUNC_4 (TYPE_1__*,int ,char,char*) ;
 int FUNC_5 (char*,char*) ;
 int * FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7 (GLogItem * VAR_2, char **VAR_3, char **VAR_4)
{
  char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
  int VAR_8 = 1, VAR_9 = 0, VAR_10 = VAR_1;

  if (!(VAR_7 = FUNC_0 (VAR_4)))
    return FUNC_4 (VAR_2, VAR_0, **VAR_4, "{}");

  VAR_5 = *VAR_3;
  while (*VAR_5 != '\0') {
    if ((VAR_9 = FUNC_5 (VAR_5, VAR_7)) == 0) {
      VAR_9++, VAR_5++;
      goto move;
    }

    VAR_5 += VAR_9;

    if (!(VAR_6 = FUNC_3 (VAR_5, VAR_3, 0)))
      break;

    VAR_8 = FUNC_2 (VAR_6, &VAR_10);

    if (VAR_2->host && VAR_8) {
      FUNC_1 (VAR_6);
      break;
    }
    if (!VAR_2->host && !VAR_8) {
      VAR_2->host = FUNC_6 (VAR_6);
      VAR_2->type_ip = VAR_10;
    }
    FUNC_1 (VAR_6);

  move:
    *VAR_3 += VAR_9;
  }

  FUNC_1 (VAR_7);

  return VAR_2->host == ((void*)0);
}
