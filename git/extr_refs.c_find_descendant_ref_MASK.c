
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {char* string; } ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (struct string_list const*,char const*,int ) ;
 int FUNC_2 (struct string_list const*,char const*) ;

const char *FUNC_3(const char *VAR_0,
    const struct string_list *VAR_1,
    const struct string_list *VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  return ((void*)0);







 for (VAR_3 = FUNC_1(VAR_1, VAR_0, 0);
      VAR_3 < VAR_1->nr; VAR_3++) {
  const char *VAR_4 = VAR_1->items[VAR_3].string;

  if (!FUNC_0(VAR_4, VAR_0))
   break;

  if (!VAR_2 || !FUNC_2(VAR_2, VAR_4))
   return VAR_4;
 }
 return ((void*)0);
}
