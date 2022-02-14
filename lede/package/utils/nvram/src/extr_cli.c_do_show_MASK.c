
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* value; struct TYPE_3__* next; } ;
typedef TYPE_1__ nvram_tuple_t ;
typedef int nvram_handle_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(nvram_handle_t *VAR_0)
{
 nvram_tuple_t *VAR_1;
 int VAR_2 = 1;

 if( (VAR_1 = FUNC_0(VAR_0)) != ((void*)0) )
 {
  while( VAR_1 )
  {
   FUNC_1("%s=%s\n", VAR_1->name, VAR_1->value);
   VAR_1 = VAR_1->next;
  }

  VAR_2 = 0;
 }

 return VAR_2;
}
