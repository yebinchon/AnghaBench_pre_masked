
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int dummy; } ;
struct dm_zone {struct dm_zone* bzone; } ;


 int FUNC_0 (struct dmz_metadata*,struct dm_zone*) ;

__attribute__((used)) static void FUNC_1(struct dmz_metadata *VAR_0, struct dm_zone *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 if (VAR_1->bzone)
  FUNC_0(VAR_0, VAR_1->bzone);
}
