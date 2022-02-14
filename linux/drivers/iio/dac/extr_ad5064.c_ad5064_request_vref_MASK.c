
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct ad5064_state {int use_internal_vref; TYPE_2__* vref_reg; TYPE_1__* chip_info; } ;
struct TYPE_4__ {int consumer; int supply; } ;
struct TYPE_3__ {int internal_vref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct ad5064_state*) ;
 int FUNC_3 (struct ad5064_state*,int ) ;
 int FUNC_4 (struct ad5064_state*,unsigned int) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*,unsigned int,TYPE_2__*) ;
 int FUNC_7 (struct device*,char*) ;

__attribute__((used)) static int FUNC_8(struct ad5064_state *VAR_2, struct device *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_2); ++VAR_4)
  VAR_2->vref_reg[VAR_4].supply = FUNC_4(VAR_2, VAR_4);

 if (!VAR_2->chip_info->internal_vref)
  return FUNC_6(VAR_3, FUNC_2(VAR_2),
            VAR_2->vref_reg);






 VAR_2->vref_reg[0].consumer = FUNC_7(VAR_3, "vref");
 if (!FUNC_0(VAR_2->vref_reg[0].consumer))
  return 0;

 VAR_5 = FUNC_1(VAR_2->vref_reg[0].consumer);
 if (VAR_5 != -VAR_1)
  return VAR_5;


 VAR_2->use_internal_vref = 1;
 VAR_5 = FUNC_3(VAR_2, VAR_0);
 if (VAR_5)
  FUNC_5(VAR_3, "Failed to enable internal vref: %d\n", VAR_5);

 return VAR_5;
}
