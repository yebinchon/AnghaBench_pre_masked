
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct mailinfo {char* metainfo_charset; int input_error; } ;


 int FUNC_0 (char*,char const*,char*) ;
 char* FUNC_1 (int ,char*,char const*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (struct strbuf*,char*,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct mailinfo *VAR_0,
      struct strbuf *VAR_1, const char *VAR_2)
{
 char *VAR_3;

 if (!VAR_0->metainfo_charset || !VAR_2 || !*VAR_2)
  return 0;

 if (FUNC_2(VAR_0->metainfo_charset, VAR_2))
  return 0;
 VAR_3 = FUNC_1(VAR_1->buf, VAR_0->metainfo_charset, VAR_2);
 if (!VAR_3) {
  VAR_0->input_error = -1;
  return FUNC_0("cannot convert from %s to %s",
        VAR_2, VAR_0->metainfo_charset);
 }
 FUNC_3(VAR_1, VAR_3, FUNC_4(VAR_3), FUNC_4(VAR_3));
 return 0;
}
