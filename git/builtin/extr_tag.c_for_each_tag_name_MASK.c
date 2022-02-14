
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
typedef scalar_t__ (* each_tag_name_fn ) (char const*,int ,struct object_id*,void const*) ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int ,struct object_id*) ;
 int FUNC_3 (struct strbuf*,char*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static int FUNC_6(const char **VAR_1, each_tag_name_fn VAR_2,
        const void *VAR_3)
{
 const char **VAR_4;
 struct strbuf VAR_5 = VAR_0;
 int VAR_6 = 0;
 struct object_id VAR_7;

 for (VAR_4 = VAR_1; *VAR_4; VAR_4++) {
  FUNC_5(&VAR_5);
  FUNC_3(&VAR_5, "refs/tags/%s", *VAR_4);
  if (FUNC_2(VAR_5.buf, &VAR_7)) {
   FUNC_1(FUNC_0("tag '%s' not found."), *VAR_4);
   VAR_6 = 1;
   continue;
  }
  if (VAR_2(*VAR_4, VAR_5.buf, &VAR_7, VAR_3))
   VAR_6 = 1;
 }
 FUNC_4(&VAR_5);
 return VAR_6;
}
