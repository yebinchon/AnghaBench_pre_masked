
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct packed_git {int dummy; } ;
struct object_id {int hash; } ;
struct http_get_options {int no_cache; int member_0; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct strbuf*,char const*) ;
 int FUNC_1 (struct packed_git**,int ,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct strbuf*,struct http_get_options*) ;
 int FUNC_4 (char const*,struct object_id*,char const**) ;
 scalar_t__ FUNC_5 (char const*,char*,char const**) ;
 int FUNC_6 (struct strbuf*,char*) ;
 char* FUNC_7 (struct strbuf*,int *) ;
 char* FUNC_8 (char const*,char) ;

int FUNC_9(const char *VAR_2, struct packed_git **VAR_3)
{
 struct http_get_options VAR_4 = {0};
 int VAR_5 = 0;
 char *VAR_6;
 const char *VAR_7;
 struct strbuf VAR_8 = VAR_1;
 struct object_id VAR_9;

 FUNC_0(&VAR_8, VAR_2);
 FUNC_6(&VAR_8, "objects/info/packs");
 VAR_6 = FUNC_7(&VAR_8, ((void*)0));

 VAR_4.no_cache = 1;
 VAR_5 = FUNC_3(VAR_6, &VAR_8, &VAR_4);
 if (VAR_5 != VAR_0)
  goto cleanup;

 VAR_7 = VAR_8.buf;
 while (*VAR_7) {
  if (FUNC_5(VAR_7, "P pack-", &VAR_7) &&
      !FUNC_4(VAR_7, &VAR_9, &VAR_7) &&
      FUNC_5(VAR_7, ".pack", &VAR_7) &&
      (*VAR_7 == '\n' || *VAR_7 == '\0')) {
   FUNC_1(VAR_3, VAR_9.hash, VAR_2);
  } else {
   VAR_7 = FUNC_8(VAR_7, '\n');
  }
  if (*VAR_7)
   VAR_7++;
 }

cleanup:
 FUNC_2(VAR_6);
 return VAR_5;
}
