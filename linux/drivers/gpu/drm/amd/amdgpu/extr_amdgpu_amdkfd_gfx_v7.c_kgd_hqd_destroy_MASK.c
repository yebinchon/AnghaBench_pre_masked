
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {scalar_t__ in_gpu_reset; } ;
typedef enum kfd_preempt_type { ____Placeholder_kfd_preempt_type } kfd_preempt_type ;
typedef enum hqd_dequeue_request_type { ____Placeholder_hqd_dequeue_request_type } hqd_dequeue_request_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;


 int VAR_8 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct kgd_dev*,int,int) ;
 struct amdgpu_device* FUNC_4 (struct kgd_dev*) ;
 unsigned int VAR_12 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct kgd_dev*) ;
 scalar_t__ FUNC_13 (unsigned int,unsigned long) ;
 int FUNC_14 (int,int) ;

__attribute__((used)) static int FUNC_15(struct kgd_dev *VAR_17, void *VAR_18,
    enum kfd_preempt_type VAR_19,
    unsigned int VAR_20, uint32_t VAR_21,
    uint32_t VAR_22)
{
 struct amdgpu_device *VAR_23 = FUNC_4(VAR_17);
 uint32_t VAR_24;
 enum hqd_dequeue_request_type VAR_25;
 unsigned long VAR_26, VAR_27;
 int VAR_28;

 if (VAR_23->in_gpu_reset)
  return -VAR_5;

 FUNC_3(VAR_17, VAR_21, VAR_22);
 FUNC_2(VAR_16, 0);

 switch (VAR_19) {
 case 129:
  VAR_25 = VAR_4;
  break;
 case 128:
  VAR_25 = VAR_9;
  break;
 default:
  VAR_25 = VAR_4;
  break;
 }







 FUNC_6(VAR_26);
 FUNC_10();
 VAR_28 = 5000;
 while (1) {
  VAR_24 = FUNC_1(VAR_15);
  if (FUNC_0(VAR_24, VAR_3, VAR_8)) {
   FUNC_8("HW is processing IQ\n");
   goto loop;
  }
  if (FUNC_0(VAR_24, VAR_3, VAR_0)) {
   if (FUNC_0(VAR_24, VAR_3, VAR_10)
     == 3)
    break;




   if (FUNC_0(VAR_24, VAR_3, VAR_11)
     >= 10)
    break;
   FUNC_8("IQ timer is active\n");
  } else
   break;
loop:
  if (!VAR_28) {
   FUNC_9("CP HQD IQ timer status time out\n");
   break;
  }
  FUNC_7(100);
  --VAR_28;
 }
 VAR_28 = 1000;
 while (1) {
  VAR_24 = FUNC_1(VAR_14);
  if (!(VAR_24 & VAR_2))
   break;
  FUNC_8("Dequeue request is pending\n");

  if (!VAR_28) {
   FUNC_9("CP HQD dequeue request time out\n");
   break;
  }
  FUNC_7(100);
  --VAR_28;
 }
 FUNC_5(VAR_26);
 FUNC_11();

 FUNC_2(VAR_14, VAR_25);

 VAR_27 = (VAR_20 * VAR_7 / 1000) + VAR_12;
 while (1) {
  VAR_24 = FUNC_1(VAR_13);
  if (!(VAR_24 & VAR_1))
   break;
  if (FUNC_13(VAR_12, VAR_27)) {
   FUNC_9("cp queue preemption time out\n");
   FUNC_12(VAR_17);
   return -VAR_6;
  }
  FUNC_14(500, 1000);
 }

 FUNC_12(VAR_17);
 return 0;
}
