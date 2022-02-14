
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct mxl {int i2cdev; TYPE_1__* base; } ;
struct TYPE_2__ {int i2c_lock; scalar_t__* buf; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mxl*,scalar_t__*,scalar_t__) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mxl *VAR_3,
    u32 VAR_4, u32 VAR_5, u8 *VAR_6)
{
 int VAR_7;
 u8 *VAR_8 = VAR_3->base->buf;

 FUNC_4(&VAR_3->base->i2c_lock);
 VAR_8[0] = VAR_1;
 VAR_8[1] = VAR_5 + 4;
 VAR_8[2] = FUNC_0(VAR_4, 0);
 VAR_8[3] = FUNC_0(VAR_4, 1);
 VAR_8[4] = FUNC_0(VAR_4, 2);
 VAR_8[5] = FUNC_0(VAR_4, 3);
 FUNC_3(&VAR_8[6], VAR_6, VAR_5);
 VAR_7 = FUNC_2(VAR_3, VAR_8,
   VAR_0 +
   VAR_2 + VAR_5);
 FUNC_5(&VAR_3->base->i2c_lock);
 if (VAR_7)
  FUNC_1(VAR_3->i2cdev, "fw block write failed\n");
 return VAR_7;
}
