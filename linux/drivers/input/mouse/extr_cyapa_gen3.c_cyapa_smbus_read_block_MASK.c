
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct cyapa {struct i2c_client* client; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (struct i2c_client*,int,int*) ;

ssize_t FUNC_3(struct cyapa *VAR_5, u8 VAR_6, size_t VAR_7,
          u8 *VAR_8)
{
 ssize_t VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 u8 *VAR_12;
 struct i2c_client *VAR_13 = VAR_5->client;

 if (!(VAR_2 & VAR_6))
  return -VAR_0;

 if (VAR_3 & VAR_6) {

  VAR_11 = FUNC_1(VAR_6, VAR_4);
  VAR_9 = FUNC_2(VAR_13, VAR_11, VAR_8);
  goto out;
 }

 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 * VAR_1 < VAR_7; VAR_10++) {
  VAR_11 = FUNC_0(VAR_6, VAR_10);
  VAR_11 = FUNC_1(VAR_11, VAR_4);
  VAR_12 = VAR_8 + VAR_1 * VAR_10;
  VAR_9 = FUNC_2(VAR_13, VAR_11, VAR_12);
  if (VAR_9 < 0)
   goto out;
 }

out:
 return VAR_9 > 0 ? VAR_7 : VAR_9;
}
