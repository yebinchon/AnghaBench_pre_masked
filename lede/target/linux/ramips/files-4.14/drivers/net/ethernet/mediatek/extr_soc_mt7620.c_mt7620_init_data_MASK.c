
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
 int FUNC_0 () ;
 struct fe_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct fe_soc_data *VAR_11,
        struct net_device *VAR_12)
{
 struct fe_priv *VAR_13 = FUNC_1(VAR_12);

 VAR_13->flags = VAR_1 | VAR_2 |
  VAR_3 | VAR_0;

 VAR_12->hw_features = VAR_6 | VAR_7 |
  VAR_4;
 if (FUNC_0() >= 5)
  VAR_12->hw_features |= VAR_8 | VAR_9 | VAR_10 |
   VAR_5;
}
