
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenkbd_info {int irq; int gref; } ;


 int FUNC_0 (int,int ,unsigned long) ;
 int FUNC_1 (int,struct xenkbd_info*) ;

__attribute__((used)) static void FUNC_2(struct xenkbd_info *VAR_0)
{
 if (VAR_0->irq >= 0)
  FUNC_1(VAR_0->irq, VAR_0);
 VAR_0->irq = -1;
 if (VAR_0->gref >= 0)
  FUNC_0(VAR_0->gref, 0, 0UL);
 VAR_0->gref = -1;
}
