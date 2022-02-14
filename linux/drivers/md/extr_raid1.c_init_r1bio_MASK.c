
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1bio {int sector; struct mddev* mddev; scalar_t__ state; int sectors; struct bio* master_bio; } ;
struct mddev {int dummy; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int FUNC_0 (struct bio*) ;

__attribute__((used)) static void FUNC_1(struct r1bio *VAR_0, struct mddev *VAR_1, struct bio *VAR_2)
{
 VAR_0->master_bio = VAR_2;
 VAR_0->sectors = FUNC_0(VAR_2);
 VAR_0->state = 0;
 VAR_0->mddev = VAR_1;
 VAR_0->sector = VAR_2->bi_iter.bi_sector;
}
