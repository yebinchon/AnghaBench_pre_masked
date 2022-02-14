
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct bcm5974_param {int snratio; int max; int min; } ;


 int FUNC_0 (struct input_dev*,unsigned int,int,int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct input_dev *VAR_0, unsigned int VAR_1,
      const struct bcm5974_param *VAR_2)
{
 int VAR_3 = VAR_2->snratio ? (VAR_2->max - VAR_2->min) / VAR_2->snratio : 0;
 FUNC_0(VAR_0, VAR_1, VAR_2->min, VAR_2->max, VAR_3, 0);
}
