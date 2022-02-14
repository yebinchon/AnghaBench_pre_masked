
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extcon_dev {int lock; } ;


 int FUNC_0 (struct extcon_dev*,unsigned int,int) ;
 int FUNC_1 (struct extcon_dev*,unsigned int) ;
 int FUNC_2 (struct extcon_dev*,unsigned int) ;
 int FUNC_3 (struct extcon_dev*,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct extcon_dev *VAR_0, unsigned int VAR_1, bool VAR_2)
{
 int VAR_3, VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;


 FUNC_4(&VAR_0->lock, VAR_5);
 VAR_3 = FUNC_3(VAR_0, VAR_4, VAR_2);
 FUNC_5(&VAR_0->lock, VAR_5);
 if (!VAR_3)
  return 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_0, VAR_1);
}
