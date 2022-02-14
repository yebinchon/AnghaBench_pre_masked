
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bma180_data {int client; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct bma180_data *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0->client, VAR_1);
 u8 VAR_5 = (VAR_4 & ~VAR_2) | (VAR_3 << (FUNC_0(VAR_2) - 1));

 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_2(VAR_0->client, VAR_1, VAR_5);
}
