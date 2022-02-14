
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oid; } ;
struct object_entry {TYPE_1__ idx; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_5__ {int oid; } ;
struct TYPE_6__ {TYPE_2__ idx; } ;


 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (struct object_entry*) ;
 unsigned long FUNC_2 (struct object_entry*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 void* FUNC_5 (void*,unsigned long,void*,unsigned long,unsigned long*,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int *,int*,unsigned long*) ;

__attribute__((used)) static void *FUNC_9(struct object_entry *VAR_0)
{
 unsigned long VAR_1, VAR_2, VAR_3;
 void *VAR_4, *VAR_5, *VAR_6;
 enum object_type VAR_7;

 VAR_4 = FUNC_8(&VAR_0->idx.oid, &VAR_7, &VAR_1);
 if (!VAR_4)
  FUNC_4(FUNC_3("unable to read %s"), FUNC_7(&VAR_0->idx.oid));
 VAR_5 = FUNC_8(&FUNC_1(VAR_0)->idx.oid, &VAR_7,
        &VAR_2);
 if (!VAR_5)
  FUNC_4("unable to read %s",
      FUNC_7(&FUNC_1(VAR_0)->idx.oid));
 VAR_6 = FUNC_5(VAR_5, VAR_2,
          VAR_4, VAR_1, &VAR_3, 0);





 if (!VAR_6 || VAR_3 != FUNC_2(VAR_0))
  FUNC_0("delta size changed");
 FUNC_6(VAR_4);
 FUNC_6(VAR_5);
 return VAR_6;
}
