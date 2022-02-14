
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct fsck_options {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsck_options*,struct object*) ;
 int FUNC_1 (char*,int ,char const*) ;
 int FUNC_2 (char*,int ,char const*) ;

int FUNC_3(struct fsck_options *VAR_1,
 struct object *VAR_2, int VAR_3, const char *VAR_4)
{
 if (VAR_3 == VAR_0) {
  FUNC_2("object %s: %s", FUNC_0(VAR_1, VAR_2), VAR_4);
  return 0;
 }
 FUNC_1("object %s: %s", FUNC_0(VAR_1, VAR_2), VAR_4);
 return 1;
}
