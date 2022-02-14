
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct tr2tls_thread_ctx {int nr_open_regions; TYPE_1__ thread_name; } ;


 int FUNC_0 (char*,int ) ;
 struct tr2tls_thread_ctx* FUNC_1 () ;

void FUNC_2(void)
{
 struct tr2tls_thread_ctx *VAR_0 = FUNC_1();

 if (!VAR_0->nr_open_regions)
  FUNC_0("no open regions in thread '%s'", VAR_0->thread_name.buf);

 VAR_0->nr_open_regions--;
}
