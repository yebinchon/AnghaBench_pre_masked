
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (struct strbuf*,char*,int ,int ,char const*) ;
 int FUNC_3 (struct strbuf*) ;

char *FUNC_4(struct strbuf *VAR_0,
      const unsigned char *VAR_1,
      const char *VAR_2)
{
 FUNC_3(VAR_0);
 FUNC_2(VAR_0, "%s/pack/pack-%s.%s", FUNC_0(),
      FUNC_1(VAR_1), VAR_2);
 return VAR_0->buf;
}
