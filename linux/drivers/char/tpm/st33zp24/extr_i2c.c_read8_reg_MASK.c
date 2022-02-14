
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st33zp24_i2c_phy {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (struct st33zp24_i2c_phy*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, u8 VAR_2, u8 *VAR_3, int VAR_4)
{
 struct st33zp24_i2c_phy *VAR_5 = VAR_1;
 u8 VAR_6 = 0;
 u8 VAR_7;

 VAR_7 = VAR_0;
 VAR_6 = FUNC_1(VAR_5, VAR_2, &VAR_7, 1);
 if (VAR_6 == 2)
  VAR_6 = FUNC_0(VAR_5->client, VAR_3, VAR_4);
 return VAR_6;
}
