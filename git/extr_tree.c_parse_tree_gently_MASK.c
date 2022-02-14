
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; scalar_t__ parsed; } ;
struct tree {TYPE_1__ object; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tree*,void*,unsigned long) ;
 void* FUNC_4 (int *,int*,unsigned long*) ;

int FUNC_5(struct tree *VAR_1, int VAR_2)
{
  enum object_type VAR_3;
  void *VAR_4;
  unsigned long VAR_5;

 if (VAR_1->object.parsed)
  return 0;
 VAR_4 = FUNC_4(&VAR_1->object.oid, &VAR_3, &VAR_5);
 if (!VAR_4)
  return VAR_2 ? -1 :
   FUNC_0("Could not read %s",
        FUNC_2(&VAR_1->object.oid));
 if (VAR_3 != VAR_0) {
  FUNC_1(VAR_4);
  return FUNC_0("Object %s not a tree",
        FUNC_2(&VAR_1->object.oid));
 }
 return FUNC_3(VAR_1, VAR_4, VAR_5);
}
