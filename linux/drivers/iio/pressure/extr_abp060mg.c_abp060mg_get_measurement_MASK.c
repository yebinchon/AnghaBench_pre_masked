
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;
struct abp_state {int mreq_len; struct i2c_client* client; } ;
typedef int buf ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct i2c_client*,int *,int) ;
 int FUNC_2 (struct i2c_client*,int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct abp_state *VAR_6, int *VAR_7)
{
 struct i2c_client *VAR_8 = VAR_6->client;
 __be16 VAR_9[2];
 u16 VAR_10;
 int VAR_11;

 VAR_9[0] = 0;
 VAR_11 = FUNC_2(VAR_8, (u8 *)&VAR_9, VAR_6->mreq_len);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_3(VAR_3);

 VAR_11 = FUNC_1(VAR_8, (u8 *)&VAR_9, sizeof(VAR_9));
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = FUNC_0(VAR_9[0]);
 if (VAR_10 & VAR_0)
  return -VAR_4;

 if (VAR_10 < VAR_2 || VAR_10 > VAR_1)
  return -VAR_4;

 *VAR_7 = VAR_10;

 return VAR_5;
}
