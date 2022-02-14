
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_private {int irqthread_pending; int fifo_queue; scalar_t__ io_start; int irq_mask; } ;
struct drm_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 struct vmw_private* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct drm_device *VAR_13 = (struct drm_device *)VAR_12;
 struct vmw_private *VAR_14 = FUNC_5(VAR_13);
 uint32_t VAR_15, VAR_16;
 irqreturn_t VAR_17 = VAR_0;

 VAR_15 = FUNC_1(VAR_14->io_start + VAR_8);
 VAR_16 = VAR_15 & FUNC_0(VAR_14->irq_mask);

 if (FUNC_2(VAR_15))
  FUNC_3(VAR_15, VAR_14->io_start + VAR_8);

 if (!VAR_15)
  return VAR_1;

 if (VAR_16 & VAR_7)
  FUNC_6(&VAR_14->fifo_queue);

 if ((VAR_16 & (VAR_3 |
         VAR_6)) &&
     !FUNC_4(VAR_10, VAR_14->irqthread_pending))
  VAR_17 = VAR_2;

 if ((VAR_16 & (VAR_4 |
         VAR_5)) &&
     !FUNC_4(VAR_9,
         VAR_14->irqthread_pending))
  VAR_17 = VAR_2;

 return VAR_17;
}
