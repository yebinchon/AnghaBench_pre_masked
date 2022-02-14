
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int status; } ;
struct search {TYPE_4__* orig_bio; TYPE_1__ iop; TYPE_3__* d; int start_time; } ;
struct TYPE_10__ {int bi_status; } ;
struct TYPE_9__ {TYPE_2__* disk; } ;
struct TYPE_8__ {int part0; int queue; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(struct search *VAR_0)
{
 if (VAR_0->orig_bio) {
  FUNC_2(VAR_0->d->disk->queue, FUNC_1(VAR_0->orig_bio),
        &VAR_0->d->disk->part0, VAR_0->start_time);

  FUNC_3(VAR_0->d, VAR_0->orig_bio);
  VAR_0->orig_bio->bi_status = VAR_0->iop.status;
  FUNC_0(VAR_0->orig_bio);
  VAR_0->orig_bio = ((void*)0);
 }
}
