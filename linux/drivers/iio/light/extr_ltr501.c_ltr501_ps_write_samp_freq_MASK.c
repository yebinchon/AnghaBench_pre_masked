
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_data {int lock_ps; int reg_ps_rate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct ltr501_data *VAR_1,
         int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0,
       FUNC_0(VAR_0),
       VAR_2, VAR_3);

 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(&VAR_1->lock_ps);
 VAR_5 = FUNC_4(VAR_1->reg_ps_rate, VAR_4);
 FUNC_3(&VAR_1->lock_ps);

 return VAR_5;
}
