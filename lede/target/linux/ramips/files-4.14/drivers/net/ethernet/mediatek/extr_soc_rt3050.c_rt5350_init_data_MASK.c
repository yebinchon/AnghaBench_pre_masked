
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hw_features; } ;
struct fe_soc_data {int dummy; } ;
struct fe_priv {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fe_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct fe_soc_data *VAR_3,
        struct net_device *VAR_4)
{
 struct fe_priv *VAR_5 = FUNC_0(VAR_4);

 VAR_5->flags = VAR_0;
 VAR_4->hw_features = VAR_2 | VAR_1;
}
