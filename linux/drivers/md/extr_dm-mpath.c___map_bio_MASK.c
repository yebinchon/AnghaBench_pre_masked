
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pgpath {int dummy; } ;
struct multipath {int process_queued_bios; int flags; int lock; int queued_bios; int current_pgpath; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 struct pgpath* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pgpath* FUNC_1 (int ) ;
 int FUNC_2 (int *,struct bio*) ;
 struct pgpath* FUNC_3 (struct multipath*,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct multipath*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static struct pgpath *FUNC_9(struct multipath *VAR_5, struct bio *VAR_6)
{
 struct pgpath *VAR_7;
 unsigned long VAR_8;
 bool VAR_9;


 VAR_7 = FUNC_1(VAR_5->current_pgpath);
 VAR_9 = FUNC_8(VAR_3, &VAR_5->flags);
 if (!VAR_7 || !VAR_9)
  VAR_7 = FUNC_3(VAR_5, VAR_6->bi_iter.bi_size);

 if ((VAR_7 && VAR_9) ||
     (!VAR_7 && FUNC_8(VAR_2, &VAR_5->flags))) {

  FUNC_6(&VAR_5->lock, VAR_8);
  FUNC_2(&VAR_5->queued_bios, VAR_6);
  FUNC_7(&VAR_5->lock, VAR_8);


  if (VAR_9 || FUNC_8(VAR_1, &VAR_5->flags))
   FUNC_4(VAR_5);
  else if (!VAR_9)
   FUNC_5(VAR_4, &VAR_5->process_queued_bios);

  return FUNC_0(-VAR_0);
 }

 return VAR_7;
}
