
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int min_nr; } ;
struct TYPE_3__ {scalar_t__ min_nr; } ;
struct bio_set {int front_pad; TYPE_2__ bio_pool; scalar_t__ rescue_workqueue; TYPE_1__ bvec_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio_set*,int ,int ,int) ;

int FUNC_1(struct bio_set *VAR_2, struct bio_set *VAR_3)
{
 int VAR_4;

 VAR_4 = 0;
 if (VAR_3->bvec_pool.min_nr)
  VAR_4 |= VAR_0;
 if (VAR_3->rescue_workqueue)
  VAR_4 |= VAR_1;

 return FUNC_0(VAR_2, VAR_3->bio_pool.min_nr, VAR_3->front_pad, VAR_4);
}
