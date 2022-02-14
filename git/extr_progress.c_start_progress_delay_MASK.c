
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct progress {char const* title; int last_value; int last_percent; unsigned int delay; unsigned int sparse; scalar_t__ split; int title_len; int counters_sb; int start_ns; int * throughput; int total; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char const*) ;
 struct progress* FUNC_4 (int) ;

__attribute__((used)) static struct progress *FUNC_5(const char *VAR_0, uint64_t VAR_1,
          unsigned VAR_2, unsigned VAR_3)
{
 struct progress *VAR_4 = FUNC_4(sizeof(*VAR_4));
 VAR_4->title = VAR_0;
 VAR_4->total = VAR_1;
 VAR_4->last_value = -1;
 VAR_4->last_percent = -1;
 VAR_4->delay = VAR_2;
 VAR_4->sparse = VAR_3;
 VAR_4->throughput = ((void*)0);
 VAR_4->start_ns = FUNC_0();
 FUNC_2(&VAR_4->counters_sb, 0);
 VAR_4->title_len = FUNC_3(VAR_0);
 VAR_4->split = 0;
 FUNC_1();
 return VAR_4;
}
