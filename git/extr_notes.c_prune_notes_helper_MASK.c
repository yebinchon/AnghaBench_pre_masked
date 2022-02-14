
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int hash; } ;
struct note_delete_list {int sha1; struct note_delete_list* next; } ;


 scalar_t__ FUNC_0 (struct object_id const*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const struct object_id *VAR_0,
  const struct object_id *VAR_1, char *VAR_2,
  void *VAR_3)
{
 struct note_delete_list **VAR_4 = (struct note_delete_list **) VAR_3;
 struct note_delete_list *VAR_5;

 if (FUNC_0(VAR_0))
  return 0;


 VAR_5 = (struct note_delete_list *) FUNC_1(sizeof(*VAR_5));
 VAR_5->next = *VAR_4;
 VAR_5->sha1 = VAR_0->hash;
 *VAR_4 = VAR_5;
 return 0;
}
