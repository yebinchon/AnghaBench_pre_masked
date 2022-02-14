
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_inode; } ;
struct drm_crtc_crc {int lock; scalar_t__ source; int wq; } ;
struct drm_crtc {struct drm_crtc_crc crc; } ;
typedef int poll_table ;
struct TYPE_2__ {struct drm_crtc* i_private; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_crtc_crc*) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_2, poll_table *VAR_3)
{
 struct drm_crtc *VAR_4 = VAR_2->f_inode->i_private;
 struct drm_crtc_crc *VAR_5 = &VAR_4->crc;
 unsigned VAR_6;

 FUNC_1(VAR_2, &VAR_5->wq, VAR_3);

 FUNC_2(&VAR_5->lock);
 if (VAR_5->source && FUNC_0(VAR_5))
  VAR_6 = VAR_0 | VAR_1;
 else
  VAR_6 = 0;
 FUNC_3(&VAR_5->lock);

 return VAR_6;
}
