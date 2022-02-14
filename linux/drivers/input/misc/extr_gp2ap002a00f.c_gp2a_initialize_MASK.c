
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gp2a_data {int i2c_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gp2a_data*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct gp2a_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->i2c_client, VAR_1,
       0x08);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3->i2c_client, VAR_2,
       0xc2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3->i2c_client, VAR_0,
       0x04);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3);

 return VAR_4;
}
