
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_target {int reclaim; int flush_work; int flush_wq; } ;
struct dm_target {struct dmz_target* private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_1)
{
 struct dmz_target *VAR_2 = VAR_1->private;

 FUNC_1(VAR_2->flush_wq, &VAR_2->flush_work, VAR_0);
 FUNC_0(VAR_2->reclaim);
}
