
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rcar_du_device {int dummy; } ;
struct rcar_du_crtc {scalar_t__ mmio_offset; struct rcar_du_device* dev; } ;


 scalar_t__ FUNC_0 (struct rcar_du_device*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct rcar_du_crtc *VAR_0, u32 VAR_1)
{
 struct rcar_du_device *VAR_2 = VAR_0->dev;

 return FUNC_0(VAR_2, VAR_0->mmio_offset + VAR_1);
}
