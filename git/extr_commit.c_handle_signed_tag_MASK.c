
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct merge_remote_desc {TYPE_1__* obj; } ;
struct commit_extra_header {char* value; unsigned long len; struct commit_extra_header* next; int key; } ;
struct commit {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {int oid; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct merge_remote_desc* FUNC_1 (struct commit*) ;
 unsigned long FUNC_2 (char*,unsigned long) ;
 char* FUNC_3 (int *,int*,unsigned long*) ;
 struct commit_extra_header* FUNC_4 (int,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct commit *VAR_1, struct commit_extra_header ***VAR_2)
{
 struct merge_remote_desc *VAR_3;
 struct commit_extra_header *VAR_4;
 char *VAR_5;
 unsigned long VAR_6, VAR_7;
 enum object_type VAR_8;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3 || !VAR_3->obj)
  return;
 VAR_5 = FUNC_3(&VAR_3->obj->oid, &VAR_8, &VAR_6);
 if (!VAR_5 || VAR_8 != VAR_0)
  goto free_return;
 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_6 == VAR_7)
  goto free_return;
 VAR_4 = FUNC_4(1, sizeof(*VAR_4));
 VAR_4->key = FUNC_5("mergetag");
 VAR_4->value = VAR_5;
 VAR_4->len = VAR_6;

 **VAR_2 = VAR_4;
 *VAR_2 = &VAR_4->next;
 return;

free_return:
 FUNC_0(VAR_5);
}
