
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_metadata {int ll; } ;
struct block_op {int type; int block; } ;
typedef enum allocation_event { ____Placeholder_allocation_event } allocation_event ;




 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct sm_metadata *VAR_0, struct block_op *VAR_1)
{
 int VAR_2 = 0;
 enum allocation_event VAR_3;

 switch (VAR_1->type) {
 case 128:
  VAR_2 = FUNC_1(&VAR_0->ll, VAR_1->block, &VAR_3);
  break;

 case 129:
  VAR_2 = FUNC_0(&VAR_0->ll, VAR_1->block, &VAR_3);
  break;
 }

 return VAR_2;
}
