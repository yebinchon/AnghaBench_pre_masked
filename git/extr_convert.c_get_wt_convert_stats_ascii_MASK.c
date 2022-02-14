
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct strbuf*,char const*,int ) ;
 int FUNC_2 (struct strbuf*) ;

const char *FUNC_3(const char *VAR_1)
{
 const char *VAR_2 = "";
 struct strbuf VAR_3 = VAR_0;
 if (FUNC_1(&VAR_3, VAR_1, 0) >= 0)
  VAR_2 = FUNC_0(VAR_3.buf, VAR_3.len);
 FUNC_2(&VAR_3);
 return VAR_2;
}
