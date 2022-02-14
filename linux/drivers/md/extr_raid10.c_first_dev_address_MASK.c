
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geom {int chunk_shift; int near_copies; int far_copies; int raid_disks; } ;
typedef int sector_t ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static sector_t FUNC_1(sector_t VAR_0, struct geom *VAR_1)
{
 VAR_0 >>= VAR_1->chunk_shift;
 VAR_0 *= VAR_1->near_copies;
 FUNC_0(VAR_0, VAR_1->raid_disks);
 VAR_0 *= VAR_1->far_copies;
 VAR_0 <<= VAR_1->chunk_shift;
 return VAR_0;
}
