
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_target {int flush_work; int reclaim; int chunk_wq; } ;
struct dm_target {struct dmz_target* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_0)
{
 struct dmz_target *VAR_1 = VAR_0->private;

 FUNC_2(VAR_1->chunk_wq);
 FUNC_1(VAR_1->reclaim);
 FUNC_0(&VAR_1->flush_work);
}
