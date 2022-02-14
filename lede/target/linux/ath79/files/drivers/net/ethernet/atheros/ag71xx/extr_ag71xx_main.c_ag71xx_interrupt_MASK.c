
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int name; int dev; } ;
struct ag71xx {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ag71xx*,int) ;
 int FUNC_2 (struct ag71xx*,char*,int) ;
 int FUNC_3 (struct ag71xx*,int) ;
 int FUNC_4 (struct ag71xx*,int ) ;
 int FUNC_5 (struct ag71xx*,int ,int ) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 struct ag71xx* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_11, void *VAR_12)
{
 struct net_device *VAR_13 = VAR_12;
 struct ag71xx *VAR_14 = FUNC_9(VAR_13);
 u32 VAR_15;

 VAR_15 = FUNC_4(VAR_14, VAR_4);
 FUNC_2(VAR_14, "raw", VAR_15);

 if (FUNC_10(!VAR_15))
  return VAR_8;

 if (FUNC_10(VAR_15 & VAR_0)) {
  if (VAR_15 & VAR_3) {
   FUNC_5(VAR_14, VAR_6, VAR_10);
   FUNC_6(&VAR_13->dev, "TX BUS error\n");
  }
  if (VAR_15 & VAR_2) {
   FUNC_5(VAR_14, VAR_5, VAR_9);
   FUNC_6(&VAR_13->dev, "RX BUS error\n");
  }
 }

 if (FUNC_7(VAR_15 & VAR_1)) {
  FUNC_3(VAR_14, VAR_1);
  FUNC_0("%s: enable polling mode\n", VAR_13->name);
  FUNC_8(&VAR_14->napi);
 }

 FUNC_1(VAR_14, VAR_15);

 return VAR_7;
}
