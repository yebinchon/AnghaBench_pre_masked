
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rcar_du_device {int dummy; } ;
struct rcar_du_crtc {scalar_t__ mmio_offset; struct rcar_du_device* dev; } ;


 int FUNC_0 (struct rcar_du_device*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rcar_du_crtc *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct rcar_du_device *VAR_3 = VAR_0->dev;

 FUNC_0(VAR_3, VAR_0->mmio_offset + VAR_1, VAR_2);
}
