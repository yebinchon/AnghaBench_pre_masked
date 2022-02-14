
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* f_inode; } ;
struct drm_crtc_crc {int lock; } ;
struct drm_crtc {TYPE_2__* funcs; struct drm_crtc_crc crc; } ;
struct TYPE_4__ {int (* set_crc_source ) (struct drm_crtc*,int *) ;} ;
struct TYPE_3__ {struct drm_crtc* i_private; } ;


 int FUNC_0 (struct drm_crtc_crc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_crtc*,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct drm_crtc *VAR_2 = VAR_1->f_inode->i_private;
 struct drm_crtc_crc *VAR_3 = &VAR_2->crc;

 VAR_2->funcs->set_crc_source(VAR_2, ((void*)0));

 FUNC_1(&VAR_3->lock);
 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->lock);

 return 0;
}
