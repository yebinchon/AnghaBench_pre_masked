
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int,scalar_t__,int,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_2(unsigned VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_4 >> 3;
 VAR_6 = VAR_4 & 7;
 VAR_7 = FUNC_1(VAR_1 + VAR_3[VAR_5] + VAR_0);
 VAR_7 >>= VAR_6;
 VAR_7 &= 1;

 FUNC_0(&VAR_2->dev, "_gpio_get(%d from %x bit %d) == val %d\n",
  VAR_4, VAR_1 + VAR_3[VAR_5] + VAR_0, VAR_6,
  VAR_7);

 return VAR_7;
}
