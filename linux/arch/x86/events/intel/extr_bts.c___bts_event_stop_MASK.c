
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct bts_ctx {int state; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct bts_ctx* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_1, int VAR_2)
{
 struct bts_ctx *VAR_3 = FUNC_2(&VAR_0);


 FUNC_0(VAR_3->state, VAR_2);





 FUNC_1();
}
