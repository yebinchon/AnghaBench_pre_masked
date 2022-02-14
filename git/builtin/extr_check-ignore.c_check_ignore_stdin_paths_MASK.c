
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct dir_struct {int dummy; } ;
typedef scalar_t__ (* strbuf_getline_fn ) (struct strbuf*,int ) ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (struct dir_struct*,char const*,int,char const**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct strbuf*,int ) ;
 scalar_t__ FUNC_4 (struct strbuf*,int ) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*,struct strbuf*) ;
 scalar_t__ FUNC_8 (struct strbuf*,char*,int *) ;

__attribute__((used)) static int FUNC_9(struct dir_struct *VAR_5, const char *VAR_6)
{
 struct strbuf VAR_7 = VAR_1;
 struct strbuf VAR_8 = VAR_1;
 char *VAR_9[2] = { ((void*)0), ((void*)0) };
 strbuf_getline_fn VAR_10;
 int VAR_11 = 0;

 VAR_10 = VAR_2 ? FUNC_4 : FUNC_3;
 while (VAR_10(&VAR_7, VAR_3) != VAR_0) {
  if (!VAR_2 && VAR_7.buf[0] == '"') {
   FUNC_6(&VAR_8);
   if (FUNC_8(&VAR_8, VAR_7.buf, ((void*)0)))
    FUNC_1("line is badly quoted");
   FUNC_7(&VAR_7, &VAR_8);
  }
  VAR_9[0] = VAR_7.buf;
  VAR_11 += FUNC_0(VAR_5, VAR_6,
         1, (const char **)VAR_9);
  FUNC_2(VAR_4, "check-ignore to stdout");
 }
 FUNC_5(&VAR_7);
 FUNC_5(&VAR_8);
 return VAR_11;
}
