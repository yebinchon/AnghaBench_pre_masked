
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sh_mobile_i2c_data {int sr; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct sh_mobile_i2c_data*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct sh_mobile_i2c_data *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 1000; VAR_8; VAR_8--) {
  u_int8_t VAR_9 = FUNC_1(VAR_7, VAR_3);

  FUNC_0(VAR_7->dev, "val 0x%02x pd->sr 0x%02x\n", VAR_9, VAR_7->sr);





  if (!(VAR_9 & VAR_5)) {

   VAR_9 |= VAR_7->sr;
   if (VAR_9 & VAR_6)
    return -VAR_1;
   if (VAR_9 & VAR_4)
    return -VAR_0;
   break;
  }

  FUNC_2(10);
 }

 return VAR_8 ? 0 : -VAR_2;
}
