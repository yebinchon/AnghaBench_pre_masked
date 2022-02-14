
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t alloc; scalar_t__ len; scalar_t__ buf; } ;
typedef int FILE ;


 size_t FUNC_0 (scalar_t__,int,size_t,int *) ;
 int FUNC_1 (struct strbuf*,size_t) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,scalar_t__) ;

size_t FUNC_4(struct strbuf *VAR_0, size_t VAR_1, FILE *VAR_2)
{
 size_t VAR_3;
 size_t VAR_4 = VAR_0->alloc;

 FUNC_1(VAR_0, VAR_1);
 VAR_3 = FUNC_0(VAR_0->buf + VAR_0->len, 1, VAR_1, VAR_2);
 if (VAR_3 > 0)
  FUNC_3(VAR_0, VAR_0->len + VAR_3);
 else if (VAR_4 == 0)
  FUNC_2(VAR_0);
 return VAR_3;
}
