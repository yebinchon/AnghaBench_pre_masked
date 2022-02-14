
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {int dummy; } ;
struct bio_set {unsigned int front_pad; int rescue_workqueue; int bvec_pool; int bio_slab; int bio_pool; int rescue_work; int rescue_list; int rescue_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bio_set*) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;
 scalar_t__ FUNC_6 (int *,unsigned int,int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct bio_set *VAR_6,
  unsigned int VAR_7,
  unsigned int VAR_8,
  int VAR_9)
{
 unsigned int VAR_10 = VAR_2 * sizeof(struct bio_vec);

 VAR_6->front_pad = VAR_8;

 FUNC_7(&VAR_6->rescue_lock);
 FUNC_3(&VAR_6->rescue_list);
 FUNC_0(&VAR_6->rescue_work, VAR_5);

 VAR_6->bio_slab = FUNC_2(VAR_8 + VAR_10);
 if (!VAR_6->bio_slab)
  return -VAR_3;

 if (FUNC_6(&VAR_6->bio_pool, VAR_7, VAR_6->bio_slab))
  goto bad;

 if ((VAR_9 & VAR_0) &&
     FUNC_5(&VAR_6->bvec_pool, VAR_7))
  goto bad;

 if (!(VAR_9 & VAR_1))
  return 0;

 VAR_6->rescue_workqueue = FUNC_1("bioset", VAR_4, 0);
 if (!VAR_6->rescue_workqueue)
  goto bad;

 return 0;
bad:
 FUNC_4(VAR_6);
 return -VAR_3;
}
