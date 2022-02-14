
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct net_device {int name; int dev_addr; } ;
struct adm5120_if_priv {int vlan_no; int port_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_27 ;
 struct net_device** VAR_28 ;
 int * VAR_29 ;
 int VAR_30 ;
 int * VAR_31 ;
 struct net_device* FUNC_3 () ;
 int VAR_32 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int ,int) ;
 struct adm5120_if_priv* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int) ;
 int VAR_35 ;
 int VAR_36 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_37)
{
 u32 VAR_38;
 int VAR_39, VAR_40;

 VAR_32 = VAR_30;

 VAR_38 = VAR_1 | VAR_0 |
  VAR_16 << VAR_3 |
  VAR_16 << VAR_2 ;
 FUNC_17(VAR_18, VAR_38);

 VAR_38 = (VAR_16 << VAR_12) |
  (VAR_16 << VAR_11) |
  (VAR_16);
 FUNC_17(VAR_21, VAR_38);


 VAR_38 = VAR_17 |
  (VAR_17 << VAR_9) |
  (VAR_17 << VAR_6) |
  (VAR_17 << VAR_7) |
  (VAR_17 << VAR_5) |
  VAR_8;
 FUNC_17(VAR_19, VAR_38);

 VAR_38 = FUNC_16(VAR_20);
 VAR_38 |= VAR_10;
 FUNC_17(VAR_20, VAR_38);


 FUNC_17(VAR_22, 0);

 FUNC_15(VAR_14);
 FUNC_14(VAR_14);

 VAR_40 = FUNC_6();
 if (VAR_40)
  goto err;

 VAR_40 = FUNC_8();
 if (VAR_40)
  goto err;

 FUNC_9(VAR_35, VAR_36, VAR_27);
 FUNC_7(VAR_33, VAR_34, VAR_13);

 FUNC_17(VAR_25, 0);
 FUNC_17(VAR_26, FUNC_0(VAR_35));
 FUNC_17(VAR_23, 0);
 FUNC_17(VAR_24, FUNC_0(VAR_33));

 for (VAR_39 = 0; VAR_39 < VAR_15; VAR_39++) {
  struct net_device *VAR_41;
  struct adm5120_if_priv *VAR_42;

  VAR_41 = FUNC_3();
  if (!VAR_41) {
   VAR_40 = -VAR_4;
   goto err;
  }

  VAR_28[VAR_39] = VAR_41;
  VAR_42 = FUNC_12(VAR_41);

  VAR_42->vlan_no = VAR_39;
  VAR_42->port_mask = VAR_31[VAR_39];

  FUNC_11(VAR_41->dev_addr, VAR_29[VAR_39], 6);
  FUNC_10(VAR_41);

  VAR_40 = FUNC_13(VAR_41);
  if (VAR_40) {
   FUNC_2("%s register failed, error=%d\n",
     VAR_41->name, VAR_40);
   goto err;
  }
 }


 FUNC_4(VAR_31);


 VAR_38 = FUNC_16(VAR_18);
 VAR_38 &= ~VAR_1;
 FUNC_17(VAR_18, VAR_38);

 return 0;

err:
 FUNC_5();

 FUNC_1("init failed\n");
 return VAR_40;
}
