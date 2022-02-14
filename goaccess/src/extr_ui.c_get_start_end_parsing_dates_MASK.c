
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* spec_date_time_num_format; } ;
struct TYPE_5__ {int idx; } ;
typedef TYPE_1__ GHolder ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (char**) ;
 char* FUNC_1 (char*,char const*,char const*) ;
 char** FUNC_2 (TYPE_1__*) ;

int
FUNC_3 (GHolder * VAR_2, char **VAR_3, char **VAR_4,
                             const char *VAR_5)
{
  char **VAR_6 = ((void*)0);
  const char *VAR_7 = VAR_1.spec_date_time_num_format;

  if (VAR_2->idx == 0)
    return 1;

  VAR_6 = FUNC_2 (VAR_2 + VAR_0);


  *VAR_3 = FUNC_1 (VAR_6[0], VAR_7, VAR_5);
  *VAR_4 = FUNC_1 (VAR_6[VAR_2->idx - 1], VAR_7, VAR_5);

  FUNC_0 (VAR_6);

  return 0;
}
