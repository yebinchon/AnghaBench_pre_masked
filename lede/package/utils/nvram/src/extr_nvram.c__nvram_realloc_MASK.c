
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* name; char* value; } ;
typedef TYPE_1__ nvram_tuple_t ;
struct TYPE_8__ {int length; int offset; } ;
typedef TYPE_2__ nvram_handle_t ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static nvram_tuple_t * FUNC_5( nvram_handle_t *VAR_0, nvram_tuple_t *VAR_1,
 const char *VAR_2, const char *VAR_3 )
{
 if ((FUNC_4(VAR_3) + 1) > VAR_0->length - VAR_0->offset)
  return ((void*)0);

 if (!VAR_1) {
  if (!(VAR_1 = FUNC_0(sizeof(nvram_tuple_t) + FUNC_4(VAR_2) + 1)))
   return ((void*)0);


  VAR_1->name = (char *) &VAR_1[1];
  FUNC_3(VAR_1->name, VAR_2);

  VAR_1->value = ((void*)0);
 }


 if (!VAR_1->value || FUNC_2(VAR_1->value, VAR_3))
 {
  if(!(VAR_1->value = (char *) FUNC_1(VAR_1->value, FUNC_4(VAR_3)+1)))
   return ((void*)0);

  FUNC_3(VAR_1->value, VAR_3);
  VAR_1->value[FUNC_4(VAR_3)] = '\0';
 }

 return VAR_1;
}
