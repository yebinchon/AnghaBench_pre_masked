
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hdmi {int irq_status; int hpd; int event_received; int wait_event; scalar_t__ drm_dev; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct sti_hdmi *VAR_9 = VAR_8;


 if (VAR_9->irq_status & VAR_2) {
  VAR_9->hpd = FUNC_2(VAR_9->regs + VAR_4) & VAR_5;
  if (VAR_9->drm_dev)
   FUNC_1(VAR_9->drm_dev);
 }




 if (VAR_9->irq_status & (VAR_3 | VAR_1)) {
  VAR_9->event_received = 1;
  FUNC_3(&VAR_9->wait_event);
 }


 if (VAR_9->irq_status & VAR_0)
  FUNC_0("Warning: audio FIFO underrun occurs!\n");

 return VAR_6;
}
