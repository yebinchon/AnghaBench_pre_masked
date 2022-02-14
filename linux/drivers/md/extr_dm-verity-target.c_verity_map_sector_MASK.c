
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_verity {int ti; scalar_t__ data_start; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static sector_t FUNC_1(struct dm_verity *VAR_0, sector_t VAR_1)
{
 return VAR_0->data_start + FUNC_0(VAR_0->ti, VAR_1);
}
