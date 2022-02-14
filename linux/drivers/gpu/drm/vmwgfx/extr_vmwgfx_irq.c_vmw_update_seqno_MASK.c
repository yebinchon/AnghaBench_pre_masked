
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct vmw_private {scalar_t__ last_read_seqno; int fman; int * mmio_virt; } ;
struct vmw_fifo_state {int marker_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct vmw_private *VAR_1,
    struct vmw_fifo_state *VAR_2)
{
 u32 *VAR_3 = VAR_1->mmio_virt;
 uint32_t VAR_4 = FUNC_2(VAR_3 + VAR_0);

 if (VAR_1->last_read_seqno != VAR_4) {
  VAR_1->last_read_seqno = VAR_4;
  FUNC_1(&VAR_2->marker_queue, VAR_4);
  FUNC_0(VAR_1->fman);
 }
}
