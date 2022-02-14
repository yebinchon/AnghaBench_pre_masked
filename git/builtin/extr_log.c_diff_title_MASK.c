
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;


 int FUNC_0 (struct strbuf*,char const*,int) ;
 int FUNC_1 (struct strbuf*,char const*) ;

__attribute__((used)) static const char *FUNC_2(struct strbuf *VAR_0, int VAR_1,
         const char *VAR_2, const char *VAR_3)
{
 if (VAR_1 <= 0)
  FUNC_1(VAR_0, VAR_2);
 else
  FUNC_0(VAR_0, VAR_3, VAR_1 - 1);
 return VAR_0->buf;
}
