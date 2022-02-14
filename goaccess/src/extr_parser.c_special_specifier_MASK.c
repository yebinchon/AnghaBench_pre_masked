
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int host; } ;
typedef TYPE_1__ GLogItem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char**,char**) ;
 int FUNC_1 (TYPE_1__*,int ,char,int *) ;

__attribute__((used)) static int
FUNC_2 (GLogItem * VAR_2, char **VAR_3, char **VAR_4)
{
  switch (**VAR_4) {

  case 'h':
    if (VAR_2->host)
      return FUNC_1 (VAR_2, VAR_1, **VAR_4, ((void*)0));
    if (FUNC_0 (VAR_2, VAR_3, VAR_4))
      return FUNC_1 (VAR_2, VAR_0, 'h', ((void*)0));
    break;
  }

  return 0;
}
