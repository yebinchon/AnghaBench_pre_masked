
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_target {int chunk_lock; int chunk_wq; int reclaim; int chunk_rxtree; int dev; } ;
struct dm_chunk_work {unsigned int chunk; int work; int bio_list; struct dmz_target* target; int refcount; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int ,struct bio*) ;
 int VAR_2 ;
 int FUNC_4 (struct dm_chunk_work*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dm_chunk_work*) ;
 struct dm_chunk_work* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,unsigned int,struct dm_chunk_work*) ;
 struct dm_chunk_work* FUNC_12 (int *,unsigned int) ;
 int FUNC_13 (int *,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct dmz_target *VAR_3, struct bio *VAR_4)
{
 unsigned int VAR_5 = FUNC_3(VAR_3->dev, VAR_4);
 struct dm_chunk_work *VAR_6;
 int VAR_7 = 0;

 FUNC_8(&VAR_3->chunk_lock);


 VAR_6 = FUNC_12(&VAR_3->chunk_rxtree, VAR_5);
 if (!VAR_6) {


  VAR_6 = FUNC_7(sizeof(struct dm_chunk_work), VAR_1);
  if (FUNC_14(!VAR_6)) {
   VAR_7 = -VAR_0;
   goto out;
  }

  FUNC_0(&VAR_6->work, VAR_2);
  FUNC_13(&VAR_6->refcount, 0);
  VAR_6->target = VAR_3;
  VAR_6->chunk = VAR_5;
  FUNC_2(&VAR_6->bio_list);

  VAR_7 = FUNC_11(&VAR_3->chunk_rxtree, VAR_5, VAR_6);
  if (FUNC_14(VAR_7)) {
   FUNC_6(VAR_6);
   goto out;
  }
 }

 FUNC_1(&VAR_6->bio_list, VAR_4);
 FUNC_4(VAR_6);

 FUNC_5(VAR_3->reclaim);
 if (FUNC_10(VAR_3->chunk_wq, &VAR_6->work))
  FUNC_4(VAR_6);
out:
 FUNC_9(&VAR_3->chunk_lock);
 return VAR_7;
}
