
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int status; int * sockqueue; } ;
typedef TYPE_1__ WSClient ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,int) ;

__attribute__((used)) static int
FUNC_3 (WSClient * VAR_1, const char *VAR_2, int VAR_3)
{
  int VAR_4 = 0;


  if (VAR_1->sockqueue == ((void*)0))
    VAR_4 = FUNC_2 (VAR_1, VAR_2, VAR_3);


  else if (VAR_1->sockqueue != ((void*)0) && VAR_2 != ((void*)0) &&
           !(VAR_1->status & VAR_0)) {
    if (FUNC_0 (VAR_1, VAR_2, VAR_3) == 1)
      return VAR_4;
  }

  else {
    VAR_4 = FUNC_1 (VAR_1);
  }

  return VAR_4;
}
