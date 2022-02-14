
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct strbuf*,int,char const*) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_2, int VAR_3,
         const char *VAR_4)
{
 char *VAR_5 = VAR_2->buf + VAR_3;
 FUNC_0();
 if (FUNC_2(&VAR_1, VAR_5, VAR_0, ((void*)0)) > 0)
  FUNC_1(VAR_2, VAR_3, VAR_4);
}
