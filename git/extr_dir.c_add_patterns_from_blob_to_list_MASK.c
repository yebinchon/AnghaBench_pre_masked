
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_list {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*,size_t,char const*,int,struct pattern_list*) ;
 int FUNC_1 (struct object_id*,int *,size_t*,char**) ;

int FUNC_2(
 struct object_id *VAR_0,
 const char *VAR_1, int VAR_2,
 struct pattern_list *VAR_3)
{
 char *VAR_4;
 size_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, ((void*)0), &VAR_5, &VAR_4);
 if (VAR_6 != 1)
  return VAR_6;

 FUNC_0(VAR_4, VAR_5, VAR_1, VAR_2, VAR_3);
 return 0;
}
