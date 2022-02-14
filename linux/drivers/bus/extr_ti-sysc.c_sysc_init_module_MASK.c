
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quirks; } ;
struct sysc {int dev; scalar_t__ legacy_mode; int revision; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sysc*) ;
 int FUNC_2 (struct sysc*) ;
 int FUNC_3 (struct sysc*) ;
 int FUNC_4 (struct sysc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sysc*) ;
 int FUNC_7 (struct sysc*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sysc*) ;
 int FUNC_10 (struct sysc*) ;
 int FUNC_11 (struct sysc*) ;
 int FUNC_12 (struct sysc*) ;
 int FUNC_13 (struct sysc*) ;
 int FUNC_14 (struct sysc*) ;
 int FUNC_15 (struct sysc*,int) ;

__attribute__((used)) static int FUNC_16(struct sysc *VAR_3)
{
 int VAR_4 = 0;
 bool VAR_5 = 1;

 VAR_4 = FUNC_15(VAR_3, 0);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->cfg.quirks &
     (VAR_0 | VAR_1))
  VAR_5 = 0;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_3);





 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  goto err_opt_clocks;

 if (!(VAR_3->cfg.quirks & VAR_2)) {
  VAR_4 = FUNC_15(VAR_3, 1);
  if (VAR_4)
   goto err_main_clocks;
 }

 VAR_3->revision = FUNC_13(VAR_3);
 FUNC_11(VAR_3);
 FUNC_10(VAR_3);

 if (VAR_3->legacy_mode) {
  VAR_4 = FUNC_12(VAR_3);
  if (VAR_4)
   goto err_main_clocks;
 }

 if (!VAR_3->legacy_mode) {
  VAR_4 = FUNC_8(VAR_3->dev);
  if (VAR_4)
   goto err_main_clocks;
 }

 VAR_4 = FUNC_14(VAR_3);
 if (VAR_4)
  FUNC_0(VAR_3->dev, "Reset failed with %d\n", VAR_4);

 if (!VAR_3->legacy_mode && VAR_5)
  FUNC_5(VAR_3->dev);

err_main_clocks:
 if (VAR_5)
  FUNC_4(VAR_3);
err_opt_clocks:

 if (VAR_5) {
  FUNC_6(VAR_3);
  FUNC_1(VAR_3);
 }

 return VAR_4;
}
