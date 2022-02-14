
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_array {unsigned int nr; struct object_array_entry* objects; } ;
struct rev_info {int sort_order; int * commits; struct object_array boundary_commits; } ;
struct object_array_entry {scalar_t__ item; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct commit*,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ) ;

__attribute__((used)) static void FUNC_3(struct rev_info *VAR_3)
{
 unsigned VAR_4;
 struct commit *VAR_5;
 struct object_array *VAR_6 = &VAR_3->boundary_commits;
 struct object_array_entry *VAR_7 = VAR_6->objects;







 if (VAR_3->commits) {
  FUNC_1(VAR_3->commits);
  VAR_3->commits = ((void*)0);
 }





 for (VAR_4 = 0; VAR_4 < VAR_6->nr; VAR_4++) {
  VAR_5 = (struct commit *)(VAR_7[VAR_4].item);
  if (!VAR_5)
   continue;
  if (!(VAR_5->object.flags & VAR_1))
   continue;
  if (VAR_5->object.flags & (VAR_2 | VAR_0))
   continue;
  VAR_5->object.flags |= VAR_0;
  FUNC_0(VAR_5, &VAR_3->commits);
 }





 FUNC_2(&VAR_3->commits, VAR_3->sort_order);
}
