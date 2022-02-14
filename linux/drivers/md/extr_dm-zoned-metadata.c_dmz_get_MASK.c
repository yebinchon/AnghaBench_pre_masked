
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {struct dm_zone* zones; } ;
struct dm_zone {int dummy; } ;



__attribute__((used)) static struct dm_zone *FUNC_0(struct dmz_metadata *VAR_0, unsigned int VAR_1)
{
 return &VAR_0->zones[VAR_1];
}
