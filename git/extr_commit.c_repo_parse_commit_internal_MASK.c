
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct TYPE_2__ {int oid; scalar_t__ parsed; } ;
struct commit {TYPE_1__ object; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct repository*,struct commit*,void*,unsigned long,int ) ;
 scalar_t__ FUNC_4 (struct repository*,struct commit*) ;
 void* FUNC_5 (struct repository*,int *,int*,unsigned long*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (struct repository*,struct commit*,void*,unsigned long) ;

int FUNC_7(struct repository *VAR_2,
          struct commit *VAR_3,
          int VAR_4,
          int VAR_5)
{
 enum object_type VAR_6;
 void *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (!VAR_3)
  return -1;
 if (VAR_3->object.parsed)
  return 0;
 if (VAR_5 && FUNC_4(VAR_2, VAR_3))
  return 0;
 VAR_7 = FUNC_5(VAR_2, &VAR_3->object.oid, &VAR_6, &VAR_8);
 if (!VAR_7)
  return VAR_4 ? -1 :
   FUNC_0("Could not read %s",
        FUNC_2(&VAR_3->object.oid));
 if (VAR_6 != VAR_0) {
  FUNC_1(VAR_7);
  return FUNC_0("Object %s not a commit",
        FUNC_2(&VAR_3->object.oid));
 }

 VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_7, VAR_8, 0);
 if (VAR_1 && !VAR_9) {
  FUNC_6(VAR_2, VAR_3, VAR_7, VAR_8);
  return 0;
 }
 FUNC_1(VAR_7);
 return VAR_9;
}
