
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop {int irq; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct vop*,int,int,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct vop *VAR_1)
{
 bool VAR_2;
 int VAR_3;
 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2,
     !VAR_2, 0, 10 * 1000);
 if (VAR_3)
  FUNC_0(VAR_1->dev, "VOP vblank IRQ stuck for 10 ms\n");

 FUNC_2(VAR_1->irq);
}
