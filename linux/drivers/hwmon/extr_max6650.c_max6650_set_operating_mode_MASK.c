
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max6650_data {int config; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct max6650_data *VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5 = VAR_2->config;

 if (VAR_3 == (VAR_5 & VAR_0))
  return 0;

 VAR_5 = (VAR_5 & ~VAR_0) | VAR_3;

 VAR_4 = FUNC_0(VAR_2->client, VAR_1,
        VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->config = VAR_5;

 return 0;
}
