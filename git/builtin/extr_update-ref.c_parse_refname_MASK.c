
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; int len; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 (char const*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 char* FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static char *FUNC_6(struct strbuf *VAR_3, const char **VAR_4)
{
 struct strbuf VAR_5 = VAR_1;

 if (VAR_2) {

  *VAR_4 = FUNC_2(*VAR_4, &VAR_5);
 } else {

  FUNC_3(&VAR_5, *VAR_4);
  *VAR_4 += VAR_5.len;
 }

 if (!VAR_5.len) {
  FUNC_5(&VAR_5);
  return ((void*)0);
 }

 if (FUNC_0(VAR_5.buf, VAR_0))
  FUNC_1("invalid ref format: %s", VAR_5.buf);

 return FUNC_4(&VAR_5, ((void*)0));
}
