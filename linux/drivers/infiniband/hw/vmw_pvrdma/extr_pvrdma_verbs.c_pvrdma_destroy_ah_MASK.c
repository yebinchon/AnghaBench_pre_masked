
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvrdma_dev {int num_ahs; } ;
struct ib_ah {int device; } ;


 int FUNC_0 (int *) ;
 struct pvrdma_dev* FUNC_1 (int ) ;

void FUNC_2(struct ib_ah *VAR_0, u32 VAR_1)
{
 struct pvrdma_dev *VAR_2 = FUNC_1(VAR_0->device);

 FUNC_0(&VAR_2->num_ahs);
}
