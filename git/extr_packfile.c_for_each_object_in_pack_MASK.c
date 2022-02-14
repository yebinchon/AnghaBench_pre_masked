
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct packed_git {size_t num_objects; char* pack_name; TYPE_1__* revindex; } ;
struct object_id {int dummy; } ;
typedef enum for_each_object_flags { ____Placeholder_for_each_object_flags } for_each_object_flags ;
typedef int (* each_packed_object_fn ) (struct object_id*,struct packed_git*,size_t,void*) ;
struct TYPE_2__ {size_t nr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*) ;
 scalar_t__ FUNC_1 (struct packed_git*) ;
 int FUNC_2 (struct object_id*,struct packed_git*,size_t) ;

int FUNC_3(struct packed_git *VAR_1,
       each_packed_object_fn VAR_2, void *VAR_3,
       enum for_each_object_flags VAR_4)
{
 uint32_t VAR_5;
 int VAR_6 = 0;

 if (VAR_4 & VAR_0) {
  if (FUNC_1(VAR_1))
   return -1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_1->num_objects; VAR_5++) {
  uint32_t VAR_7;
  struct object_id VAR_8;

  if (VAR_4 & VAR_0)
   VAR_7 = VAR_1->revindex[VAR_5].nr;
  else
   VAR_7 = VAR_5;

  if (!FUNC_2(&VAR_8, VAR_1, VAR_7))
   return FUNC_0("unable to get sha1 of object %u in %s",
         VAR_7, VAR_1->pack_name);

  VAR_6 = VAR_2(&VAR_8, VAR_1, VAR_7, VAR_3);
  if (VAR_6)
   break;
 }
 return VAR_6;
}
