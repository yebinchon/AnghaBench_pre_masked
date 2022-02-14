
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct list_head* value; } ;
struct new_trailer_item {char const* text; int list; int if_missing; int if_exists; int where; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (struct list_head*) ;
 int VAR_2 ;
 struct new_trailer_item* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_3,
       const char *VAR_4, int VAR_5)
{
 struct list_head *VAR_6 = VAR_3->value;
 struct new_trailer_item *VAR_7;

 if (VAR_5) {
  FUNC_1(VAR_6);
  return 0;
 }

 if (!VAR_4)
  return -1;

 VAR_7 = FUNC_2(sizeof(*VAR_7));
 VAR_7->text = VAR_4;
 VAR_7->where = VAR_2;
 VAR_7->if_exists = VAR_0;
 VAR_7->if_missing = VAR_1;
 FUNC_0(&VAR_7->list, VAR_6);
 return 0;
}
