
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_1)
{
 FUNC_1(VAR_1, '\n');
 FUNC_2(FUNC_0(&VAR_0), VAR_1->buf, VAR_1->len);
}
