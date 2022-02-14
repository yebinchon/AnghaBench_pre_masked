
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_private {int traces_state; int enable_state; int config_done_state; int last_read_seqno; int * mmio_virt; } ;
struct vmw_fifo_state {int * dynamic_buffer; int * static_buffer; int marker_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vmw_private*,int ) ;
 int FUNC_5 (struct vmw_private*,int ,int ) ;

void FUNC_6(struct vmw_private *VAR_7, struct vmw_fifo_state *VAR_8)
{
 u32 *VAR_9 = VAR_7->mmio_virt;

 FUNC_5(VAR_7, VAR_4, VAR_6);
 while (FUNC_4(VAR_7, VAR_1) != 0)
  ;

 VAR_7->last_read_seqno = FUNC_3(VAR_9 + VAR_0);

 FUNC_5(VAR_7, VAR_2,
    VAR_7->config_done_state);
 FUNC_5(VAR_7, VAR_3,
    VAR_7->enable_state);
 FUNC_5(VAR_7, VAR_5,
    VAR_7->traces_state);

 FUNC_2(&VAR_8->marker_queue);

 if (FUNC_0(VAR_8->static_buffer != ((void*)0))) {
  FUNC_1(VAR_8->static_buffer);
  VAR_8->static_buffer = ((void*)0);
 }

 if (FUNC_0(VAR_8->dynamic_buffer != ((void*)0))) {
  FUNC_1(VAR_8->dynamic_buffer);
  VAR_8->dynamic_buffer = ((void*)0);
 }
}
