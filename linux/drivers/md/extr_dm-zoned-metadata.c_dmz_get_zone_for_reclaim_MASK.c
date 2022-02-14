
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int reserved_seq_zones_list; } ;
struct dm_zone {int dummy; } ;


 struct dm_zone* FUNC_0 (struct dmz_metadata*) ;
 struct dm_zone* FUNC_1 (struct dmz_metadata*) ;
 int FUNC_2 (struct dmz_metadata*) ;
 int FUNC_3 (struct dmz_metadata*) ;
 scalar_t__ FUNC_4 (int *) ;

struct dm_zone *FUNC_5(struct dmz_metadata *VAR_0)
{
 struct dm_zone *VAR_1;
 FUNC_2(VAR_0);
 if (FUNC_4(&VAR_0->reserved_seq_zones_list))
  VAR_1 = FUNC_1(VAR_0);
 else
  VAR_1 = FUNC_0(VAR_0);
 FUNC_3(VAR_0);

 return VAR_1;
}
