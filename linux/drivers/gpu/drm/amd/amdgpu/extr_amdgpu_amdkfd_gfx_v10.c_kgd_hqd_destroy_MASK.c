
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct v10_compute_mqd {scalar_t__ cp_hqd_vmid; } ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;
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
 int FUNC_2 (int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct kgd_dev*,int,int) ;
 struct amdgpu_device* FUNC_6 (struct kgd_dev*) ;
 struct v10_compute_mqd* FUNC_7 (void*) ;
 unsigned int VAR_13 ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct kgd_dev*) ;
 int VAR_17 ;
 scalar_t__ FUNC_16 (unsigned int,unsigned long) ;
 int FUNC_17 (int,int) ;

__attribute__((used)) static int FUNC_18(struct kgd_dev *VAR_18, void *VAR_19,
    enum kfd_preempt_type VAR_20,
    unsigned int VAR_21, uint32_t VAR_22,
    uint32_t VAR_23)
{
 struct amdgpu_device *VAR_24 = FUNC_6(VAR_18);
 enum hqd_dequeue_request_type VAR_25;
 unsigned long VAR_26;
 uint32_t VAR_27;
 struct v10_compute_mqd *VAR_28 = FUNC_7(VAR_19);






 FUNC_5(VAR_18, VAR_22, VAR_23);

 if (VAR_28->cp_hqd_vmid == 0)
  FUNC_4(VAR_6, 0, VAR_11, VAR_17, 0);

 switch (VAR_20) {
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
 FUNC_3(FUNC_2(VAR_6, 0, VAR_15), VAR_25);

 VAR_26 = (VAR_21 * VAR_7 / 1000) + VAR_13;
 while (1) {
  VAR_27 = FUNC_1(FUNC_2(VAR_6, 0, VAR_14));
  if (!(VAR_27 & VAR_1))
   break;
  if (FUNC_16(VAR_13, VAR_26)) {
   FUNC_12("cp queue preemption time out.\n");
   FUNC_15(VAR_18);
   return -VAR_5;
  }
  FUNC_17(500, 1000);
 }

 FUNC_15(VAR_18);
 return 0;
}
