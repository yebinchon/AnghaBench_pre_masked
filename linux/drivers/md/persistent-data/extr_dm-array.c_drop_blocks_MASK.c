
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct resize {int root; TYPE_1__* info; } ;
struct TYPE_2__ {int btree_info; } ;


 int FUNC_0 (int *,int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct resize *VAR_0, unsigned VAR_1,
         unsigned VAR_2)
{
 int VAR_3;

 while (VAR_1 != VAR_2) {
  uint64_t VAR_4 = VAR_1++;
  VAR_3 = FUNC_0(&VAR_0->info->btree_info, VAR_0->root,
        &VAR_4, &VAR_0->root);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
