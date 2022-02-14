
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int mblk_lock; int mblk_lru_list; int mblk_rbtree; } ;
struct dmz_mblock {scalar_t__ ref; int link; int state; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dmz_metadata*,struct dmz_mblock*) ;
 int FUNC_1 (struct dmz_metadata*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct dmz_metadata *VAR_2,
          struct dmz_mblock *VAR_3)
{

 if (!VAR_3)
  return;

 FUNC_4(&VAR_2->mblk_lock);

 VAR_3->ref--;
 if (VAR_3->ref == 0) {
  if (FUNC_6(VAR_1, &VAR_3->state)) {
   FUNC_3(&VAR_3->node, &VAR_2->mblk_rbtree);
   FUNC_0(VAR_2, VAR_3);
  } else if (!FUNC_6(VAR_0, &VAR_3->state)) {
   FUNC_2(&VAR_3->link, &VAR_2->mblk_lru_list);
   FUNC_1(VAR_2, 1);
  }
 }

 FUNC_5(&VAR_2->mblk_lock);
}
