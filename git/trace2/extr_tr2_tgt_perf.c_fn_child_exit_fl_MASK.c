
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,char const*,int *,int *,int *,int *,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char*,int,int,int) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, int VAR_2,
        uint64_t VAR_3, int VAR_4, int VAR_5,
        int VAR_6, uint64_t VAR_7)
{
 const char *VAR_8 = "child_exit";
 struct strbuf VAR_9 = VAR_0;

 FUNC_1(&VAR_9, "[ch%d] pid:%d code:%d", VAR_4, VAR_5, VAR_6);

 FUNC_0(VAR_1, VAR_2, VAR_8, ((void*)0), &VAR_3,
    &VAR_7, ((void*)0), &VAR_9);
 FUNC_2(&VAR_9);
}
