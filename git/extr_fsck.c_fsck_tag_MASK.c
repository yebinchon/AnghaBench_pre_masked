
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int object; struct object* tagged; } ;
struct object {int dummy; } ;
struct fsck_options {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tag*,char const*,unsigned long,struct fsck_options*) ;
 int FUNC_1 (struct fsck_options*,int *,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct tag *VAR_1, const char *VAR_2,
 unsigned long VAR_3, struct fsck_options *VAR_4)
{
 struct object *VAR_5 = VAR_1->tagged;

 if (!VAR_5)
  return FUNC_1(VAR_4, &VAR_1->object, VAR_0, "could not load tagged object");

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
