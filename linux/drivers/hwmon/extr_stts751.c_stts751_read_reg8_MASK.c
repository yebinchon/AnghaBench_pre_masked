
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stts751_priv {int client; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct stts751_priv *VAR_0, int *VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->client, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_1 = FUNC_1(VAR_3 << 8);

 return 0;
}
