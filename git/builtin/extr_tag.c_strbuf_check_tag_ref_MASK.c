
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct strbuf*,char*,char const*) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static int FUNC_3(struct strbuf *VAR_0, const char *VAR_1)
{
 if (VAR_1[0] == '-')
  return -1;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0, "refs/tags/%s", VAR_1);

 return FUNC_0(VAR_0->buf, 0);
}
