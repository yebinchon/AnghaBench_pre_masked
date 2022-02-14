
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vc4_dev {scalar_t__ finished_seqno; int job_wait_queue; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 struct vc4_dev* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct drm_device*,scalar_t__) ;
 int VAR_6 ;

int
FUNC_11(struct drm_device *VAR_7, uint64_t VAR_8, uint64_t VAR_9,
     bool VAR_10)
{
 struct vc4_dev *VAR_11 = FUNC_8(VAR_7);
 int VAR_12 = 0;
 unsigned long VAR_13;
 FUNC_0(VAR_6);

 if (VAR_11->finished_seqno >= VAR_8)
  return 0;

 if (VAR_9 == 0)
  return -VAR_1;

 VAR_13 = VAR_5 + FUNC_2(VAR_9);

 FUNC_9(VAR_7, VAR_8, VAR_9);
 for (;;) {
  FUNC_3(&VAR_11->job_wait_queue, &VAR_6,
    VAR_10 ? VAR_2 :
    VAR_3);

  if (VAR_10 && FUNC_6(VAR_4)) {
   VAR_12 = -VAR_0;
   break;
  }

  if (VAR_11->finished_seqno >= VAR_8)
   break;

  if (VAR_9 != ~0ull) {
   if (FUNC_7(VAR_5, VAR_13)) {
    VAR_12 = -VAR_1;
    break;
   }
   FUNC_5(VAR_13 - VAR_5);
  } else {
   FUNC_4();
  }
 }

 FUNC_1(&VAR_11->job_wait_queue, &VAR_6);
 FUNC_10(VAR_7, VAR_8);

 return VAR_12;
}
