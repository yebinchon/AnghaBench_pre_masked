
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ parent_path; int tree_entry; } ;
typedef TYPE_1__ tree_iterator_entry ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const tree_iterator_entry *VAR_2 = (const tree_iterator_entry *)VAR_0;
 const tree_iterator_entry *VAR_3 = (const tree_iterator_entry *)VAR_1;

 int VAR_4 = FUNC_1(VAR_2->tree_entry, VAR_3->tree_entry, 1);





 if (!VAR_4 && VAR_2->parent_path != VAR_3->parent_path)
  VAR_4 = FUNC_0(VAR_2->parent_path, VAR_3->parent_path);

 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_2->tree_entry, VAR_3->tree_entry, 0);

 return VAR_4;
}
