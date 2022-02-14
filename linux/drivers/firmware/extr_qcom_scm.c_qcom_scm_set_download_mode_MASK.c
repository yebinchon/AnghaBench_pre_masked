
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; scalar_t__ dload_mode_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(bool VAR_3)
{
 bool VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_2->dev,
          VAR_1,
          VAR_0);
 if (VAR_4) {
  VAR_5 = FUNC_2(VAR_2->dev, VAR_3);
 } else if (VAR_2->dload_mode_addr) {
  VAR_5 = FUNC_0(VAR_2->dev, VAR_2->dload_mode_addr,
        VAR_3 ? VAR_0 : 0);
 } else {
  FUNC_3(VAR_2->dev,
   "No available mechanism for setting download mode\n");
 }

 if (VAR_5)
  FUNC_3(VAR_2->dev, "failed to set download mode: %d\n", VAR_5);
}
