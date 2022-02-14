
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sun8i_mixer {TYPE_1__* cfg; } ;
struct TYPE_2__ {int vi_num; scalar_t__ is_de3; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_0(struct sun8i_mixer *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_6->cfg->vi_num;

 if (VAR_6->cfg->is_de3)
  return VAR_4 +
         VAR_5 * VAR_8 +
         VAR_3 * (VAR_7 - VAR_8);
 else
  return VAR_1 +
         VAR_2 * VAR_8 +
         VAR_0 * (VAR_7 - VAR_8);
}
