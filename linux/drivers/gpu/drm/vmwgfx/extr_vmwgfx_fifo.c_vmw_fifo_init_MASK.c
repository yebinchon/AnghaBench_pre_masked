
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct vmw_private {int capabilities; int mmio_size; int last_read_seqno; int marker_seq; void* traces_state; void* config_done_state; void* enable_state; int * mmio_virt; } ;
struct vmw_fifo_state {int dx; int using_bounce_buffer; int marker_queue; void* capabilities; int rwsem; int fifo_mutex; scalar_t__ reserved_size; int * dynamic_buffer; int * static_buffer; int static_buffer_size; } ;


 int FUNC_0 (char*,unsigned int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (int,int *) ;
 void* FUNC_10 (struct vmw_private*,int ) ;
 int FUNC_11 (struct vmw_private*,int ,int) ;
 int FUNC_12 () ;

int FUNC_13(struct vmw_private *VAR_20, struct vmw_fifo_state *VAR_21)
{
 u32 *VAR_22 = VAR_20->mmio_virt;
 uint32_t VAR_23;
 uint32_t VAR_24;

 VAR_21->dx = 0;
 VAR_21->static_buffer_size = VAR_19;
 VAR_21->static_buffer = FUNC_6(VAR_21->static_buffer_size);
 if (FUNC_5(VAR_21->static_buffer == ((void*)0)))
  return -VAR_0;

 VAR_21->dynamic_buffer = ((void*)0);
 VAR_21->reserved_size = 0;
 VAR_21->using_bounce_buffer = 0;

 FUNC_4(&VAR_21->fifo_mutex);
 FUNC_2(&VAR_21->rwsem);

 FUNC_0("width %d\n", FUNC_10(VAR_20, VAR_18));
 FUNC_0("height %d\n", FUNC_10(VAR_20, VAR_15));
 FUNC_0("bpp %d\n", FUNC_10(VAR_20, VAR_10));

 VAR_20->enable_state = FUNC_10(VAR_20, VAR_12);
 VAR_20->config_done_state = FUNC_10(VAR_20, VAR_11);
 VAR_20->traces_state = FUNC_10(VAR_20, VAR_17);

 FUNC_11(VAR_20, VAR_12, VAR_13 |
    VAR_14);
 FUNC_11(VAR_20, VAR_17, 0);

 VAR_24 = 4;
 if (VAR_20->capabilities & VAR_2)
  VAR_24 = FUNC_10(VAR_20, VAR_16);
 VAR_24 <<= 2;

 if (VAR_24 < VAR_1)
  VAR_24 = VAR_1;

 FUNC_9(VAR_24, VAR_22 + VAR_7);
 FUNC_9(VAR_20->mmio_size, VAR_22 + VAR_6);
 FUNC_12();
 FUNC_9(VAR_24, VAR_22 + VAR_8);
 FUNC_9(VAR_24, VAR_22 + VAR_9);
 FUNC_9(0, VAR_22 + VAR_3);
 FUNC_3();

 FUNC_11(VAR_20, VAR_11, 1);

 VAR_23 = FUNC_8(VAR_22 + VAR_6);
 VAR_24 = FUNC_8(VAR_22 + VAR_7);
 VAR_21->capabilities = FUNC_8(VAR_22 + VAR_4);

 FUNC_0("Fifo max 0x%08x min 0x%08x cap 0x%08x\n",
   (unsigned int) VAR_23,
   (unsigned int) VAR_24,
   (unsigned int) VAR_21->capabilities);

 FUNC_1(&VAR_20->marker_seq, VAR_20->last_read_seqno);
 FUNC_9(VAR_20->last_read_seqno, VAR_22 + VAR_5);
 FUNC_7(&VAR_21->marker_queue);

 return 0;
}
