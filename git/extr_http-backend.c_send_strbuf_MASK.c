
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (struct strbuf*,int ,int ) ;
 int FUNC_2 (struct strbuf*,int ,char const*) ;
 int FUNC_3 (int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct strbuf *VAR_2,
   const char *VAR_3, struct strbuf *VAR_4)
{
 FUNC_1(VAR_2, VAR_0, VAR_4->len);
 FUNC_2(VAR_2, VAR_1, VAR_3);
 FUNC_0(VAR_2);
 FUNC_3(1, VAR_4->buf, VAR_4->len);
}
