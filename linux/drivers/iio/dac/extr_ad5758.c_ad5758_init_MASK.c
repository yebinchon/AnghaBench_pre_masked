
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reg; } ;
struct ad5758_state {scalar_t__ slew_time; TYPE_2__ out_range; int dc_dc_mode; int dc_dc_ilim; int gpio_reset; TYPE_1__* spi; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ad5758_state*) ;
 int FUNC_4 (struct ad5758_state*) ;
 int FUNC_5 (struct ad5758_state*,int) ;
 int FUNC_6 (struct ad5758_state*) ;
 int FUNC_7 (struct ad5758_state*,int ) ;
 int FUNC_8 (struct ad5758_state*,int ) ;
 int FUNC_9 (struct ad5758_state*,int ) ;
 int FUNC_10 (struct ad5758_state*) ;
 int FUNC_11 (struct ad5758_state*,int ) ;
 int FUNC_12 (struct ad5758_state*,int ,int) ;
 int FUNC_13 (struct ad5758_state*,int ,int ,int ) ;
 int FUNC_14 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_15(struct ad5758_state *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_4->gpio_reset = FUNC_14(&VAR_4->spi->dev, "reset",
       VAR_3);
 if (FUNC_1(VAR_4->gpio_reset))
  return FUNC_2(VAR_4->gpio_reset);


 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_11(VAR_4, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_6 = FUNC_12(VAR_4, VAR_2, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_8(VAR_4, VAR_4->dc_dc_ilim);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_7(VAR_4, VAR_4->dc_dc_mode);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_9(VAR_4, VAR_4->out_range.reg);
 if (VAR_6 < 0)
  return VAR_6;


 if (VAR_4->slew_time) {
  VAR_6 = FUNC_10(VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
 }


 VAR_6 = FUNC_5(VAR_4, 1);
 if (VAR_6 < 0)
  return VAR_6;


 return FUNC_13(VAR_4, VAR_0,
         VAR_1,
         FUNC_0(1));
}
