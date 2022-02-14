
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extcon_dev {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct extcon_dev*,unsigned int const) ;
 int FUNC_1 (struct extcon_dev*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct extcon_dev *VAR_1, const unsigned int VAR_2)
{
 int VAR_3, VAR_4;
 unsigned long VAR_5;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_2(&VAR_1->lock, VAR_5);
 VAR_4 = FUNC_1(VAR_1, VAR_3);
 FUNC_3(&VAR_1->lock, VAR_5);

 return VAR_4;
}
