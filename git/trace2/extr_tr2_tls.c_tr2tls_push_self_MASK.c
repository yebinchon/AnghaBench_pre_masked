
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tr2tls_thread_ctx {scalar_t__ nr_open_regions; int * array_us_start; int alloc; } ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 struct tr2tls_thread_ctx* FUNC_1 () ;

void FUNC_2(uint64_t VAR_0)
{
 struct tr2tls_thread_ctx *VAR_1 = FUNC_1();

 FUNC_0(VAR_1->array_us_start, VAR_1->nr_open_regions + 1, VAR_1->alloc);
 VAR_1->array_us_start[VAR_1->nr_open_regions++] = VAR_0;
}
