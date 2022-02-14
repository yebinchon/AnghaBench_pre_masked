
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rcar_du_group {scalar_t__ mmio_offset; int dev; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;

void FUNC_1(struct rcar_du_group *VAR_0, u32 VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_0->dev, VAR_0->mmio_offset + VAR_1, VAR_2);
}
