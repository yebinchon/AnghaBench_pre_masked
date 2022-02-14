
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct _qs {int cur_drop; } ;
struct _cfg {scalar_t__* d; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct _qs *VAR_0, struct _cfg *VAR_1)
{
 (void)VAR_1;
 uint64_t VAR_2 = FUNC_0();
 VAR_0->cur_drop = VAR_2 < VAR_1->d[0];

 VAR_1->d[1]++;
 VAR_1->d[2] += VAR_0->cur_drop;

 return 0;
}
