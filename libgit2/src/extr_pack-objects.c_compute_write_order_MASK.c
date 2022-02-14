
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ type; scalar_t__ filled; scalar_t__ tagged; TYPE_1__* delta; struct TYPE_14__* delta_sibling; int * delta_child; } ;
typedef TYPE_2__ git_pobject ;
struct TYPE_15__ {size_t nr_objects; TYPE_2__* object_list; int repo; } ;
typedef TYPE_3__ git_packbuilder ;
struct TYPE_13__ {TYPE_2__* delta_child; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__**,size_t*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__**,size_t*,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__**) ;
 TYPE_2__** FUNC_3 (size_t,int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,int *,TYPE_3__*) ;

__attribute__((used)) static git_pobject **FUNC_6(git_packbuilder *VAR_5)
{
 size_t VAR_6, VAR_7, VAR_8;
 git_pobject **VAR_9;

 if ((VAR_9 = FUNC_3(VAR_5->nr_objects, sizeof(*VAR_9))) == ((void*)0))
  return ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_5->nr_objects; VAR_6++) {
  git_pobject *VAR_10 = VAR_5->object_list + VAR_6;
  VAR_10->tagged = 0;
  VAR_10->filled = 0;
  VAR_10->delta_child = ((void*)0);
  VAR_10->delta_sibling = ((void*)0);
 }






 for (VAR_6 = VAR_5->nr_objects; VAR_6 > 0;) {
  git_pobject *VAR_11 = &VAR_5->object_list[--VAR_6];
  if (!VAR_11->delta)
   continue;

  VAR_11->delta_sibling = VAR_11->delta->delta_child;
  VAR_11->delta->delta_child = VAR_11;
 }




 if (FUNC_5(VAR_5->repo, &VAR_4, VAR_5) < 0) {
  FUNC_2(VAR_9);
  return ((void*)0);
 }





 for (VAR_6 = VAR_7 = 0; VAR_6 < VAR_5->nr_objects; VAR_6++) {
  git_pobject *VAR_12 = VAR_5->object_list + VAR_6;
  if (VAR_12->tagged)
   break;
  FUNC_1(VAR_9, &VAR_7, VAR_12);
 }
 VAR_8 = VAR_6;




 for (; VAR_6 < VAR_5->nr_objects; VAR_6++) {
  git_pobject *VAR_13 = VAR_5->object_list + VAR_6;
  if (VAR_13->tagged)
   FUNC_1(VAR_9, &VAR_7, VAR_13);
 }




 for (VAR_6 = VAR_8; VAR_6 < VAR_5->nr_objects; VAR_6++) {
  git_pobject *VAR_14 = VAR_5->object_list + VAR_6;
  if (VAR_14->type != VAR_1 &&
      VAR_14->type != VAR_2)
   continue;
  FUNC_1(VAR_9, &VAR_7, VAR_14);
 }




 for (VAR_6 = VAR_8; VAR_6 < VAR_5->nr_objects; VAR_6++) {
  git_pobject *VAR_15 = VAR_5->object_list + VAR_6;
  if (VAR_15->type != VAR_3)
   continue;
  FUNC_1(VAR_9, &VAR_7, VAR_15);
 }




 for (VAR_6 = VAR_8; VAR_6 < VAR_5->nr_objects; VAR_6++) {
  git_pobject *VAR_16 = VAR_5->object_list + VAR_6;
  if (!VAR_16->filled)
   FUNC_0(VAR_9, &VAR_7, VAR_16);
 }

 if (VAR_7 != VAR_5->nr_objects) {
  FUNC_2(VAR_9);
  FUNC_4(VAR_0, "invalid write order");
  return ((void*)0);
 }

 return VAR_9;
}
