
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; scalar_t__ buf; } ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 size_t FUNC_1 (char*) ;
 size_t FUNC_2 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_3(const struct strbuf *VAR_0)
{
 size_t VAR_1 = FUNC_1(">From ");
 size_t VAR_2;

 if (VAR_0->len < VAR_1)
  return 0;

 VAR_2 = FUNC_2(VAR_0->buf, ">");
 return VAR_2 && FUNC_0(VAR_0->buf + VAR_2, "From ");
}
