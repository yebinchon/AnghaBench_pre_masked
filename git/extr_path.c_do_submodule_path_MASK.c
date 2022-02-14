
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct strbuf {int buf; int len; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (struct strbuf*,int ) ;
 int FUNC_1 (struct strbuf*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,char const*,int ) ;
 int FUNC_6 (struct strbuf*,char const*) ;
 int FUNC_7 (struct strbuf*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct strbuf *VAR_1, const char *VAR_2,
        const char *VAR_3, va_list VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 struct strbuf VAR_6 = VAR_0;
 int VAR_7;

 VAR_7 = FUNC_6(&VAR_6, VAR_2);
 if (VAR_7)
  goto cleanup;

 FUNC_3(&VAR_6, '/');
 FUNC_1(VAR_1, &VAR_6);
 FUNC_5(VAR_1, VAR_3, VAR_4);

 if (FUNC_0(&VAR_5, VAR_6.buf))
  FUNC_7(VAR_1, VAR_6.len, VAR_5.buf);

 FUNC_2(VAR_1);

cleanup:
 FUNC_4(&VAR_6);
 FUNC_4(&VAR_5);
 return VAR_7;
}
