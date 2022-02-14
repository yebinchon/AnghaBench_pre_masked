
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,scalar_t__,size_t) ;
 int FUNC_1 (struct strbuf*,scalar_t__,int,int,int) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,struct strbuf*) ;

__attribute__((used)) static void FUNC_4(struct strbuf *VAR_1, size_t VAR_2,
   size_t VAR_3, size_t VAR_4, size_t VAR_5)
{
 struct strbuf VAR_6 = VAR_0;

 if (VAR_2)
  FUNC_0(&VAR_6, VAR_1->buf, VAR_2);
 FUNC_1(&VAR_6, VAR_1->buf + VAR_2,
    (int) VAR_4, (int) VAR_5, (int) VAR_3);
 FUNC_3(&VAR_6, VAR_1);
 FUNC_2(&VAR_6);
}
