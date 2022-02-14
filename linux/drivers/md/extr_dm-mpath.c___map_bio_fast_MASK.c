
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pgpath {int dummy; } ;
struct multipath {int process_queued_bios; int lock; int queued_bios; int flags; int current_pgpath; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 struct pgpath* FUNC_0 (int ) ;
 int VAR_1 ;
 struct pgpath* FUNC_1 (int ) ;
 int FUNC_2 (int *,struct bio*) ;
 struct pgpath* FUNC_3 (struct multipath*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static struct pgpath *FUNC_8(struct multipath *VAR_3, struct bio *VAR_4)
{
 struct pgpath *VAR_5;
 unsigned long VAR_6;






 VAR_5 = FUNC_1(VAR_3->current_pgpath);
 if (!VAR_5)
  VAR_5 = FUNC_3(VAR_3, VAR_4->bi_iter.bi_size);

 if (!VAR_5) {
  if (FUNC_7(VAR_1, &VAR_3->flags)) {

   FUNC_5(&VAR_3->lock, VAR_6);
   FUNC_2(&VAR_3->queued_bios, VAR_4);
   FUNC_6(&VAR_3->lock, VAR_6);
   FUNC_4(VAR_2, &VAR_3->process_queued_bios);

   return FUNC_0(-VAR_0);
  }
  return ((void*)0);
 }

 return VAR_5;
}
