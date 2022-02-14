
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx {int lock; scalar_t__ powered; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct anx78xx*) ;
 int FUNC_2 (struct anx78xx*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct anx78xx *VAR_3 = VAR_2;
 int VAR_4;

 if (VAR_3->powered)
  return VAR_0;

 FUNC_3(&VAR_3->lock);


 FUNC_2(VAR_3);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  FUNC_0("Failed to enable interrupts: %d\n", VAR_4);

 FUNC_4(&VAR_3->lock);

 return VAR_0;
}
