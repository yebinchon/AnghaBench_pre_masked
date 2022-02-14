
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct object_id const*) ;
 void* FUNC_3 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_4 (struct object_id const*,void*,unsigned long) ;

__attribute__((used)) static void FUNC_5(const struct object_id *VAR_1,
       const struct object_id *VAR_2)
{
 enum object_type VAR_3;
 unsigned long VAR_4;
 void *VAR_5 = FUNC_3(VAR_2, &VAR_3, &VAR_4);

 if (!VAR_5)
  FUNC_0("cannot read note %s for object %s",
      FUNC_2(VAR_2), FUNC_2(VAR_1));
 if (VAR_3 != VAR_0)
  FUNC_0("blob expected in note %s for object %s",
      FUNC_2(VAR_2), FUNC_2(VAR_1));
 FUNC_4(VAR_1, VAR_5, VAR_4);
 FUNC_1(VAR_5);
}
