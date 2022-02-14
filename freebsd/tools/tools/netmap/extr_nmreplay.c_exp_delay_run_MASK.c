
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct _qs {scalar_t__ cur_delay; } ;
struct _cfg {scalar_t__ arg; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,unsigned long long) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct _qs *VAR_1, struct _cfg *VAR_2)
{
 uint64_t *VAR_3 = (uint64_t *)VAR_2->arg;
        VAR_1->cur_delay = VAR_3[FUNC_1() & (VAR_0 - 1)];
 FUNC_0(5, "delay %llu", (unsigned long long)VAR_1->cur_delay);
        return 0;
}
