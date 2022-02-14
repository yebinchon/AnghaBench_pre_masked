
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insert_entries {int vm; int flags; int level; int vma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct insert_entries *VAR_1 = VAR_0;

 FUNC_1(VAR_1->vm, VAR_1->vma, VAR_1->level, VAR_1->flags);
 FUNC_0(VAR_1->vm);

 return 0;
}
