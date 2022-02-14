
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct _qs {int cur_delay; } ;
struct _cfg {int* d; } ;


 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct _qs *VAR_0, struct _cfg *VAR_1)
{
 uint64_t VAR_2 = FUNC_0();
 VAR_0->cur_delay = VAR_1->d[0] + ((VAR_1->d[2] * VAR_2) >> 24);


 return 0;
}
