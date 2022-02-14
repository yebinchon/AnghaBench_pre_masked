
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_du_device {int dummy; } ;
struct rcar_du_crtc {int mmio_offset; struct rcar_du_device* dev; } ;


 int FUNC_0 (struct rcar_du_device*,int) ;
 int FUNC_1 (struct rcar_du_device*,int,int) ;

__attribute__((used)) static void FUNC_2(struct rcar_du_crtc *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct rcar_du_device *VAR_3 = VAR_0->dev;

 FUNC_1(VAR_3, VAR_0->mmio_offset + VAR_1,
        FUNC_0(VAR_3, VAR_0->mmio_offset + VAR_1) & ~VAR_2);
}
