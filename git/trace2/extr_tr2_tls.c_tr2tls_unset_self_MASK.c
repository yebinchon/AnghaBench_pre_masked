
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr2tls_thread_ctx {struct tr2tls_thread_ctx* array_us_start; } ;


 int FUNC_0 (struct tr2tls_thread_ctx*) ;
 int FUNC_1 (int ,int *) ;
 struct tr2tls_thread_ctx* FUNC_2 () ;
 int VAR_0 ;

void FUNC_3(void)
{
 struct tr2tls_thread_ctx *VAR_1;

 VAR_1 = FUNC_2();

 FUNC_1(VAR_0, ((void*)0));

 FUNC_0(VAR_1->array_us_start);
 FUNC_0(VAR_1);
}
