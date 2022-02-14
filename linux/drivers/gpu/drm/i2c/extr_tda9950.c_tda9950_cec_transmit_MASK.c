
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tda9950_priv {int client; } ;
struct cec_msg {int len; int msg; } ;
struct cec_adapter {struct tda9950_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_4, u8 VAR_5,
    u32 VAR_6, struct cec_msg *VAR_7)
{
 struct tda9950_priv *VAR_8 = VAR_4->priv;
 u8 VAR_9[VAR_1 + 2];

 VAR_9[0] = 2 + VAR_7->len;
 VAR_9[1] = VAR_0;
 FUNC_0(VAR_9 + 2, VAR_7->msg, VAR_7->len);

 if (VAR_5 > 5)
  VAR_5 = 5;

 FUNC_1(VAR_8->client, VAR_2, VAR_5);

 return FUNC_2(VAR_8->client, VAR_3, VAR_9, 2 + VAR_7->len);
}
