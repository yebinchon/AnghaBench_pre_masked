
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {int ** index; } ;
typedef int sector_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline sector_t *FUNC_0(struct dm_table *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 return VAR_1->index[VAR_2] + (VAR_3 * VAR_0);
}
