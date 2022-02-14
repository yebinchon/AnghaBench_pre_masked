
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct strbuf {int dummy; } ;


 int FUNC_0 (int,int,struct strbuf*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct strbuf *VAR_0)
{
 time_t VAR_1;
 int VAR_2;

 FUNC_2(&VAR_1);

 VAR_2 = FUNC_3(FUNC_1(&VAR_1)) - VAR_1;
 VAR_2 /= 60;

 FUNC_0(VAR_1, VAR_2, VAR_0);
}
