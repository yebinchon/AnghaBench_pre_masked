
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct strbuf*,int) ;
 struct strbuf** FUNC_1 (char const*,int ,char,int) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf** VAR_3 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct strbuf **VAR_4;
 const char *VAR_5;

 if (VAR_2)
  return VAR_1;
 VAR_2 = 1;

 VAR_5 = FUNC_5(VAR_0);
 if (!VAR_5 || !*VAR_5)
  return VAR_1;

 VAR_3 = FUNC_1(VAR_5, FUNC_4(VAR_5), ',', -1);
 for (VAR_4 = VAR_3; *VAR_4; VAR_4++) {
  struct strbuf *VAR_6 = *VAR_4;

  if (VAR_6->len && VAR_6->buf[VAR_6->len - 1] == ',')
   FUNC_0(VAR_6, VAR_6->len - 1);
  FUNC_3(*VAR_4);
  FUNC_2(*VAR_4);
 }

 VAR_1 = VAR_4 - VAR_3;
 return VAR_1;
}
