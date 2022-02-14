
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mapped_device {int stats; } ;
struct dm_rq_target_io {int stats_aux; scalar_t__ duration_jiffies; int n_sectors; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (int *,int ,int ,int ,int,scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct request*) ;
 struct dm_rq_target_io* FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct mapped_device *VAR_1, struct request *VAR_2)
{
 if (FUNC_5(FUNC_2(&VAR_1->stats))) {
  struct dm_rq_target_io *VAR_3 = FUNC_4(VAR_2);
  VAR_3->duration_jiffies = VAR_0 - VAR_3->duration_jiffies;
  FUNC_1(&VAR_1->stats, FUNC_3(VAR_2),
        FUNC_0(VAR_2), VAR_3->n_sectors, 1,
        VAR_3->duration_jiffies, &VAR_3->stats_aux);
 }
}
