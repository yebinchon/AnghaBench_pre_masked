
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct string_list_item {char* string; } ;
struct menu_stuff {int nr; TYPE_1__* stuff; int type; } ;
struct menu_opts {scalar_t__ flags; int prompt; int * header; } ;
struct TYPE_3__ {int nr; struct string_list_item* items; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (struct menu_opts*,struct menu_stuff*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct menu_opts VAR_2;
 struct menu_stuff VAR_3;
 struct string_list_item *VAR_4;
 int *VAR_5;
 int VAR_6, VAR_7;

 VAR_2.header = ((void*)0);
 VAR_2.prompt = FUNC_0("Select items to delete");
 VAR_2.flags = 0;

 VAR_3.type = VAR_0;
 VAR_3.stuff = &VAR_1;
 VAR_3.nr = VAR_1.nr;

 VAR_5 = FUNC_2(&VAR_2, &VAR_3);
 VAR_4 = VAR_1.items;
 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_1.nr; VAR_6++) {
  if (VAR_6 < VAR_5[VAR_7]) {
   *(VAR_4[VAR_6].string) = '\0';
  } else if (VAR_6 == VAR_5[VAR_7]) {

   VAR_7++;
   continue;
  } else {

   *(VAR_4[VAR_6].string) = '\0';
  }
 }

 FUNC_3(&VAR_1, 0);

 FUNC_1(VAR_5);
 return 0;
}
