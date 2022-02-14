
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extcon_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct extcon_dev*,unsigned int) ;
 int FUNC_1 (struct extcon_dev*,unsigned int,int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;

int FUNC_3(struct extcon_dev *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3)
{
 int VAR_4;

 if (!VAR_1)
  return -VAR_0;


 if (!FUNC_2(VAR_2, VAR_3))
  return -VAR_0;


 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3);
}
