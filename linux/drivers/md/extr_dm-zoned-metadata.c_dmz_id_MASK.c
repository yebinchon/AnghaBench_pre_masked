
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {struct dm_zone* zones; } ;
struct dm_zone {int dummy; } ;



unsigned int FUNC_0(struct dmz_metadata *VAR_0, struct dm_zone *VAR_1)
{
 return ((unsigned int)(VAR_1 - VAR_0->zones));
}
