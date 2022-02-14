
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int wait_barrier; int nr_sync_pending; int * barrier; } ;
typedef int sector_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct r1conf *VAR_0, sector_t VAR_1)
{
 int VAR_2 = FUNC_3(VAR_1);

 FUNC_0(FUNC_2(&VAR_0->barrier[VAR_2]) <= 0);

 FUNC_1(&VAR_0->barrier[VAR_2]);
 FUNC_1(&VAR_0->nr_sync_pending);
 FUNC_4(&VAR_0->wait_barrier);
}
