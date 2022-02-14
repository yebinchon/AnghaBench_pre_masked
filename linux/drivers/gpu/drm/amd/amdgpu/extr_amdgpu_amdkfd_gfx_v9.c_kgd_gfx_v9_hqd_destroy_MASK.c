
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct v9_mqd {scalar_t__ cp_hqd_vmid; } ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {scalar_t__ in_gpu_reset; } ;
typedef enum kfd_preempt_type { ____Placeholder_kfd_preempt_type } kfd_preempt_type ;
typedef enum hqd_dequeue_request_type { ____Placeholder_hqd_dequeue_request_type } hqd_dequeue_request_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct kgd_dev*,int,int) ;
 struct amdgpu_device* FUNC_5 (struct kgd_dev*) ;
 struct v9_mqd* FUNC_6 (void*) ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct kgd_dev*) ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (unsigned int,unsigned long) ;
 int FUNC_10 (int,int) ;

int FUNC_11(struct kgd_dev *VAR_12, void *VAR_13,
    enum kfd_preempt_type VAR_14,
    unsigned int VAR_15, uint32_t VAR_16,
    uint32_t VAR_17)
{
 struct amdgpu_device *VAR_18 = FUNC_5(VAR_12);
 enum hqd_dequeue_request_type VAR_19;
 unsigned long VAR_20;
 uint32_t VAR_21;
 struct v9_mqd *VAR_22 = FUNC_6(VAR_13);

 if (VAR_18->in_gpu_reset)
  return -VAR_2;

 FUNC_4(VAR_12, VAR_16, VAR_17);

 if (VAR_22->cp_hqd_vmid == 0)
  FUNC_2(VAR_4, 0, VAR_7, VAR_11, 0);

 switch (VAR_14) {
 case 129:
  VAR_19 = VAR_1;
  break;
 case 128:
  VAR_19 = VAR_6;
  break;
 default:
  VAR_19 = VAR_1;
  break;
 }

 FUNC_3(FUNC_1(VAR_4, 0, VAR_10), VAR_19);

 VAR_20 = (VAR_15 * VAR_5 / 1000) + VAR_8;
 while (1) {
  VAR_21 = FUNC_0(FUNC_1(VAR_4, 0, VAR_9));
  if (!(VAR_21 & VAR_0))
   break;
  if (FUNC_9(VAR_8, VAR_20)) {
   FUNC_7("cp queue preemption time out.\n");
   FUNC_8(VAR_12);
   return -VAR_3;
  }
  FUNC_10(500, 1000);
 }

 FUNC_8(VAR_12);
 return 0;
}
