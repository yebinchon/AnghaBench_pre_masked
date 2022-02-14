
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int * util; } ;
struct strbuf {int buf; } ;
struct rename_info {int remote_branches; int old_name; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 char* FUNC_0 (char const*,int ,int *,int*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct strbuf*,char*,int ) ;
 int FUNC_3 (struct strbuf*) ;
 struct string_list_item* FUNC_4 (int ,char const*) ;
 int * FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3,
 const struct object_id *VAR_4, int VAR_5, void *VAR_6)
{
 struct rename_info *VAR_7 = VAR_6;
 struct strbuf VAR_8 = VAR_2;
 struct string_list_item *VAR_9;
 int VAR_10;
 const char *VAR_11;

 FUNC_2(&VAR_8, "refs/remotes/%s/", VAR_7->old_name);
 if (FUNC_1(VAR_3, VAR_8.buf)) {
  VAR_9 = FUNC_4(VAR_7->remote_branches, VAR_3);
  VAR_11 = FUNC_0(VAR_3, VAR_1,
         ((void*)0), &VAR_10);
  if (VAR_11 && (VAR_10 & VAR_0))
   VAR_9->util = FUNC_5(VAR_11);
  else
   VAR_9->util = ((void*)0);
 }
 FUNC_3(&VAR_8);

 return 0;
}
