
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (struct object_id const*,void*,unsigned long,char const*) ;
 int FUNC_1 (void*) ;
 struct object_id* FUNC_2 (int ,struct object_id const*) ;
 void* FUNC_3 (struct object_id const*,int*,unsigned long*) ;
 int VAR_0 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const struct object_id *VAR_1, const char *VAR_2)
{
 int VAR_3 = -1;
 enum object_type VAR_4;
 unsigned long VAR_5;
 void *VAR_6 = FUNC_3(VAR_1, &VAR_4, &VAR_5);
 const struct object_id *VAR_7 = FUNC_2(VAR_0, VAR_1);

 if (VAR_6) {
  if (VAR_4 == FUNC_4(VAR_2))
   VAR_3 = FUNC_0(VAR_7, VAR_6, VAR_5, VAR_2);
  FUNC_1(VAR_6);
 }
 return VAR_3;
}
