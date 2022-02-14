
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocrdma_dev {int dummy; } ;
struct ocrdma_ah {int dummy; } ;
struct ib_ah {int device; } ;


 struct ocrdma_ah* FUNC_0 (struct ib_ah*) ;
 struct ocrdma_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_ah*) ;

void FUNC_3(struct ib_ah *VAR_0, u32 VAR_1)
{
 struct ocrdma_ah *VAR_2 = FUNC_0(VAR_0);
 struct ocrdma_dev *VAR_3 = FUNC_1(VAR_0->device);

 FUNC_2(VAR_3, VAR_2);
}
