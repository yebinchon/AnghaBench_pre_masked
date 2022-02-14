
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct mxl {TYPE_1__* base; } ;
struct TYPE_2__ {int i2c_lock; scalar_t__* buf; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct mxl*,scalar_t__*,scalar_t__) ;
 int FUNC_3 (struct mxl*,scalar_t__*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mxl *VAR_4, u32 VAR_5, u32 VAR_6, u8 *VAR_7)
{
 int VAR_8;
 u8 *VAR_9 = VAR_4->base->buf;

 FUNC_4(&VAR_4->base->i2c_lock);

 VAR_9[0] = VAR_2;
 VAR_9[1] = VAR_6 + 4;
 VAR_9[2] = FUNC_0(VAR_5, 0);
 VAR_9[3] = FUNC_0(VAR_5, 1);
 VAR_9[4] = FUNC_0(VAR_5, 2);
 VAR_9[5] = FUNC_0(VAR_5, 3);
 VAR_8 = FUNC_3(VAR_4, VAR_9,
   VAR_1 + VAR_3);
 if (!VAR_8) {
  VAR_8 = FUNC_2(VAR_4, VAR_7, VAR_6);
  FUNC_1(VAR_0, VAR_6, VAR_7);
 }
 FUNC_5(&VAR_4->base->i2c_lock);
 return VAR_8;
}
