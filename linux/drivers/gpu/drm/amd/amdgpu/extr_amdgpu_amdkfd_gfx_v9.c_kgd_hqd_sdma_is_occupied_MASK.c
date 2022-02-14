
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct v9_sdma_mqd {int sdma_queue_id; int sdma_engine_id; } ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct amdgpu_device* FUNC_1 (struct kgd_dev*) ;
 int FUNC_2 (struct amdgpu_device*,int ,int ) ;
 struct v9_sdma_mqd* FUNC_3 (void*) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_4(struct kgd_dev *VAR_2, void *VAR_3)
{
 struct amdgpu_device *VAR_4 = FUNC_1(VAR_2);
 struct v9_sdma_mqd *VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_2(VAR_4, VAR_5->sdma_engine_id,
         VAR_5->sdma_queue_id);

 VAR_7 = FUNC_0(VAR_6 + VAR_1);

 if (VAR_7 & VAR_0)
  return 1;

 return 0;
}
