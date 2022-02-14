
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {int debugfs_entry; TYPE_1__* funcs; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int verify_crc_source; int set_crc_source; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,struct dentry*,struct drm_crtc*,int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(struct drm_crtc *VAR_3)
{
 struct dentry *VAR_4;

 if (!VAR_3->funcs->set_crc_source || !VAR_3->funcs->verify_crc_source)
  return;

 VAR_4 = FUNC_0("crc", VAR_3->debugfs_entry);

 FUNC_1("control", VAR_0, VAR_4, VAR_3,
       &VAR_1);
 FUNC_1("data", VAR_0, VAR_4, VAR_3,
       &VAR_2);
}
