
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trailer_item {char* token; char* value; int list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;
 struct trailer_item* FUNC_1 (int,int) ;

__attribute__((used)) static struct trailer_item *FUNC_2(struct list_head *VAR_0, char *VAR_1,
          char *VAR_2)
{
 struct trailer_item *VAR_3 = FUNC_1(sizeof(*VAR_3), 1);
 VAR_3->token = VAR_1;
 VAR_3->value = VAR_2;
 FUNC_0(&VAR_3->list, VAR_0);
 return VAR_3;
}
