
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct highlander_i2c_dev {int cmd_complete; scalar_t__ irq; } ;


 int FUNC_0 (struct highlander_i2c_dev*) ;
 int FUNC_1 (struct highlander_i2c_dev*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static inline int FUNC_4(struct highlander_i2c_dev *VAR_1)
{
 if (VAR_1->irq)
  FUNC_3(&VAR_1->cmd_complete,
       FUNC_2(VAR_0));
 else

  FUNC_0(VAR_1);

 return FUNC_1(VAR_1);
}
