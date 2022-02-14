
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr2tls_thread_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct tr2tls_thread_ctx* FUNC_1 (int ) ;
 struct tr2tls_thread_ctx* FUNC_2 (char*,int) ;
 int VAR_1 ;
 struct tr2tls_thread_ctx* VAR_2 ;

struct tr2tls_thread_ctx *FUNC_3(void)
{
 struct tr2tls_thread_ctx *VAR_3;

 if (!VAR_0)
  return VAR_2;

 VAR_3 = FUNC_1(VAR_1);






 if (!VAR_3)
  VAR_3 = FUNC_2("unknown", FUNC_0() / 1000);

 return VAR_3;
}
