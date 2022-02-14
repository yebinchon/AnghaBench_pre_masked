
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * is_visible; int show_label; int show_name; int irq_handler; int read_sensor; } ;
struct abx500_temp {TYPE_3__ ops; int monitored_sensors; int * gpadc_addr; struct ab8500_temp* plat_data; TYPE_1__* pdev; } ;
struct TYPE_5__ {int tbl_sz; int temp_tbl; int r_up; int vcc; } ;
struct ab8500_temp {TYPE_2__ cfg; int power_off_work; int btemp; int gpadc; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ab8500_temp* FUNC_5 (int *,int,int ) ;

int FUNC_6(struct abx500_temp *VAR_16)
{
 struct ab8500_temp *VAR_17;

 VAR_17 = FUNC_5(&VAR_16->pdev->dev, sizeof(*VAR_17),
  VAR_5);
 if (!VAR_17)
  return -VAR_4;

 VAR_17->gpadc = FUNC_4("ab8500-gpadc.0");
 if (FUNC_1(VAR_17->gpadc))
  return FUNC_2(VAR_17->gpadc);

 VAR_17->btemp = FUNC_3();
 if (FUNC_1(VAR_17->btemp))
  return FUNC_2(VAR_17->btemp);

 FUNC_0(&VAR_17->power_off_work,
     VAR_15);

 VAR_17->cfg.vcc = VAR_8;
 VAR_17->cfg.r_up = VAR_7;
 VAR_17->cfg.temp_tbl = VAR_14;
 VAR_17->cfg.tbl_sz = VAR_13;

 VAR_16->plat_data = VAR_17;





 VAR_16->gpadc_addr[0] = VAR_0;
 VAR_16->gpadc_addr[1] = VAR_1;
 VAR_16->gpadc_addr[2] = VAR_3;
 VAR_16->gpadc_addr[3] = VAR_2;
 VAR_16->monitored_sensors = VAR_6;

 VAR_16->ops.read_sensor = VAR_9;
 VAR_16->ops.irq_handler = VAR_12;
 VAR_16->ops.show_name = VAR_11;
 VAR_16->ops.show_label = VAR_10;
 VAR_16->ops.is_visible = ((void*)0);

 return 0;
}
