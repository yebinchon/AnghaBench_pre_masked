
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {int string; } ;


 struct string_list VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct string_list*,int ) ;
 int FUNC_2 (struct string_list*,int ) ;
 int FUNC_3 (struct string_list*,int ) ;
 int FUNC_4 (struct string_list*,char*,char,int) ;
 char* FUNC_5 (char const*) ;

void FUNC_6(struct string_list *VAR_1,
      const char *VAR_2)
{
 struct string_list VAR_3 = VAR_0;
 char *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;

 FUNC_4(&VAR_3, VAR_4, ':', -1);
 FUNC_3(&VAR_3, 0);

 for (VAR_5 = 0; VAR_5 < VAR_3.nr; VAR_5++)
  FUNC_1(VAR_1, VAR_3.items[VAR_5].string);

 FUNC_2(&VAR_3, 0);
 FUNC_0(VAR_4);
}
