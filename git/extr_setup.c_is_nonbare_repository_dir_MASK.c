
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 int FUNC_3 (struct strbuf*,char*) ;
 int FUNC_4 (struct strbuf*,char) ;
 int FUNC_5 (struct strbuf*,size_t) ;

int FUNC_6(struct strbuf *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 size_t VAR_5 = VAR_2->len;
 FUNC_0(VAR_5 != 0);
 FUNC_4(VAR_2, '/');
 FUNC_3(VAR_2, ".git");
 if (FUNC_2(VAR_2->buf, &VAR_4) || FUNC_1(VAR_2->buf))
  VAR_3 = 1;
 if (VAR_4 == VAR_0 ||
     VAR_4 == VAR_1)
  VAR_3 = 1;
 FUNC_5(VAR_2, VAR_5);
 return VAR_3;
}
