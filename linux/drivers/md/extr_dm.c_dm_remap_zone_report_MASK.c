
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {scalar_t__ len; scalar_t__ begin; } ;
struct blk_zone {scalar_t__ start; scalar_t__ type; scalar_t__ cond; scalar_t__ wp; scalar_t__ len; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct blk_zone*,int ,int) ;

void FUNC_1(struct dm_target *VAR_3, sector_t VAR_4,
     struct blk_zone *VAR_5, unsigned int *VAR_6)
{
 *VAR_6 = 0;

}
