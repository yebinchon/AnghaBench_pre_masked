
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr2tls_thread_ctx {int nr_open_regions; } ;


 struct tr2tls_thread_ctx* FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(void)
{
 struct tr2tls_thread_ctx *VAR_0 = FUNC_0();

 while (VAR_0->nr_open_regions > 1)
  FUNC_1();
}
