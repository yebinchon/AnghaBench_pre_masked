
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int dev; scalar_t__ base; } ;
struct geni_i2c_dev {TYPE_1__ se; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct geni_i2c_dev *VAR_9)
{
 u32 VAR_10 = FUNC_1(VAR_9->se.base + VAR_4);
 u32 VAR_11 = FUNC_1(VAR_9->se.base + VAR_5);
 u32 VAR_12 = FUNC_1(VAR_9->se.base + VAR_7);
 u32 VAR_13 = FUNC_1(VAR_9->se.base + VAR_3);
 u32 VAR_14 = FUNC_1(VAR_9->se.base + VAR_2);
 u32 VAR_15, VAR_16;

 if (VAR_14) {
  VAR_15 = FUNC_1(VAR_9->se.base + VAR_0);
  VAR_16 = FUNC_1(VAR_9->se.base + VAR_1);
 } else {
  VAR_15 = FUNC_1(VAR_9->se.base + VAR_6);
  VAR_16 = FUNC_1(VAR_9->se.base + VAR_8);
 }
 FUNC_0(VAR_9->se.dev, "DMA:%d tx_stat:0x%x, rx_stat:0x%x, irq-stat:0x%x\n",
  VAR_14, VAR_16, VAR_15, VAR_11);
 FUNC_0(VAR_9->se.dev, "m_cmd:0x%x, geni_status:0x%x, geni_ios:0x%x\n",
  VAR_10, VAR_12, VAR_13);
}
