
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_snapshot {int complete; int pending; TYPE_1__* store; TYPE_2__* cow; } ;
typedef int sector_t ;
struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {int chunk_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct dm_snapshot *VAR_3)
{
 sector_t VAR_4, VAR_5, VAR_6;





 VAR_5 = FUNC_3(VAR_3->cow->bdev);
 VAR_6 = FUNC_0();

 VAR_4 = VAR_5 >> VAR_3->store->chunk_shift;
 VAR_4 = FUNC_4(VAR_4, VAR_6);

 if (VAR_4 < 64)
  VAR_4 = 64;
 VAR_4 = FUNC_5(VAR_4);
 if (FUNC_2(&VAR_3->complete, VAR_4,
        VAR_0))
  return -VAR_1;





 VAR_4 >>= 3;
 if (VAR_4 < 64)
  VAR_4 = 64;

 if (FUNC_2(&VAR_3->pending, VAR_4, 0)) {
  FUNC_1(&VAR_3->complete, VAR_2);
  return -VAR_1;
 }

 return 0;
}
