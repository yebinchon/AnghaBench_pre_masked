
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vi_mqd {scalar_t__ cp_hqd_vmid; } ;
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
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct kgd_dev*,int,int) ;
 struct amdgpu_device* FUNC_5 (struct kgd_dev*) ;
 struct vi_mqd* FUNC_6 (void*) ;
 unsigned int VAR_13 ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct kgd_dev*) ;
 int VAR_17 ;
 scalar_t__ FUNC_15 (unsigned int,unsigned long) ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static int FUNC_17(struct kgd_dev *VAR_18, void *VAR_19,
    enum kfd_preempt_type VAR_20,
    unsigned int VAR_21, uint32_t VAR_22,
    uint32_t VAR_23)
{
 struct amdgpu_device *VAR_24 = FUNC_5(VAR_18);
 uint32_t VAR_25;
 enum hqd_dequeue_request_type VAR_26;
 unsigned long VAR_27, VAR_28;
 int VAR_29;
 struct vi_mqd *VAR_30 = FUNC_6(VAR_19);

 if (VAR_24->in_gpu_reset)
  return -VAR_5;

 FUNC_4(VAR_18, VAR_22, VAR_23);

 if (VAR_30->cp_hqd_vmid == 0)
  FUNC_3(VAR_11, VAR_17, 0);

 switch (VAR_20) {
 case 129:
  VAR_26 = VAR_4;
  break;
 case 128:
  VAR_26 = VAR_9;
  break;
 default:
  VAR_26 = VAR_4;
  break;
 }







 FUNC_8(VAR_27);
 FUNC_12();
 VAR_29 = 5000;
 while (1) {
  VAR_25 = FUNC_1(VAR_16);
  if (FUNC_0(VAR_25, VAR_3, VAR_8)) {
   FUNC_10("HW is processing IQ\n");
   goto loop;
  }
  if (FUNC_0(VAR_25, VAR_3, VAR_0)) {
   if (FUNC_0(VAR_25, VAR_3, VAR_10)
     == 3)
    break;




   if (FUNC_0(VAR_25, VAR_3, VAR_12)
     >= 10)
    break;
   FUNC_10("IQ timer is active\n");
  } else
   break;
loop:
  if (!VAR_29) {
   FUNC_11("CP HQD IQ timer status time out\n");
   break;
  }
  FUNC_9(100);
  --VAR_29;
 }
 VAR_29 = 1000;
 while (1) {
  VAR_25 = FUNC_1(VAR_15);
  if (!(VAR_25 & VAR_2))
   break;
  FUNC_10("Dequeue request is pending\n");

  if (!VAR_29) {
   FUNC_11("CP HQD dequeue request time out\n");
   break;
  }
  FUNC_9(100);
  --VAR_29;
 }
 FUNC_7(VAR_27);
 FUNC_13();

 FUNC_2(VAR_15, VAR_26);

 VAR_28 = (VAR_21 * VAR_7 / 1000) + VAR_13;
 while (1) {
  VAR_25 = FUNC_1(VAR_14);
  if (!(VAR_25 & VAR_1))
   break;
  if (FUNC_15(VAR_13, VAR_28)) {
   FUNC_11("cp queue preemption time out.\n");
   FUNC_14(VAR_18);
   return -VAR_6;
  }
  FUNC_16(500, 1000);
 }

 FUNC_14(VAR_18);
 return 0;
}
