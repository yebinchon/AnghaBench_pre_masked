
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_v3d_wait_bo {scalar_t__ timeout_ns; scalar_t__ pad; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_file*,int ,int,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned long FUNC_4 (scalar_t__) ;

int
FUNC_5(struct drm_device *VAR_3, void *VAR_4,
    struct drm_file *VAR_5)
{
 int VAR_6;
 struct drm_v3d_wait_bo *VAR_7 = VAR_4;
 ktime_t VAR_8 = FUNC_1();
 u64 VAR_9;
 unsigned long VAR_10 =
  FUNC_4(VAR_7->timeout_ns);

 if (VAR_7->pad != 0)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_5, VAR_7->handle,
           1, VAR_10);




 VAR_9 = FUNC_3(FUNC_2(FUNC_1(), VAR_8));
 if (VAR_9 < VAR_7->timeout_ns)
  VAR_7->timeout_ns -= VAR_9;
 else
  VAR_7->timeout_ns = 0;


 if (VAR_6 == -VAR_2 && VAR_7->timeout_ns)
  VAR_6 = -VAR_0;

 return VAR_6;
}
