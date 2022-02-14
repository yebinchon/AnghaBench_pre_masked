
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct sirfsoc_i2c {scalar_t__ err_status; scalar_t__ base; TYPE_1__ adapter; int done; } ;
struct i2c_msg {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct sirfsoc_i2c*) ;
 int FUNC_3 (struct sirfsoc_i2c*,struct i2c_msg*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct sirfsoc_i2c *VAR_7, struct i2c_msg *VAR_8)
{
 u32 VAR_9 = FUNC_5(VAR_7->base + VAR_3);

 int VAR_10 = FUNC_4((VAR_8->len + 1) * 50);

 FUNC_3(VAR_7, VAR_8);

 FUNC_7(VAR_9 | VAR_1 | VAR_4,
  VAR_7->base + VAR_3);
 FUNC_2(VAR_7);

 if (FUNC_6(&VAR_7->done, VAR_10) == 0) {
  VAR_7->err_status = VAR_5;
  FUNC_1(&VAR_7->adapter.dev, "Transfer timeout\n");
 }

 FUNC_7(VAR_9 & ~(VAR_1 | VAR_4),
  VAR_7->base + VAR_3);
 FUNC_7(0, VAR_7->base + VAR_2);


 if (VAR_7->err_status == VAR_5) {
  FUNC_7(FUNC_5(VAR_7->base + VAR_3) | VAR_6,
   VAR_7->base + VAR_3);
  while (FUNC_5(VAR_7->base + VAR_3) & VAR_6)
   FUNC_0();
 }
 return VAR_7->err_status ? -VAR_0 : 0;
}
