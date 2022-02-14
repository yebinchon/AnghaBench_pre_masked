
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct object* FUNC_0 (struct object_id const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, const char *VAR_3,
   const struct object_id *VAR_4)
{
 struct object *VAR_5 = FUNC_0(VAR_4);

 if (FUNC_1(VAR_2, VAR_3)) {
  VAR_5->flags |= VAR_0;
  return 1;
 }
 VAR_5->flags |= VAR_1;
 return 0;
}
