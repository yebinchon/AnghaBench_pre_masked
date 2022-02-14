
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st_i2c_client {int count; int * buf; } ;
struct st_i2c_dev {scalar_t__ base; struct st_i2c_client client; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct st_i2c_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct st_i2c_dev *VAR_5)
{
 struct st_i2c_client *VAR_6 = &VAR_5->client;
 u32 VAR_7, VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_5->base + VAR_0);
 if (VAR_8 & VAR_1)
  return;

 VAR_7 = FUNC_0(VAR_5->base + VAR_3);
 VAR_7 &= VAR_4;

 if (VAR_6->count < (VAR_2 - VAR_7))
  VAR_9 = VAR_6->count;
 else
  VAR_9 = VAR_2 - VAR_7;

 for (; VAR_9 > 0; VAR_9--, VAR_6->count--, VAR_6->buf++)
  FUNC_1(VAR_5, *VAR_6->buf);
}
