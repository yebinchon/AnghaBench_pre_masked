
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct TYPE_8__ {int oid; } ;
struct blob {TYPE_1__ object; } ;
struct TYPE_9__ {scalar_t__ size; int ptr; } ;
typedef TYPE_2__ mmfile_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 scalar_t__ FUNC_0 (TYPE_2__*,struct blob*) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int *,int*,unsigned long*) ;
 void* FUNC_3 (struct index_state*,char const*,TYPE_2__*,TYPE_2__*,TYPE_2__*,unsigned long*) ;
 int FUNC_4 (char*) ;

void *FUNC_5(struct index_state *VAR_0, const char *VAR_1,
    struct blob *VAR_2, struct blob *VAR_3,
    struct blob *VAR_4, unsigned long *VAR_5)
{
 void *VAR_6 = ((void*)0);
 mmfile_t VAR_7, VAR_8, VAR_9;
 if (!VAR_3 || !VAR_4) {
  enum object_type VAR_10;
  if (VAR_2)
   return ((void*)0);
  if (!VAR_3)
   VAR_3 = VAR_4;
  return FUNC_2(&VAR_3->object.oid, &VAR_10, VAR_5);
 }

 if (FUNC_0(&VAR_7, VAR_3) < 0)
  goto out_no_mmfile;
 if (FUNC_0(&VAR_8, VAR_4) < 0)
  goto out_free_f1;

 if (VAR_2) {
  if (FUNC_0(&VAR_9, VAR_2) < 0)
   goto out_free_f2_f1;
 } else {
  VAR_9.ptr = FUNC_4("");
  VAR_9.size = 0;
 }
 VAR_6 = FUNC_3(VAR_0, VAR_1, &VAR_9, &VAR_7, &VAR_8, VAR_5);
 FUNC_1(&VAR_9);
out_free_f2_f1:
 FUNC_1(&VAR_8);
out_free_f1:
 FUNC_1(&VAR_7);
out_no_mmfile:
 return VAR_6;
}
