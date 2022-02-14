
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_i2c_client {scalar_t__ stop; } ;
struct st_i2c_dev {scalar_t__ base; struct st_i2c_client client; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct st_i2c_dev *VAR_8)
{
 struct st_i2c_client *VAR_9 = &VAR_8->client;

 FUNC_0(VAR_8->base + VAR_4, VAR_7);
 FUNC_0(VAR_8->base + VAR_0, VAR_3);

 if (VAR_9->stop) {
  FUNC_1(VAR_8->base + VAR_4, VAR_6);
  FUNC_1(VAR_8->base + VAR_0, VAR_2);
 } else {
  FUNC_1(VAR_8->base + VAR_4, VAR_5);
  FUNC_1(VAR_8->base + VAR_0, VAR_1);
 }
}
