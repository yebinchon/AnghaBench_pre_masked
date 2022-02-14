
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_metadata {int uncommitted; } ;
struct block_op {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct block_op*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sm_metadata*,struct block_op*) ;

__attribute__((used)) static int FUNC_5(struct sm_metadata *VAR_0)
{
 int VAR_1 = 0;

 while (!FUNC_1(&VAR_0->uncommitted)) {
  struct block_op VAR_2;

  VAR_1 = FUNC_2(&VAR_0->uncommitted, &VAR_2);
  if (VAR_1) {
   FUNC_0("bug in bop ring buffer");
   break;
  }

  VAR_1 = FUNC_4(VAR_0, &VAR_2);
  if (VAR_1)
   break;

  FUNC_3(&VAR_0->uncommitted);
 }

 return VAR_1;
}
