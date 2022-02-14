
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5l_log {scalar_t__ log_start; TYPE_2__* rdev; int bs; } ;
struct TYPE_3__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
struct TYPE_4__ {scalar_t__ data_offset; int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bio* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct bio*,int ,int ) ;

__attribute__((used)) static struct bio *FUNC_3(struct r5l_log *VAR_3)
{
 struct bio *VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_3->bs);

 FUNC_2(VAR_4, VAR_2, 0);
 FUNC_1(VAR_4, VAR_3->rdev->bdev);
 VAR_4->bi_iter.bi_sector = VAR_3->rdev->data_offset + VAR_3->log_start;

 return VAR_4;
}
