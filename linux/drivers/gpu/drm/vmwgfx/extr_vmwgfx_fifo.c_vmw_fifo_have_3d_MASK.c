
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct vmw_fifo_state {int capabilities; } ;
struct vmw_private {int capabilities; scalar_t__ active_display_unit; int cap_lock; int has_mob; struct vmw_fifo_state fifo; int * mmio_virt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct vmw_private*,int ) ;
 int FUNC_4 (struct vmw_private*,int ,int ) ;

bool FUNC_5(struct vmw_private *VAR_11)
{
 u32 *VAR_12 = VAR_11->mmio_virt;
 uint32_t VAR_13, VAR_14;
 const struct vmw_fifo_state *VAR_15 = &VAR_11->fifo;

 if (!(VAR_11->capabilities & VAR_2))
  return 0;

 if (VAR_11->capabilities & VAR_4) {
  uint32_t VAR_16;

  if (!VAR_11->has_mob)
   return 0;

  FUNC_0(&VAR_11->cap_lock);
  FUNC_4(VAR_11, VAR_9, VAR_0);
  VAR_16 = FUNC_3(VAR_11, VAR_9);
  FUNC_1(&VAR_11->cap_lock);

  return (VAR_16 != 0);
 }

 if (!(VAR_11->capabilities & VAR_3))
  return 0;

 VAR_13 = FUNC_2(VAR_12 + VAR_8);
 if (VAR_13 <= VAR_5 * sizeof(unsigned int))
  return 0;

 VAR_14 = FUNC_2(VAR_12 +
      ((VAR_15->capabilities &
        VAR_7) ?
       VAR_6 :
       VAR_5));

 if (VAR_14 == 0)
  return 0;

 if (VAR_14 < VAR_1)
  return 0;


 if (VAR_11->active_display_unit == VAR_10)
  return 0;

 return 1;
}
