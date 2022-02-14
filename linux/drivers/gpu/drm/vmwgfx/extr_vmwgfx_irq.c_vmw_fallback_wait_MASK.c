
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct vmw_fifo_state {int rwsem; } ;
struct vmw_private {int fence_queue; int * mmio_virt; int marker_seq; scalar_t__ cman; struct vmw_fifo_state fifo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 unsigned long VAR_8 ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__,int,int) ;
 int FUNC_13 (struct vmw_private*,int) ;
 int FUNC_14 (int,int *) ;
 int FUNC_15 (struct vmw_private*,int) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct vmw_private *VAR_9,
        bool VAR_10,
        bool VAR_11,
        uint32_t VAR_12,
        bool VAR_13,
        unsigned long VAR_14)
{
 struct vmw_fifo_state *VAR_15 = &VAR_9->fifo;

 uint32_t VAR_16 = 0;
 uint32_t VAR_17;
 int VAR_18;
 unsigned long VAR_19 = VAR_8 + VAR_14;
 bool (*VAR_20)(struct vmw_private *, uint32_t);
 FUNC_0(VAR_6);

 VAR_20 = (VAR_11) ? &FUNC_13 :
  &FUNC_15;





 if (VAR_11) {
  FUNC_4(&VAR_15->rwsem);
  if (VAR_9->cman) {
   VAR_18 = FUNC_12(VAR_9->cman, VAR_13,
           10*VAR_1);
   if (VAR_18)
    goto out_err;
  }
 }

 VAR_17 = FUNC_3(&VAR_9->marker_seq);
 VAR_18 = 0;

 for (;;) {
  FUNC_6(&VAR_9->fence_queue, &VAR_6,
    (VAR_13) ?
    VAR_3 : VAR_5);
  if (VAR_20(VAR_9, VAR_12))
   break;
  if (FUNC_10(VAR_8, VAR_19)) {
   FUNC_1("SVGA device lockup.\n");
   break;
  }
  if (VAR_10)
   FUNC_8(1);
  else if ((++VAR_16 & 0x0F) == 0) {





   FUNC_2(VAR_4);
   FUNC_7();
   FUNC_2((VAR_13) ?
         VAR_3 :
         VAR_5);
  }
  if (VAR_13 && FUNC_9(VAR_7)) {
   VAR_18 = -VAR_0;
   break;
  }
 }
 FUNC_5(&VAR_9->fence_queue, &VAR_6);
 if (VAR_18 == 0 && VAR_11) {
  u32 *VAR_21 = VAR_9->mmio_virt;

  FUNC_14(VAR_17, VAR_21 + VAR_2);
 }
 FUNC_16(&VAR_9->fence_queue);
out_err:
 if (VAR_11)
  FUNC_11(&VAR_15->rwsem);

 return VAR_18;
}
