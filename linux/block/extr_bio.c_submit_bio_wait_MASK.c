
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {int bi_status; int bi_opf; int bi_end_io; int * bi_private; TYPE_1__* bi_disk; } ;
struct TYPE_2__ {int lockdep_map; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bio*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

int FUNC_4(struct bio *VAR_3)
{
 FUNC_0(VAR_1, VAR_3->bi_disk->lockdep_map);

 VAR_3->bi_private = &VAR_1;
 VAR_3->bi_end_io = VAR_2;
 VAR_3->bi_opf |= VAR_0;
 FUNC_2(VAR_3);
 FUNC_3(&VAR_1);

 return FUNC_1(VAR_3->bi_status);
}
