
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__* hpd; int * pflip; scalar_t__* crtc_vblank_int; int * ring_int; int installed; } ;
struct radeon_device {TYPE_1__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(struct radeon_device *VAR_9)
{
 uint32_t VAR_10 = 0;

 if (!VAR_9->irq.installed) {
  FUNC_1(1, "Can't enable IRQ/MSI because no handler is installed\n");
  FUNC_2(VAR_8, 0);
  return -VAR_0;
 }
 if (FUNC_3(&VAR_9->irq.ring_int[VAR_6])) {
  VAR_10 |= VAR_7;
 }
 if (VAR_9->irq.crtc_vblank_int[0] ||
     FUNC_3(&VAR_9->irq.pflip[0])) {
  VAR_10 |= VAR_2;
 }
 if (VAR_9->irq.crtc_vblank_int[1] ||
     FUNC_3(&VAR_9->irq.pflip[1])) {
  VAR_10 |= VAR_1;
 }
 if (VAR_9->irq.hpd[0]) {
  VAR_10 |= VAR_4;
 }
 if (VAR_9->irq.hpd[1]) {
  VAR_10 |= VAR_3;
 }
 FUNC_2(VAR_5, VAR_10);


 FUNC_0(VAR_5);

 return 0;
}
