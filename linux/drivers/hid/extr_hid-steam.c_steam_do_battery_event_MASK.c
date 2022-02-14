
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct steam_device {int lock; int battery_charge; int voltage; int battery; } ;
struct power_supply {int dummy; } ;
typedef int s16 ;


 scalar_t__ FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct power_supply*) ;
 struct power_supply* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct steam_device *VAR_0,
  struct power_supply *VAR_1, u8 *VAR_2)
{
 unsigned long VAR_3;

 s16 VAR_4 = FUNC_7(VAR_2 + 12);
 u8 VAR_5 = VAR_2[14];


 FUNC_3();
 VAR_1 = FUNC_2(VAR_0->battery);
 if (FUNC_0(VAR_1)) {
  FUNC_5(&VAR_0->lock, VAR_3);
  VAR_0->voltage = VAR_4;
  VAR_0->battery_charge = VAR_5;
  FUNC_6(&VAR_0->lock, VAR_3);
  FUNC_1(VAR_1);
 }
 FUNC_4();
}
