
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct vmw_temp_set_context {int dummy; } ;
struct vmw_fifo_state {int capabilities; int dx; int reserved_size; int fifo_mutex; int rwsem; scalar_t__ using_bounce_buffer; int * dynamic_buffer; } ;
struct vmw_private {int * mmio_virt; struct vmw_fifo_state fifo; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vmw_private*,int ) ;
 int FUNC_7 (struct vmw_fifo_state*,int *,int,int,int,int) ;
 int FUNC_8 (struct vmw_fifo_state*,int *,int,int,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int *) ;

__attribute__((used)) static void FUNC_11(struct vmw_private *VAR_6, uint32_t VAR_7)
{
 struct vmw_fifo_state *VAR_8 = &VAR_6->fifo;
 u32 *VAR_9 = VAR_6->mmio_virt;
 uint32_t VAR_10 = FUNC_9(VAR_9 + VAR_3);
 uint32_t VAR_11 = FUNC_9(VAR_9 + VAR_1);
 uint32_t VAR_12 = FUNC_9(VAR_9 + VAR_2);
 bool VAR_13 = VAR_8->capabilities & VAR_0;

 if (VAR_8->dx)
  VAR_7 += sizeof(struct vmw_temp_set_context);

 VAR_8->dx = 0;
 FUNC_0((VAR_7 & 3) != 0);
 FUNC_0(VAR_7 > VAR_8->reserved_size);

 VAR_8->reserved_size = 0;

 if (VAR_8->using_bounce_buffer) {
  if (VAR_13)
   FUNC_7(VAR_8, VAR_9,
       VAR_10, VAR_11, VAR_12, VAR_7);
  else
   FUNC_8(VAR_8, VAR_9,
        VAR_10, VAR_11, VAR_12, VAR_7);

  if (VAR_8->dynamic_buffer) {
   FUNC_5(VAR_8->dynamic_buffer);
   VAR_8->dynamic_buffer = ((void*)0);
  }

 }

 FUNC_1(&VAR_8->rwsem);
 if (VAR_8->using_bounce_buffer || VAR_13) {
  VAR_10 += VAR_7;
  if (VAR_10 >= VAR_11)
   VAR_10 -= VAR_11 - VAR_12;
  FUNC_2();
  FUNC_10(VAR_10, VAR_9 + VAR_3);
 }

 if (VAR_13)
  FUNC_10(0, VAR_9 + VAR_4);
 FUNC_2();
 FUNC_4(&VAR_8->rwsem);
 FUNC_6(VAR_6, VAR_5);
 FUNC_3(&VAR_8->fifo_mutex);
}
