
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; scalar_t__ strdup_strings; int alloc; } ;
struct TYPE_4__ {char* string; int * util; } ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (struct string_list*,char const*,int*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(int VAR_0, struct string_list *VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = VAR_0 != -1 ? VAR_0 : FUNC_2(VAR_1, VAR_2, &VAR_3);

 if (VAR_3)
  return -1 - VAR_4;

 FUNC_0(VAR_1->items, VAR_1->nr+1, VAR_1->alloc);
 if (VAR_4 < VAR_1->nr)
  FUNC_1(VAR_1->items + VAR_4 + 1, VAR_1->items + VAR_4,
      VAR_1->nr - VAR_4);
 VAR_1->items[VAR_4].string = VAR_1->strdup_strings ?
  FUNC_3(VAR_2) : (char *)VAR_2;
 VAR_1->items[VAR_4].util = ((void*)0);
 VAR_1->nr++;

 return VAR_4;
}
