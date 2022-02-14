
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;
struct armada_crtc {int irq_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct armada_crtc*,int ) ;
 struct armada_crtc* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct drm_crtc *VAR_1)
{
 struct armada_crtc *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;

 FUNC_2(&VAR_2->irq_lock, VAR_3);
 FUNC_0(VAR_2, VAR_0);
 FUNC_3(&VAR_2->irq_lock, VAR_3);
 return 0;
}
