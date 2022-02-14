
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st_i2c_client {int xfered; } ;
struct st_i2c_dev {scalar_t__ base; struct st_i2c_client client; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct st_i2c_dev*,int) ;

__attribute__((used)) static void FUNC_2(struct st_i2c_dev *VAR_5, int VAR_6)
{
 struct st_i2c_client *VAR_7 = &VAR_5->client;
 u32 VAR_8, VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(VAR_5->base + VAR_0);
 if (VAR_9 & VAR_1)
  return;

 VAR_8 = FUNC_0(VAR_5->base + VAR_3);
 VAR_8 &= VAR_4;

 if (VAR_6 < (VAR_2 - VAR_8))
  VAR_10 = VAR_6;
 else
  VAR_10 = VAR_2 - VAR_8;

 for (; VAR_10 > 0; VAR_10--, VAR_7->xfered++)
  FUNC_1(VAR_5, 0xff);
}
