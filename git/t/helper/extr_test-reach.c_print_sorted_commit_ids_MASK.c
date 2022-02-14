
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct commit_list {struct commit_list* next; TYPE_3__* item; } ;
struct TYPE_5__ {int oid; } ;
struct TYPE_6__ {TYPE_2__ object; } ;
struct TYPE_4__ {char* string; } ;


 struct string_list VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct string_list*,int ) ;
 int FUNC_3 (struct string_list*,int ) ;
 int FUNC_4 (struct string_list*) ;

__attribute__((used)) static void FUNC_5(struct commit_list *VAR_1)
{
 int VAR_2;
 struct string_list VAR_3 = VAR_0;

 while (VAR_1) {
  FUNC_2(&VAR_3, FUNC_0(&VAR_1->item->object.oid));
  VAR_1 = VAR_1->next;
 }

 FUNC_4(&VAR_3);

 for (VAR_2 = 0; VAR_2 < VAR_3.nr; VAR_2++)
  FUNC_1("%s\n", VAR_3.items[VAR_2].string);

 FUNC_3(&VAR_3, 0);
}
