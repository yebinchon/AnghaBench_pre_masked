
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int mblk_lock; int mblk_dirty_list; } ;
struct dmz_mblock {int link; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct dmz_metadata *VAR_1, struct dmz_mblock *VAR_2)
{
 FUNC_1(&VAR_1->mblk_lock);
 if (!FUNC_3(VAR_0, &VAR_2->state))
  FUNC_0(&VAR_2->link, &VAR_1->mblk_dirty_list);
 FUNC_2(&VAR_1->mblk_lock);
}
