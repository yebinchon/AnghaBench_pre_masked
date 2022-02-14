
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct object_id const*) ;
 char* FUNC_2 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_3 (struct string_list*,char*,char,int) ;

__attribute__((used)) static int FUNC_4(struct string_list *VAR_1,
          const struct object_id *VAR_2)
{
 char *VAR_3;
 unsigned long VAR_4;
 enum object_type VAR_5;

 if (FUNC_1(VAR_2))
  return 0;


 VAR_3 = FUNC_2(VAR_2, &VAR_5, &VAR_4);
 if (VAR_5 != VAR_0 || !VAR_3 || !VAR_4) {
  FUNC_0(VAR_3);
  return VAR_5 != VAR_0 || !VAR_3;
 }







 FUNC_3(VAR_1, VAR_3, '\n', -1);
 FUNC_0(VAR_3);
 return 0;
}
