
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noa1305_priv {int regmap; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct noa1305_priv *VAR_1)
{
 __le16 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->regmap, VAR_0, &VAR_2,
          2);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(VAR_2);
}
