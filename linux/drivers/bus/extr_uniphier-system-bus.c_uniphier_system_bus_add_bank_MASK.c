
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct uniphier_system_bus_priv {TYPE_1__* bank; int dev; } ;
struct TYPE_2__ {int base; int end; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int,int,...) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct uniphier_system_bus_priv *VAR_2,
     int VAR_3, u32 VAR_4, u64 VAR_5, u32 VAR_6)
{
 u64 VAR_7, VAR_8;

 FUNC_1(VAR_2->dev,
  "range found: bank = %d, addr = %08x, paddr = %08llx, size = %08x\n",
  VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_3 >= FUNC_0(VAR_2->bank)) {
  FUNC_2(VAR_2->dev, "unsupported bank number %d\n", VAR_3);
  return -VAR_0;
 }

 if (VAR_2->bank[VAR_3].base || VAR_2->bank[VAR_3].end) {
  FUNC_2(VAR_2->dev,
   "range for bank %d has already been specified\n", VAR_3);
  return -VAR_0;
 }

 if (VAR_5 > VAR_1) {
  FUNC_2(VAR_2->dev, "base address %llx is too high\n", VAR_5);
  return -VAR_0;
 }

 VAR_7 = VAR_5 + VAR_6;

 if (VAR_4 > VAR_5) {
  FUNC_2(VAR_2->dev,
   "base %08x cannot be mapped to %08llx of parent\n",
   VAR_4, VAR_5);
  return -VAR_0;
 }
 VAR_5 -= VAR_4;

 VAR_5 = FUNC_3(VAR_5, 0x00020000);
 VAR_7 = FUNC_4(VAR_7, 0x00020000);

 if (VAR_7 > VAR_1) {
  FUNC_2(VAR_2->dev, "end address %08llx is too high\n", VAR_7);
  return -VAR_0;
 }
 VAR_8 = VAR_5 ^ (VAR_7 - 1);
 VAR_8 = FUNC_5(VAR_8);

 VAR_5 = FUNC_3(VAR_5, VAR_8);
 VAR_7 = FUNC_4(VAR_7, VAR_8);

 VAR_2->bank[VAR_3].base = VAR_5;
 VAR_2->bank[VAR_3].end = VAR_7;

 FUNC_1(VAR_2->dev, "range added: bank = %d, addr = %08x, end = %08x\n",
  VAR_3, VAR_2->bank[VAR_3].base, VAR_2->bank[VAR_3].end);

 return 0;
}
