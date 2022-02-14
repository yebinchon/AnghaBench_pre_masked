
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct fe_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct fe_soc_data *VAR_8,
        struct net_device *VAR_9)
{
 struct fe_priv *VAR_10 = FUNC_0(VAR_9);

 VAR_10->flags = VAR_2 | VAR_3 |
  VAR_1 | VAR_0;
 VAR_9->hw_features = VAR_7 | VAR_5 |
  VAR_6 | VAR_4;
}
