
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; scalar_t__ base; } ;
struct geni_i2c_dev {TYPE_1__ se; int done; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct geni_i2c_dev *VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6 = VAR_0;

 FUNC_3(1, VAR_4->se.base + VAR_2);
 do {
  VAR_6 = FUNC_2(&VAR_4->done, VAR_6);
  VAR_5 = FUNC_1(VAR_4->se.base + VAR_3);
 } while (!(VAR_5 & VAR_1) && VAR_6);

 if (!(VAR_5 & VAR_1))
  FUNC_0(VAR_4->se.dev, "Timeout resetting RX_FSM\n");
}
