
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_mbox_pdata {unsigned int num_inst; } ;
struct sti_mbox_device {int dev; } ;
struct mbox_chan {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct sti_mbox_pdata* FUNC_0 (int ) ;
 int FUNC_1 (struct mbox_chan*,int *) ;
 int FUNC_2 (struct mbox_chan*) ;
 int FUNC_3 (struct mbox_chan*) ;
 struct mbox_chan* FUNC_4 (struct sti_mbox_device*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct sti_mbox_device *VAR_3 = VAR_2;
 struct sti_mbox_pdata *VAR_4 = FUNC_0(VAR_3->dev);
 struct mbox_chan *VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_inst; VAR_6++) {
keep_looking:
  VAR_5 = FUNC_4(VAR_3, VAR_6);
  if (!VAR_5)
   continue;

  FUNC_1(VAR_5, ((void*)0));
  FUNC_2(VAR_5);
  FUNC_3(VAR_5);
  goto keep_looking;
 }

 return VAR_0;
}
