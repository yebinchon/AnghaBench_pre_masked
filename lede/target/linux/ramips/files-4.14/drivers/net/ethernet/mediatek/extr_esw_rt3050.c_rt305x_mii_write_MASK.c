
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt305x_esw {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rt305x_esw*,int ) ;
 int FUNC_2 (struct rt305x_esw*,int,int ) ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static u32 FUNC_4(struct rt305x_esw *VAR_8, u32 VAR_9,
       u32 VAR_10, u32 VAR_11)
{
 unsigned long VAR_12 = VAR_7;
 int VAR_13 = 0;

 while (1) {
  if (!(FUNC_1(VAR_8, VAR_6) &
        VAR_3))
   break;
  if (FUNC_3(VAR_7, VAR_12 + VAR_4)) {
   VAR_13 = 1;
   goto out;
  }
 }

 VAR_11 &= 0xffff;
 FUNC_2(VAR_8, (VAR_11 << VAR_1) |
        (VAR_10 << VAR_0) |
        (VAR_9) | VAR_2,
  VAR_5);

 VAR_12 = VAR_7;
 while (1) {
  if (FUNC_1(VAR_8, VAR_6) &
       VAR_3)
   break;

  if (FUNC_3(VAR_7, VAR_12 + VAR_4)) {
   VAR_13 = 1;
   break;
  }
 }
out:
 if (VAR_13)
  FUNC_0(VAR_8->dev, "ramips_eth: MDIO timeout\n");
 return VAR_13;
}
