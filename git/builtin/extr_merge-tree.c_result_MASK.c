
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct merge_list {char* path; int stage; struct blob* blob; struct merge_list* link; } ;
struct TYPE_3__ {int oid; } ;
struct blob {TYPE_1__ object; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {int index; } ;


 void* FUNC_0 (int ,char const*,struct blob*,struct blob*,struct blob*,unsigned long*) ;
 void* FUNC_1 (int *,int*,unsigned long*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void *FUNC_2(struct merge_list *VAR_1, unsigned long *VAR_2)
{
 enum object_type VAR_3;
 struct blob *VAR_4, *VAR_5, *VAR_6;
 const char *VAR_7 = VAR_1->path;

 if (!VAR_1->stage)
  return FUNC_1(&VAR_1->blob->object.oid, &VAR_3, VAR_2);
 VAR_4 = ((void*)0);
 if (VAR_1->stage == 1) {
  VAR_4 = VAR_1->blob;
  VAR_1 = VAR_1->link;
 }
 VAR_5 = ((void*)0);
 if (VAR_1 && VAR_1->stage == 2) {
  VAR_5 = VAR_1->blob;
  VAR_1 = VAR_1->link;
 }
 VAR_6 = ((void*)0);
 if (VAR_1)
  VAR_6 = VAR_1->blob;
 return FUNC_0(VAR_0->index, VAR_7,
      VAR_4, VAR_5, VAR_6, VAR_2);
}
