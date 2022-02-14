
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mapped_device {int stats; } ;
struct dm_rq_target_io {int stats_aux; int n_sectors; int duration_jiffies; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (int *,int ,int ,int ,int,int ,int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (struct request*) ;
 struct dm_rq_target_io* FUNC_7 (struct request*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct mapped_device *VAR_1, struct request *VAR_2)
{
 FUNC_0(VAR_2);

 if (FUNC_8(FUNC_5(&VAR_1->stats))) {
  struct dm_rq_target_io *VAR_3 = FUNC_7(VAR_2);
  VAR_3->duration_jiffies = VAR_0;
  VAR_3->n_sectors = FUNC_2(VAR_2);
  FUNC_4(&VAR_1->stats, FUNC_6(VAR_2),
        FUNC_1(VAR_2), VAR_3->n_sectors, 0, 0,
        &VAR_3->stats_aux);
 }
 FUNC_3(VAR_1);
}
