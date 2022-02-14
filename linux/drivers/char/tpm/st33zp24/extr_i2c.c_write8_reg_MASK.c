
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st33zp24_i2c_phy {int * buf; int client; } ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, u8 VAR_1, u8 *VAR_2, int VAR_3)
{
 struct st33zp24_i2c_phy *VAR_4 = VAR_0;

 VAR_4->buf[0] = VAR_1;
 FUNC_1(VAR_4->buf + 1, VAR_2, VAR_3);
 return FUNC_0(VAR_4->client, VAR_4->buf, VAR_3 + 1);
}
