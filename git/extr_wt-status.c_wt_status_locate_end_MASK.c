
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ buf; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__) ;
 int FUNC_1 (struct strbuf*,char*,int ,int ) ;
 int FUNC_2 (struct strbuf*) ;
 char* FUNC_3 (char const*,scalar_t__) ;

size_t FUNC_4(const char *VAR_3, size_t VAR_4)
{
 const char *VAR_5;
 struct strbuf VAR_6 = VAR_0;

 FUNC_1(&VAR_6, "\n%c %s", VAR_1, VAR_2);
 if (FUNC_0(VAR_3, VAR_6.buf + 1))
  VAR_4 = 0;
 else if ((VAR_5 = FUNC_3(VAR_3, VAR_6.buf)))
  VAR_4 = VAR_5 - VAR_3 + 1;
 FUNC_2(&VAR_6);
 return VAR_4;
}
