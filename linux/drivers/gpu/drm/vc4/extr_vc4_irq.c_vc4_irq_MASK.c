
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vc4_dev {int job_lock; int overflow_mem_work; } ;
struct drm_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct vc4_dev* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;

irqreturn_t
FUNC_9(int VAR_7, void *VAR_8)
{
 struct drm_device *VAR_9 = VAR_8;
 struct vc4_dev *VAR_10 = FUNC_6(VAR_9);
 uint32_t VAR_11;
 irqreturn_t VAR_12 = VAR_1;

 FUNC_2();
 VAR_11 = FUNC_0(VAR_2);






 FUNC_1(VAR_2, VAR_11);

 if (VAR_11 & VAR_6) {

  FUNC_1(VAR_3, VAR_6);
  FUNC_3(&VAR_10->overflow_mem_work);
  VAR_12 = VAR_0;
 }

 if (VAR_11 & VAR_4) {
  FUNC_4(&VAR_10->job_lock);
  FUNC_7(VAR_9);
  FUNC_5(&VAR_10->job_lock);
  VAR_12 = VAR_0;
 }

 if (VAR_11 & VAR_5) {
  FUNC_4(&VAR_10->job_lock);
  FUNC_8(VAR_9);
  FUNC_5(&VAR_10->job_lock);
  VAR_12 = VAR_0;
 }

 return VAR_12;
}
