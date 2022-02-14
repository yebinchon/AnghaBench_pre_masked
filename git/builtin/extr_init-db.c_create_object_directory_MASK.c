
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int buf; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct strbuf*,char*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,size_t) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct strbuf VAR_1 = VAR_0;
 size_t VAR_2;

 FUNC_2(&VAR_1, FUNC_0());
 VAR_2 = VAR_1.len;

 FUNC_1(VAR_1.buf, 1);

 FUNC_4(&VAR_1, VAR_2);
 FUNC_2(&VAR_1, "/pack");
 FUNC_1(VAR_1.buf, 1);

 FUNC_4(&VAR_1, VAR_2);
 FUNC_2(&VAR_1, "/info");
 FUNC_1(VAR_1.buf, 1);

 FUNC_3(&VAR_1);
}
