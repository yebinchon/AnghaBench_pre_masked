
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad5064_state {TYPE_1__* chip_info; } ;
struct TYPE_2__ {int regmap_type; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

 int FUNC_0 (struct ad5064_state*,unsigned int,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct ad5064_state *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 switch (VAR_2->chip_info->regmap_type) {
 case 128:
  VAR_4 = VAR_1;
  break;
 default:
  VAR_4 = VAR_0;
  break;
 }

 return FUNC_0(VAR_2, VAR_4, 0, VAR_3, 0);
}
