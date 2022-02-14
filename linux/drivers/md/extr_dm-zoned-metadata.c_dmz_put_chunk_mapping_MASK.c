
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int dummy; } ;
struct dm_zone {struct dm_zone* bzone; } ;


 int FUNC_0 (struct dm_zone*) ;
 int FUNC_1 (struct dmz_metadata*,struct dm_zone*) ;
 scalar_t__ FUNC_2 (struct dm_zone*) ;
 int FUNC_3 (struct dmz_metadata*) ;
 int FUNC_4 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_5 (struct dmz_metadata*) ;
 int FUNC_6 (struct dmz_metadata*,struct dm_zone*) ;
 scalar_t__ FUNC_7 (struct dm_zone*) ;

void FUNC_8(struct dmz_metadata *VAR_0, struct dm_zone *VAR_1)
{
 struct dm_zone *VAR_2;

 FUNC_3(VAR_0);

 VAR_2 = VAR_1->bzone;
 if (VAR_2) {
  if (FUNC_7(VAR_2))
   FUNC_4(VAR_0, VAR_2);
  else {

   FUNC_6(VAR_0, VAR_2);
   FUNC_1(VAR_0, VAR_2);
   VAR_2 = ((void*)0);
  }
 }


 FUNC_0(VAR_1);
 if (FUNC_2(VAR_1) || VAR_2 || FUNC_7(VAR_1))
  FUNC_4(VAR_0, VAR_1);
 else {

  FUNC_6(VAR_0, VAR_1);
  FUNC_1(VAR_0, VAR_1);
 }

 FUNC_5(VAR_0);
}
