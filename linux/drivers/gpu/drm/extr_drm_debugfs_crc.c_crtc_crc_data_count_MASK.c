
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_crc {int tail; int head; int lock; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc_crc *VAR_1)
{
 FUNC_1(&VAR_1->lock);
 return FUNC_0(VAR_1->head, VAR_1->tail, VAR_0);
}
