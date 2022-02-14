
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct owl_i2c_dev {TYPE_1__ adap; scalar_t__ base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,unsigned int,int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct owl_i2c_dev *VAR_5)
{
 unsigned int VAR_6, VAR_7 = 0;


 FUNC_1(VAR_5->base + VAR_4,
      VAR_1 | VAR_2,
      1);


 do {
  VAR_6 = FUNC_2(VAR_5->base + VAR_4);
  if (!(VAR_6 & (VAR_1 | VAR_2)))
   break;
  FUNC_3(500, 1000);
 } while (VAR_7++ < VAR_3);

 if (VAR_7 > VAR_3) {
  FUNC_0(&VAR_5->adap.dev, "FIFO reset timeout\n");
  return -VAR_0;
 }

 return 0;
}
