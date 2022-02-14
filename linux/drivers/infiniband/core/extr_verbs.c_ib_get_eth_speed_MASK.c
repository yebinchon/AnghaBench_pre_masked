
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int name; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct net_device*,struct ethtool_link_ksettings*) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct ib_device*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(struct ib_device *VAR_14, u8 VAR_15, u8 *VAR_16, u8 *VAR_17)
{
 int VAR_18;
 u32 VAR_19;
 struct net_device *VAR_20;
 struct ethtool_link_ksettings VAR_21;

 if (FUNC_4(VAR_14, VAR_15) != VAR_2)
  return -VAR_0;

 VAR_20 = FUNC_2(VAR_14, VAR_15);
 if (!VAR_20)
  return -VAR_1;

 FUNC_5();
 VAR_18 = FUNC_0(VAR_20, &VAR_21);
 FUNC_6();

 FUNC_1(VAR_20);

 if (!VAR_18) {
  VAR_19 = VAR_21.base.speed;
 } else {
  VAR_19 = VAR_9;
  FUNC_3("%s speed is unknown, defaulting to %d\n", VAR_20->name,
   VAR_19);
 }

 if (VAR_19 <= VAR_9) {
  *VAR_17 = VAR_7;
  *VAR_16 = VAR_6;
 } else if (VAR_19 <= VAR_10) {
  *VAR_17 = VAR_7;
  *VAR_16 = VAR_5;
 } else if (VAR_19 <= VAR_11) {
  *VAR_17 = VAR_8;
  *VAR_16 = VAR_3;
 } else if (VAR_19 <= VAR_12) {
  *VAR_17 = VAR_7;
  *VAR_16 = VAR_4;
 } else if (VAR_19 <= VAR_13) {
  *VAR_17 = VAR_8;
  *VAR_16 = VAR_5;
 } else {
  *VAR_17 = VAR_8;
  *VAR_16 = VAR_4;
 }

 return 0;
}
