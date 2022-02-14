
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct vmw_fifo_state {int capabilities; int marker_queue; } ;
struct vmw_private {int marker_seq; struct vmw_fifo_state fifo; } ;
struct svga_fifo_cmd_fence {int fence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (struct vmw_private*,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct vmw_private*,int,int,int,int,int) ;
 int FUNC_5 (struct vmw_private*,int ) ;
 int FUNC_6 (struct vmw_private*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct vmw_private*,struct vmw_fifo_state*) ;

int FUNC_9(struct vmw_private *VAR_4, uint32_t *VAR_5)
{
 struct vmw_fifo_state *VAR_6 = &VAR_4->fifo;
 struct svga_fifo_cmd_fence *VAR_7;
 u32 *VAR_8;
 int VAR_9 = 0;
 uint32_t VAR_10 = sizeof(u32) + sizeof(*VAR_7);

 VAR_8 = FUNC_0(VAR_4, VAR_10);
 if (FUNC_3(VAR_8 == ((void*)0))) {
  *VAR_5 = FUNC_2(&VAR_4->marker_seq);
  VAR_9 = -VAR_0;
  (void)FUNC_4(VAR_4, 0, 1, *VAR_5,
     0, 3*VAR_1);
  goto out_err;
 }

 do {
  *VAR_5 = FUNC_1(1, &VAR_4->marker_seq);
 } while (*VAR_5 == 0);

 if (!(VAR_6->capabilities & VAR_3)) {






  FUNC_5(VAR_4, 0);
  return 0;
 }

 *VAR_8++ = VAR_2;
 VAR_7 = (struct svga_fifo_cmd_fence *) VAR_8;
 VAR_7->fence = *VAR_5;
 FUNC_6(VAR_4, VAR_10);
 (void) FUNC_7(&VAR_6->marker_queue, *VAR_5);
 FUNC_8(VAR_4, VAR_6);

out_err:
 return VAR_9;
}
