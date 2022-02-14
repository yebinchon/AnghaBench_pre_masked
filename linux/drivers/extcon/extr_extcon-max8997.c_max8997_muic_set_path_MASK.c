
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max8997_muic_info {int dev; int muic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int,char*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct max8997_muic_info *VAR_6,
  u8 VAR_7, bool VAR_8)
{
 int VAR_9;
 u8 VAR_10, VAR_11 = 0;

 if (VAR_8)
  VAR_10 = VAR_7;
 else
  VAR_10 = VAR_1;

 VAR_9 = FUNC_2(VAR_6->muic,
   VAR_4, VAR_10, VAR_0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->dev, "failed to update MUIC register\n");
  return VAR_9;
 }

 if (VAR_8)
  VAR_11 |= VAR_2;
 else
  VAR_11 |= VAR_3;

 VAR_9 = FUNC_2(VAR_6->muic,
   VAR_5, VAR_11,
   VAR_3 | VAR_2);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->dev, "failed to update MUIC register\n");
  return VAR_9;
 }

 FUNC_1(VAR_6->dev,
  "CONTROL1 : 0x%02x, CONTROL2 : 0x%02x, state : %s\n",
  VAR_10, VAR_11, VAR_8 ? "attached" : "detached");

 return 0;
}
