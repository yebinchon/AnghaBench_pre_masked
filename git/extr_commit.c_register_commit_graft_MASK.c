
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repository {TYPE_2__* parsed_objects; } ;
struct TYPE_3__ {int hash; } ;
struct commit_graft {TYPE_1__ oid; } ;
struct TYPE_4__ {int grafts_nr; struct commit_graft** grafts; int grafts_alloc; } ;


 int FUNC_0 (struct commit_graft**,int,int ) ;
 int FUNC_1 (struct repository*,int ) ;
 int FUNC_2 (struct commit_graft*) ;
 int FUNC_3 (struct commit_graft**,struct commit_graft**,int) ;

int FUNC_4(struct repository *VAR_0, struct commit_graft *VAR_1,
     int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1->oid.hash);

 if (0 <= VAR_3) {
  if (VAR_2)
   FUNC_2(VAR_1);
  else {
   FUNC_2(VAR_0->parsed_objects->grafts[VAR_3]);
   VAR_0->parsed_objects->grafts[VAR_3] = VAR_1;
  }
  return 1;
 }
 VAR_3 = -VAR_3 - 1;
 FUNC_0(VAR_0->parsed_objects->grafts,
     VAR_0->parsed_objects->grafts_nr + 1,
     VAR_0->parsed_objects->grafts_alloc);
 VAR_0->parsed_objects->grafts_nr++;
 if (VAR_3 < VAR_0->parsed_objects->grafts_nr)
  FUNC_3(VAR_0->parsed_objects->grafts + VAR_3 + 1,
   VAR_0->parsed_objects->grafts + VAR_3,
   (VAR_0->parsed_objects->grafts_nr - VAR_3 - 1) *
   sizeof(*VAR_0->parsed_objects->grafts));
 VAR_0->parsed_objects->grafts[VAR_3] = VAR_1;
 return 0;
}
