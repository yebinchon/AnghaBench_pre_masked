
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_function {int dev; } ;
struct f03_data {unsigned int overwrite_buttons; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct f03_data* FUNC_1 (int *) ;

int FUNC_2(struct rmi_function *VAR_3, unsigned int VAR_4,
        int VAR_5)
{
 struct f03_data *VAR_6 = FUNC_1(&VAR_3->dev);
 unsigned int VAR_7;

 if (VAR_4 < VAR_0 || VAR_4 > VAR_1)
  return -VAR_2;

 VAR_7 = FUNC_0(VAR_4 - VAR_0);

 if (VAR_5)
  VAR_6->overwrite_buttons |= VAR_7;
 else
  VAR_6->overwrite_buttons &= ~VAR_7;

 return 0;
}
