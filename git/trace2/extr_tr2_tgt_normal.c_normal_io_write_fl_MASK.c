
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,struct strbuf const*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (int *,struct strbuf*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(const char *VAR_2, int VAR_3,
          const struct strbuf *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;

 FUNC_0(VAR_2, VAR_3, &VAR_5);
 FUNC_1(&VAR_5, VAR_4);
 FUNC_3(&VAR_1, &VAR_5);
 FUNC_2(&VAR_5);
}
