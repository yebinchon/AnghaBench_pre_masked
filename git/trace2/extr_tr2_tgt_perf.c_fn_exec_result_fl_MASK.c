
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,char const*,int *,int *,int *,int *,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char*,int,...) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, int VAR_2,
         uint64_t VAR_3, int VAR_4,
         int VAR_5)
{
 const char *VAR_6 = "exec_result";
 struct strbuf VAR_7 = VAR_0;

 FUNC_1(&VAR_7, "id:%d code:%d", VAR_4, VAR_5);
 if (VAR_5 > 0)
  FUNC_1(&VAR_7, " err:%s", FUNC_3(VAR_5));

 FUNC_0(VAR_1, VAR_2, VAR_6, ((void*)0), &VAR_3,
    ((void*)0), ((void*)0), &VAR_7);
 FUNC_2(&VAR_7);
}
