
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
struct merge_options {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct merge_options*,int ,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct object_id const*) ;
 void* FUNC_4 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_5 (struct strbuf*,void*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct merge_options *VAR_1,
      const struct object_id *VAR_2,
      struct strbuf *VAR_3)
{
 void *VAR_4;
 enum object_type VAR_5;
 unsigned long VAR_6;
 VAR_4 = FUNC_4(VAR_2, &VAR_5, &VAR_6);
 if (!VAR_4)
  return FUNC_1(VAR_1, FUNC_0("cannot read object %s"), FUNC_3(VAR_2));
 if (VAR_5 != VAR_0) {
  FUNC_2(VAR_4);
  return FUNC_1(VAR_1, FUNC_0("object %s is not a blob"), FUNC_3(VAR_2));
 }
 FUNC_5(VAR_3, VAR_4, VAR_6, VAR_6 + 1);
 return 0;
}
