
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * acu_name; } ;
typedef TYPE_1__ acu_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int *) ;

__attribute__((used)) static acu_t *
FUNC_1(char *VAR_1)
{
 acu_t *VAR_2;
 extern acu_t VAR_3[];

 for (VAR_2 = VAR_3; VAR_2->acu_name != ((void*)0); VAR_2++)
  if (!FUNC_0(VAR_1, VAR_2->acu_name))
   return (VAR_2);
 return (VAR_0);
}
