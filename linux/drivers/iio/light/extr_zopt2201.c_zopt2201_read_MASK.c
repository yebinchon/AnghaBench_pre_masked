
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct zopt2201_data {size_t res; int lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {unsigned long us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int,int,int*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (struct zopt2201_data*,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_8(struct zopt2201_data *VAR_6, u8 VAR_7)
{
 struct i2c_client *VAR_8 = VAR_6->client;
 int VAR_9 = 10;
 u8 VAR_10[3];
 int VAR_11;

 FUNC_4(&VAR_6->lock);
 VAR_11 = FUNC_7(VAR_6, VAR_7 == VAR_4);
 if (VAR_11 < 0)
  goto fail;

 while (VAR_9--) {
  unsigned long VAR_12 = VAR_5[VAR_6->res].us;

  if (VAR_12 <= 20000)
   FUNC_6(VAR_12, VAR_12 + 1000);
  else
   FUNC_3(VAR_12 / 1000);
  VAR_11 = FUNC_0(VAR_8, VAR_2);
  if (VAR_11 < 0)
   goto fail;
  if (VAR_11 & VAR_3)
   break;
 }

 if (VAR_9 < 0) {
  VAR_11 = -VAR_0;
  goto fail;
 }

 VAR_11 = FUNC_1(VAR_8, VAR_7, sizeof(VAR_10), VAR_10);
 if (VAR_11 < 0)
  goto fail;

 VAR_11 = FUNC_2(VAR_8, VAR_1, 0x00);
 if (VAR_11 < 0)
  goto fail;
 FUNC_5(&VAR_6->lock);

 return (VAR_10[2] << 16) | (VAR_10[1] << 8) | VAR_10[0];

fail:
 FUNC_5(&VAR_6->lock);
 return VAR_11;
}
