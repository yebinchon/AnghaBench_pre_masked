
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hp03_priv {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int const) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct hp03_priv *VAR_2, const u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->client, VAR_1, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(50);

 return FUNC_0(VAR_2->client, VAR_0);
}
