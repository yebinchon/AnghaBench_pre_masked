
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treeent {int mode; int len; int name; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 struct treeent *VAR_2 = *(struct treeent **)VAR_0;
 struct treeent *VAR_3 = *(struct treeent **)VAR_1;
 return FUNC_0(VAR_2->name, VAR_2->len, VAR_2->mode,
     VAR_3->name, VAR_3->len, VAR_3->mode);
}
