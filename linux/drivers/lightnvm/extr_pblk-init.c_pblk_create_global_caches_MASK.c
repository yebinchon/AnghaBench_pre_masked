
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_rec_ctx {int dummy; } ;
struct pblk_line_ws {int dummy; } ;
struct TYPE_2__ {void* ws; void* rec; void* g_rq; void* w_rq; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,int,int ,int ,int *) ;
 int FUNC_1 (void*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(void)
{

 VAR_1.ws = FUNC_0("pblk_blk_ws",
    sizeof(struct pblk_line_ws), 0, 0, ((void*)0));
 if (!VAR_1.ws)
  return -VAR_0;

 VAR_1.rec = FUNC_0("pblk_rec",
    sizeof(struct pblk_rec_ctx), 0, 0, ((void*)0));
 if (!VAR_1.rec)
  goto fail_destroy_ws;

 VAR_1.g_rq = FUNC_0("pblk_g_rq", VAR_2,
    0, 0, ((void*)0));
 if (!VAR_1.g_rq)
  goto fail_destroy_rec;

 VAR_1.w_rq = FUNC_0("pblk_w_rq", VAR_3,
    0, 0, ((void*)0));
 if (!VAR_1.w_rq)
  goto fail_destroy_g_rq;

 return 0;

fail_destroy_g_rq:
 FUNC_1(VAR_1.g_rq);
fail_destroy_rec:
 FUNC_1(VAR_1.rec);
fail_destroy_ws:
 FUNC_1(VAR_1.ws);

 return -VAR_0;
}
