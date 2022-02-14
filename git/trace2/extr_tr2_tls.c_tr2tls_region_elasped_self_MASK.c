
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct tr2tls_thread_ctx {int nr_open_regions; scalar_t__* array_us_start; } ;


 struct tr2tls_thread_ctx* FUNC_0 () ;

uint64_t FUNC_1(uint64_t VAR_0)
{
 struct tr2tls_thread_ctx *VAR_1;
 uint64_t VAR_2;

 VAR_1 = FUNC_0();
 if (!VAR_1->nr_open_regions)
  return 0;

 VAR_2 = VAR_1->array_us_start[VAR_1->nr_open_regions - 1];

 return VAR_0 - VAR_2;
}
