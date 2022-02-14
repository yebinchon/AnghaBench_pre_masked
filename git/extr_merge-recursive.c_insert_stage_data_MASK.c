
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct tree {TYPE_1__ object; } ;
struct string_list_item {struct stage_data* util; } ;
struct string_list {int dummy; } ;
struct stage_data {int * stages; } ;
struct repository {int dummy; } ;


 int FUNC_0 (struct repository*,int *,char const*,int *) ;
 struct string_list_item* FUNC_1 (struct string_list*,char const*) ;
 struct stage_data* FUNC_2 (int,int) ;

__attribute__((used)) static struct stage_data *FUNC_3(struct repository *VAR_0,
  const char *VAR_1,
  struct tree *VAR_2, struct tree *VAR_3, struct tree *VAR_4,
  struct string_list *VAR_5)
{
 struct string_list_item *VAR_6;
 struct stage_data *VAR_7 = FUNC_2(1, sizeof(struct stage_data));
 FUNC_0(VAR_0, &VAR_2->object.oid, VAR_1, &VAR_7->stages[1]);
 FUNC_0(VAR_0, &VAR_3->object.oid, VAR_1, &VAR_7->stages[2]);
 FUNC_0(VAR_0, &VAR_4->object.oid, VAR_1, &VAR_7->stages[3]);
 VAR_6 = FUNC_1(VAR_5, VAR_1);
 VAR_6->util = VAR_7;
 return VAR_7;
}
