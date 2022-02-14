
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_du_device {int dummy; } ;
struct rcar_du_crtc {int dsysr; scalar_t__ mmio_offset; struct rcar_du_device* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rcar_du_device*,scalar_t__,int) ;

void FUNC_1(struct rcar_du_crtc *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct rcar_du_device *VAR_4 = VAR_1->dev;

 VAR_1->dsysr = (VAR_1->dsysr & ~VAR_2) | VAR_3;
 FUNC_0(VAR_4, VAR_1->mmio_offset + VAR_0, VAR_1->dsysr);
}
