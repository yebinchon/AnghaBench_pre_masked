
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;
struct object_id {int dummy; } ;
typedef scalar_t__ (* each_replace_name_fn ) (char const*,char*,struct object_id*) ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 int VAR_1 ;
 int FUNC_3 (struct object_id*) ;
 scalar_t__ FUNC_4 (char*,struct object_id*) ;
 int FUNC_5 (struct strbuf*,int ) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*,size_t) ;

__attribute__((used)) static int FUNC_8(const char **VAR_2, each_replace_name_fn VAR_3)
{
 const char **VAR_4, *VAR_5;
 struct strbuf VAR_6 = VAR_0;
 size_t VAR_7;
 int VAR_8 = 0;
 struct object_id VAR_9;

 FUNC_5(&VAR_6, VAR_1);
 VAR_7 = VAR_6.len;

 for (VAR_4 = VAR_2; *VAR_4; VAR_4++) {
  if (FUNC_2(*VAR_4, &VAR_9)) {
   FUNC_1("failed to resolve '%s' as a valid ref", *VAR_4);
   VAR_8 = 1;
   continue;
  }

  FUNC_7(&VAR_6, VAR_7);
  FUNC_5(&VAR_6, FUNC_3(&VAR_9));
  VAR_5 = VAR_6.buf + VAR_7;

  if (FUNC_4(VAR_6.buf, &VAR_9)) {
   FUNC_1(FUNC_0("replace ref '%s' not found"), VAR_5);
   VAR_8 = 1;
   continue;
  }
  if (VAR_3(VAR_5, VAR_6.buf, &VAR_9))
   VAR_8 = 1;
 }
 FUNC_6(&VAR_6);
 return VAR_8;
}
