
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; scalar_t__ buf; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct strbuf*,int ) ;
 scalar_t__ FUNC_3 (struct strbuf*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct strbuf *VAR_1, int VAR_2)
{
 if (FUNC_3(VAR_1, VAR_2, 0) < 0)
  return FUNC_0("git apply: failed to read");






 FUNC_2(VAR_1, VAR_0);
 FUNC_1(VAR_1->buf + VAR_1->len, 0, VAR_0);
 return 0;
}
