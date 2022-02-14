
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vc4_exec_info {scalar_t__ seqno; } ;
struct vc4_dev {int job_lock; int bin_alloc_used; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vc4_exec_info* FUNC_4 (struct vc4_dev*) ;
 int FUNC_5 (struct drm_device*,scalar_t__,unsigned long long,int) ;

int FUNC_6(struct vc4_dev *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 unsigned long VAR_3;
 int VAR_4;
 uint64_t VAR_5 = 0;
 struct vc4_exec_info *VAR_6;

try_again:
 FUNC_2(&VAR_1->job_lock, VAR_3);
 VAR_4 = FUNC_1(~VAR_1->bin_alloc_used);
 if (VAR_4 != 0) {

  VAR_4--;
  VAR_1->bin_alloc_used |= FUNC_0(VAR_4);
  FUNC_3(&VAR_1->job_lock, VAR_3);
  return VAR_4;
 }




 VAR_6 = FUNC_4(VAR_1);
 if (VAR_6)
  VAR_5 = VAR_6->seqno;
 FUNC_3(&VAR_1->job_lock, VAR_3);

 if (VAR_5) {
  int VAR_7 = FUNC_5(VAR_2, VAR_5, ~0ull, 1);

  if (VAR_7 == 0)
   goto try_again;

  return VAR_7;
 }

 return -VAR_0;
}
