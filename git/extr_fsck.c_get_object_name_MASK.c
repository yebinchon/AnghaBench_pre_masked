
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct fsck_options {int object_names; } ;


 char* FUNC_0 (int ,struct object*) ;

__attribute__((used)) static char *FUNC_1(struct fsck_options *VAR_0, struct object *VAR_1)
{
 if (!VAR_0->object_names)
  return ((void*)0);
 return FUNC_0(VAR_0->object_names, VAR_1);
}
