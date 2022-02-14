
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct object_id {int dummy; } ;
struct grab_nth_branch_switch_cbdata {scalar_t__ remaining; int sb; } ;


 scalar_t__ FUNC_0 (char const*,char*,char const**) ;
 int FUNC_1 (int ,char const*,size_t) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(struct object_id *VAR_0, struct object_id *VAR_1,
      const char *VAR_2, timestamp_t VAR_3, int VAR_4,
      const char *VAR_5, void *VAR_6)
{
 struct grab_nth_branch_switch_cbdata *VAR_7 = VAR_6;
 const char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 size_t VAR_10;

 if (FUNC_0(VAR_5, "checkout: moving from ", &VAR_8))
  VAR_9 = FUNC_3(VAR_8, " to ");

 if (!VAR_8 || !VAR_9)
  return 0;
 if (--(VAR_7->remaining) == 0) {
  VAR_10 = VAR_9 - VAR_8;
  FUNC_2(VAR_7->sb);
  FUNC_1(VAR_7->sb, VAR_8, VAR_10);
  return 1;
 }
 return 0;
}
