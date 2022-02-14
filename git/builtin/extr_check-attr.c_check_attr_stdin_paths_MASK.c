
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct attr_check {int dummy; } ;
typedef scalar_t__ (* strbuf_getline_fn ) (struct strbuf*,int ) ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char const*,struct attr_check*,int,char*) ;
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

__attribute__((used)) static void FUNC_9(const char *VAR_5,
       struct attr_check *VAR_6,
       int VAR_7)
{
 struct strbuf VAR_8 = VAR_1;
 struct strbuf VAR_9 = VAR_1;
 strbuf_getline_fn VAR_10;

 VAR_10 = VAR_2 ? FUNC_4 : FUNC_3;
 while (VAR_10(&VAR_8, VAR_3) != VAR_0) {
  if (!VAR_2 && VAR_8.buf[0] == '"') {
   FUNC_6(&VAR_9);
   if (FUNC_8(&VAR_9, VAR_8.buf, ((void*)0)))
    FUNC_1("line is badly quoted");
   FUNC_7(&VAR_8, &VAR_9);
  }
  FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8.buf);
  FUNC_2(VAR_4, "attribute to stdout");
 }
 FUNC_5(&VAR_8);
 FUNC_5(&VAR_9);
}
