
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stts751_priv {int client; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct stts751_priv *VAR_0, int *VAR_1,
         u8 VAR_2, u8 VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0->client, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = FUNC_0(VAR_0->client, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_1 = FUNC_1((VAR_4 << 8) | VAR_5);

 return 0;
}
