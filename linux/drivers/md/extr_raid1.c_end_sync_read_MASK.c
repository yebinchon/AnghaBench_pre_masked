
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1bio {int remaining; int state; int read_disk; } ;
struct bio {int bi_status; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct r1bio* FUNC_1 (struct bio*) ;
 int FUNC_2 (struct r1bio*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct r1bio*) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_1)
{
 struct r1bio *VAR_2 = FUNC_1(VAR_1);

 FUNC_4(VAR_2->read_disk, VAR_2);






 if (!VAR_1->bi_status)
  FUNC_3(VAR_0, &VAR_2->state);

 if (FUNC_0(&VAR_2->remaining))
  FUNC_2(VAR_2);
}
