
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nsa320_hwmon {int mcu_data; int update_lock; scalar_t__ last_updated; int act; int data; int clk; } ;
struct device {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,int) ;
 struct nsa320_hwmon* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static s32 FUNC_10(struct device *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 struct nsa320_hwmon *VAR_7 = FUNC_2(VAR_4);

 FUNC_6(&VAR_7->update_lock);

 VAR_5 = VAR_7->mcu_data;

 if (FUNC_8(VAR_3, VAR_7->last_updated + VAR_1) || VAR_5 == 0) {
  FUNC_4(VAR_7->act, 1);
  FUNC_5(100);

  VAR_5 = 0;
  for (VAR_6 = FUNC_0(31); VAR_6; VAR_6 >>= 1) {
   FUNC_4(VAR_7->clk, 0);
   FUNC_9(100, 200);
   FUNC_4(VAR_7->clk, 1);
   FUNC_9(100, 200);
   if (FUNC_3(VAR_7->data))
    VAR_5 |= VAR_6;
  }

  FUNC_4(VAR_7->act, 0);
  FUNC_1(VAR_4, "Read raw MCU data %08x\n", VAR_5);

  if ((VAR_5 >> 24) != VAR_2) {
   FUNC_1(VAR_4, "Read invalid MCU data %08x\n", VAR_5);
   VAR_5 = -VAR_0;
  } else {
   VAR_7->mcu_data = VAR_5;
   VAR_7->last_updated = VAR_3;
  }
 }

 FUNC_7(&VAR_7->update_lock);

 return VAR_5;
}
