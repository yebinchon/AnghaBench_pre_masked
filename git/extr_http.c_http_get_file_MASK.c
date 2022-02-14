
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct http_get_options {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (char const*,int *,int ,struct http_get_options*) ;
 int FUNC_5 (struct strbuf*,char*,char const*) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_4, const char *VAR_5,
    struct http_get_options *VAR_6)
{
 int VAR_7;
 struct strbuf VAR_8 = VAR_3;
 FILE *VAR_9;

 FUNC_5(&VAR_8, "%s.temp", VAR_5);
 VAR_9 = FUNC_3(VAR_8.buf, "a");
 if (!VAR_9) {
  FUNC_0("Unable to open local file %s", VAR_8.buf);
  VAR_7 = VAR_0;
  goto cleanup;
 }

 VAR_7 = FUNC_4(VAR_4, VAR_9, VAR_2, VAR_6);
 FUNC_1(VAR_9);

 if (VAR_7 == VAR_1 && FUNC_2(VAR_8.buf, VAR_5))
  VAR_7 = VAR_0;
cleanup:
 FUNC_6(&VAR_8);
 return VAR_7;
}
