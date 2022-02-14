
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {unsigned short nr_phys_segments; int bio; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct request*,int ) ;
 unsigned short FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 unsigned short FUNC_5 (struct request_queue*) ;
 int FUNC_6 (struct request_queue*,struct request*) ;

__attribute__((used)) static bool FUNC_7(struct request_queue *VAR_0, struct request *VAR_1,
  struct request *VAR_2)
{
 unsigned short VAR_3 = FUNC_2(VAR_1);

 if (VAR_3 >= FUNC_5(VAR_0))
  goto no_merge;
 if (FUNC_4(VAR_1) + FUNC_0(VAR_2->bio) >
     FUNC_1(VAR_1, FUNC_3(VAR_1)))
  goto no_merge;

 VAR_1->nr_phys_segments = VAR_3 + FUNC_2(VAR_2);
 return 1;
no_merge:
 FUNC_6(VAR_0, VAR_1);
 return 0;
}
