
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int array_sectors; scalar_t__ external_size; int reconfig_mutex; } ;
typedef int sector_t ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mddev *VAR_0, sector_t VAR_1)
{
 FUNC_0(&VAR_0->reconfig_mutex);

 if (VAR_0->external_size)
  return;

 VAR_0->array_sectors = VAR_1;
}
