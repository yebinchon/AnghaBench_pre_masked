
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_device {int dev; } ;
struct rcar_du_crtc {int flip_wait; struct rcar_du_device* dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rcar_du_crtc*) ;
 int FUNC_3 (struct rcar_du_crtc*) ;
 scalar_t__ FUNC_4 (int ,int,int ) ;

__attribute__((used)) static void FUNC_5(struct rcar_du_crtc *VAR_0)
{
 struct rcar_du_device *VAR_1 = VAR_0->dev;

 if (FUNC_4(VAR_0->flip_wait,
          !FUNC_3(VAR_0),
          FUNC_1(50)))
  return;

 FUNC_0(VAR_1->dev, "page flip timeout\n");

 FUNC_2(VAR_0);
}
