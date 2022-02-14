
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sun8i_mixer {TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ is_de3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct sun8i_mixer *VAR_4, int VAR_5)
{
 if (VAR_4->cfg->is_de3)
  return VAR_2 +
         VAR_3 * VAR_5;
 else
  return VAR_0 +
         VAR_1 * VAR_5;
}
