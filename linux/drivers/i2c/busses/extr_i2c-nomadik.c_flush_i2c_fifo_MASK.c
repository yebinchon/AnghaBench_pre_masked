
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long timeout; } ;
struct nmk_i2c_dev {TYPE_1__* adev; scalar_t__ virtbase; TYPE_2__ adap; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 unsigned long VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct nmk_i2c_dev *VAR_6)
{

 int VAR_7;
 unsigned long VAR_8;
 FUNC_3((VAR_3 | VAR_2), VAR_6->virtbase + VAR_1);

 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
  VAR_8 = VAR_5 + VAR_6->adap.timeout;

  while (!FUNC_2(VAR_5, VAR_8)) {
   if ((FUNC_1(VAR_6->virtbase + VAR_1) &
    (VAR_3 | VAR_2)) == 0)
     return 0;
  }
 }

 FUNC_0(&VAR_6->adev->dev,
  "flushing operation timed out giving up after %d attempts",
  10);

 return -VAR_0;
}
