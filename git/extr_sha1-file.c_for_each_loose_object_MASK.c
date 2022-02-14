
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct object_directory {int path; struct object_directory* next; } ;
typedef enum for_each_object_flags { ____Placeholder_for_each_object_flags } for_each_object_flags ;
typedef int each_loose_object_fn ;
struct TYPE_5__ {TYPE_1__* objects; } ;
struct TYPE_4__ {struct object_directory* odb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *,void*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;

int FUNC_2(each_loose_object_fn VAR_2, void *VAR_3,
     enum for_each_object_flags VAR_4)
{
 struct object_directory *VAR_5;

 FUNC_1(VAR_1);
 for (VAR_5 = VAR_1->objects->odb; VAR_5; VAR_5 = VAR_5->next) {
  int VAR_6 = FUNC_0(VAR_5->path, VAR_2, ((void*)0),
            ((void*)0), VAR_3);
  if (VAR_6)
   return VAR_6;

  if (VAR_4 & VAR_0)
   break;
 }

 return 0;
}
