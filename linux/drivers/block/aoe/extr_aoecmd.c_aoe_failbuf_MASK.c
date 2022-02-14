
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bi_size; } ;
struct buf {scalar_t__ nframesout; TYPE_2__* bio; TYPE_1__ iter; } ;
struct aoedev {int dummy; } ;
struct TYPE_4__ {int bi_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct aoedev*,struct buf*) ;

void
FUNC_1(struct aoedev *VAR_1, struct buf *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 VAR_2->iter.bi_size = 0;
 VAR_2->bio->bi_status = VAR_0;
 if (VAR_2->nframesout == 0)
  FUNC_0(VAR_1, VAR_2);
}
