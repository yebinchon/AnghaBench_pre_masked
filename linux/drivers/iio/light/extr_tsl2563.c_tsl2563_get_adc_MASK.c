
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tsl2563_chip {int poweroff_work; int int_enabled; TYPE_1__* gainlevel; void* data1; void* data0; scalar_t__ suspended; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int gaintime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct tsl2563_chip*,int) ;
 int FUNC_4 (struct tsl2563_chip*) ;
 int FUNC_5 (struct tsl2563_chip*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (struct tsl2563_chip*,int) ;
 int FUNC_8 (struct tsl2563_chip*) ;

__attribute__((used)) static int FUNC_9(struct tsl2563_chip *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 u16 VAR_6, VAR_7;
 int VAR_8 = 1;
 int VAR_9 = 0;

 if (VAR_4->suspended)
  goto out;

 if (!VAR_4->int_enabled) {
  FUNC_0(&VAR_4->poweroff_work);

  if (!FUNC_5(VAR_4)) {
   VAR_9 = FUNC_7(VAR_4, 1);
   if (VAR_9)
    goto out;
   VAR_9 = FUNC_4(VAR_4);
   if (VAR_9)
    goto out;
   FUNC_8(VAR_4);
  }
 }

 while (VAR_8) {
  VAR_9 = FUNC_1(VAR_5,
    VAR_1 | VAR_2);
  if (VAR_9 < 0)
   goto out;
  VAR_6 = VAR_9;

  VAR_9 = FUNC_1(VAR_5,
    VAR_1 | VAR_3);
  if (VAR_9 < 0)
   goto out;
  VAR_7 = VAR_9;

  VAR_8 = FUNC_3(VAR_4, VAR_6);
 }

 VAR_4->data0 = FUNC_6(VAR_6, VAR_4->gainlevel->gaintime);
 VAR_4->data1 = FUNC_6(VAR_7, VAR_4->gainlevel->gaintime);

 if (!VAR_4->int_enabled)
  FUNC_2(&VAR_4->poweroff_work, 5 * VAR_0);

 VAR_9 = 0;
out:
 return VAR_9;
}
