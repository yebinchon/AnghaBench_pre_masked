
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st_i2c_client {int count; int xfered; } ;
struct st_i2c_dev {scalar_t__ base; struct st_i2c_client client; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct st_i2c_dev*,int) ;
 int FUNC_3 (struct st_i2c_dev*) ;
 int FUNC_4 (struct st_i2c_dev*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct st_i2c_dev *VAR_7)
{
 struct st_i2c_client *VAR_8 = &VAR_7->client;
 u32 VAR_9;


 if (!VAR_8->xfered) {
  FUNC_0(VAR_7->base + VAR_6);
  FUNC_1(VAR_7->base + VAR_0, VAR_2);
 } else {
  FUNC_3(VAR_7);
 }

 if (!VAR_8->count) {

  FUNC_4(VAR_7);
 } else if (VAR_8->count == 1) {

  FUNC_1(VAR_7->base + VAR_0, VAR_1);


  VAR_9 = VAR_5 | VAR_4;
  FUNC_5(VAR_9, VAR_7->base + VAR_3);

  FUNC_2(VAR_7, VAR_8->count);
 } else {
  FUNC_2(VAR_7, VAR_8->count - 1);
 }
}
