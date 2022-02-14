
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int dummy; } ;
struct name_entry {int oid; int mode; } ;
struct merge_list {struct merge_list* link; } ;


 int FUNC_0 (struct merge_list*) ;
 struct merge_list* FUNC_1 (int,int ,int *,char const*) ;
 char* FUNC_2 (struct traverse_info const*,struct name_entry*) ;

__attribute__((used)) static void FUNC_3(const struct traverse_info *VAR_0, struct name_entry *VAR_1, struct name_entry *VAR_2)
{
 struct merge_list *VAR_3, *VAR_4;
 const char *VAR_5;


 if (!VAR_1)
  return;

 VAR_5 = FUNC_2(VAR_0, VAR_2);
 VAR_3 = FUNC_1(2, VAR_1->mode, &VAR_1->oid, VAR_5);
 VAR_4 = FUNC_1(0, VAR_2->mode, &VAR_2->oid, VAR_5);

 VAR_4->link = VAR_3;

 FUNC_0(VAR_4);
}
