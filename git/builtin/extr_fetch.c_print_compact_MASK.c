
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*,char*) ;
 int FUNC_1 (struct strbuf*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct strbuf*,char*,int ,char const*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (char const*,char const*) ;

__attribute__((used)) static void FUNC_6(struct strbuf *VAR_2,
     const char *VAR_3, const char *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 struct strbuf VAR_6 = VAR_0;

 if (!FUNC_5(VAR_3, VAR_4)) {
  FUNC_2(VAR_2, "%-*s -> *", VAR_1, VAR_3);
  return;
 }

 FUNC_3(&VAR_5, VAR_3);
 FUNC_3(&VAR_6, VAR_4);

 if (!FUNC_0(&VAR_5, VAR_4, "*"))
  FUNC_0(&VAR_6, VAR_3, "*");
 FUNC_1(VAR_2, VAR_5.buf, VAR_6.buf);

 FUNC_4(&VAR_5);
 FUNC_4(&VAR_6);
}
