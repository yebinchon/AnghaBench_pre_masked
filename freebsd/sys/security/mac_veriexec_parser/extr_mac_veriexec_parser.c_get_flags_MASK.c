
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; int * flag_name; } ;


 TYPE_1__* VAR_0 ;
 int * FUNC_0 (char const*,int *) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_0[VAR_2].flag_name != ((void*)0); VAR_2++)
  if (FUNC_0(VAR_1, VAR_0[VAR_2].flag_name) != ((void*)0))
   VAR_3 |= VAR_0[VAR_2].flag;

 return (VAR_3);
}
