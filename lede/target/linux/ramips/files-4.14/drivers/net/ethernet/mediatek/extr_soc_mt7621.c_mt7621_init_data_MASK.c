
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct fe_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct fe_soc_data *VAR_15,
        struct net_device *VAR_16)
{
 struct fe_priv *VAR_17 = FUNC_0(VAR_16);

 VAR_17->flags = VAR_3 | VAR_4 |
  VAR_5 | VAR_2 |
  VAR_0 | VAR_1;

 VAR_16->hw_features = VAR_9 | VAR_10 |
  VAR_7 | VAR_6 |
  VAR_11 | VAR_12 |
  VAR_13 | VAR_8 |
  VAR_14;
}
