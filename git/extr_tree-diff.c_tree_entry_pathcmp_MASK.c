
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_entry {int mode; int path; } ;
struct tree_desc {struct name_entry entry; scalar_t__ size; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct name_entry*) ;

__attribute__((used)) static int FUNC_2(struct tree_desc *VAR_0, struct tree_desc *VAR_1)
{
 struct name_entry *VAR_2, *VAR_3;
 int VAR_4;


 if (!VAR_0->size)
  return VAR_1->size ? 1 : 0;
 else if (!VAR_1->size)
  return -1;

 VAR_2 = &VAR_0->entry;
 VAR_3 = &VAR_1->entry;
 VAR_4 = FUNC_0(VAR_2->path, FUNC_1(VAR_2), VAR_2->mode,
    VAR_3->path, FUNC_1(VAR_3), VAR_3->mode);
 return VAR_4;
}
