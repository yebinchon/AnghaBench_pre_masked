
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct zram {int stats; int init_lock; TYPE_1__* disk; scalar_t__ disksize; struct zcomp* comp; scalar_t__ limit_pages; } ;
struct zcomp {int dummy; } ;
struct TYPE_2__ {int part0; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct zram*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct zram*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct zcomp*) ;
 int FUNC_8 (struct zram*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct zram *VAR_0)
{
 struct zcomp *VAR_1;
 u64 VAR_2;

 FUNC_0(&VAR_0->init_lock);

 VAR_0->limit_pages = 0;

 if (!FUNC_1(VAR_0)) {
  FUNC_6(&VAR_0->init_lock);
  return;
 }

 VAR_1 = VAR_0->comp;
 VAR_2 = VAR_0->disksize;
 VAR_0->disksize = 0;

 FUNC_5(VAR_0->disk, 0);
 FUNC_3(&VAR_0->disk->part0, 0);

 FUNC_6(&VAR_0->init_lock);

 FUNC_8(VAR_0, VAR_2);
 FUNC_2(&VAR_0->stats, 0, sizeof(VAR_0->stats));
 FUNC_7(VAR_1);
 FUNC_4(VAR_0);
}
