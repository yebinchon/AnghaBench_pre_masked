
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int max_age; int track_linear; int ignore_missing_links; int commits; scalar_t__ topo_walk_info; scalar_t__ reflog_info; int limited; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct rev_info*,struct commit*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct rev_info*,struct commit*) ;
 struct commit* FUNC_3 (scalar_t__) ;
 struct commit* FUNC_4 (struct rev_info*) ;
 int FUNC_5 (int *) ;
 struct commit* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct rev_info*,struct commit*,int *,int *) ;
 int FUNC_8 (struct rev_info*,struct commit*) ;
 int FUNC_9 (struct rev_info*,struct commit*) ;
 int FUNC_10 (struct rev_info*,struct commit*) ;

__attribute__((used)) static struct commit *FUNC_11(struct rev_info *VAR_3)
{
 while (1) {
  struct commit *VAR_4;

  if (VAR_3->reflog_info)
   VAR_4 = FUNC_3(VAR_3->reflog_info);
  else if (VAR_3->topo_walk_info)
   VAR_4 = FUNC_4(VAR_3);
  else
   VAR_4 = FUNC_6(&VAR_3->commits);

  if (!VAR_4)
   return ((void*)0);

  if (VAR_3->reflog_info)
   VAR_4->object.flags &= ~(VAR_0 | VAR_1 | VAR_2);






  if (!VAR_3->limited) {
   if (VAR_3->max_age != -1 &&
       FUNC_0(VAR_3, VAR_4) < VAR_3->max_age)
    continue;

   if (VAR_3->reflog_info)
    FUNC_10(VAR_3, VAR_4);
   else if (VAR_3->topo_walk_info)
    FUNC_2(VAR_3, VAR_4);
   else if (FUNC_7(VAR_3, VAR_4, &VAR_3->commits, ((void*)0)) < 0) {
    if (!VAR_3->ignore_missing_links)
     FUNC_1("Failed to traverse parents of commit %s",
      FUNC_5(&VAR_4->object.oid));
   }
  }

  switch (FUNC_8(VAR_3, VAR_4)) {
  case 128:
   continue;
  case 129:
   FUNC_1("Failed to simplify parents of commit %s",
       FUNC_5(&VAR_4->object.oid));
  default:
   if (VAR_3->track_linear)
    FUNC_9(VAR_3, VAR_4);
   return VAR_4;
  }
 }
}
