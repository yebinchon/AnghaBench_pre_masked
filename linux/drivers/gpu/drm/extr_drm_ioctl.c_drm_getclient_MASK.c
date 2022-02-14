
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int authenticated; } ;
struct drm_device {int dummy; } ;
struct drm_client {scalar_t__ idx; scalar_t__ iocs; scalar_t__ magic; int uid; int pid; int auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct drm_device *VAR_3, void *VAR_4,
    struct drm_file *VAR_5)
{
 struct drm_client *VAR_6 = VAR_4;
 if (VAR_6->idx == 0) {
  VAR_6->auth = VAR_5->authenticated;
  VAR_6->pid = FUNC_0(VAR_1);
  VAR_6->uid = VAR_2;
  VAR_6->magic = 0;
  VAR_6->iocs = 0;

  return 0;
 } else {
  return -VAR_0;
 }
}
