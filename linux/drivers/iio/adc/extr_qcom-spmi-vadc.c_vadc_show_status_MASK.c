
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vadc_priv {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct vadc_priv*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct vadc_priv *VAR_6)
{
 u8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_6, VAR_4, &VAR_7);
 if (VAR_13)
  return;

 VAR_13 = FUNC_1(VAR_6, VAR_1, &VAR_10);
 if (VAR_13)
  return;

 VAR_13 = FUNC_1(VAR_6, VAR_0, &VAR_9);
 if (VAR_13)
  return;

 VAR_13 = FUNC_1(VAR_6, VAR_2, &VAR_12);
 if (VAR_13)
  return;

 VAR_13 = FUNC_1(VAR_6, VAR_5, &VAR_8);
 if (VAR_13)
  return;

 VAR_13 = FUNC_1(VAR_6, VAR_3, &VAR_11);
 if (VAR_13)
  return;

 FUNC_0(VAR_6->dev,
  "mode:%02x en:%02x chan:%02x dig:%02x req:%02x sta1:%02x\n",
  VAR_7, VAR_11, VAR_9, VAR_10, VAR_12, VAR_8);
}
