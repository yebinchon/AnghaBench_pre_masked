
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char*,double,int) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, int VAR_2, uint64_t VAR_3,
         int VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 double VAR_6 = (double)VAR_3 / 1000000.0;

 FUNC_1(&VAR_5, "exit elapsed:%.6f code:%d", VAR_6, VAR_4);
 FUNC_0(VAR_1, VAR_2, &VAR_5);
 FUNC_2(&VAR_5);
}
