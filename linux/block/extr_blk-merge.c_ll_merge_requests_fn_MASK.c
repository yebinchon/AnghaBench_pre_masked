
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int nr_phys_segments; int bio; } ;


 int FUNC_0 (struct request_queue*,struct request*,struct request*) ;
 scalar_t__ FUNC_1 (struct request*,int ) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct request_queue*) ;
 scalar_t__ FUNC_5 (struct request*,int ) ;

__attribute__((used)) static int FUNC_6(struct request_queue *VAR_0, struct request *VAR_1,
    struct request *VAR_2)
{
 int VAR_3;

 if (FUNC_5(VAR_1, VAR_2->bio))
  return 0;




 if ((FUNC_3(VAR_1) + FUNC_3(VAR_2)) >
     FUNC_1(VAR_1, FUNC_2(VAR_1)))
  return 0;

 VAR_3 = VAR_1->nr_phys_segments + VAR_2->nr_phys_segments;
 if (VAR_3 > FUNC_4(VAR_0))
  return 0;

 if (FUNC_0(VAR_0, VAR_1, VAR_2) == 0)
  return 0;


 VAR_1->nr_phys_segments = VAR_3;
 return 1;
}
