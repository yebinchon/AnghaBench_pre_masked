
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vi_sdma_mqd {int sdmax_rlcx_rb_rptr; } ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 struct amdgpu_device* FUNC_2 (struct kgd_dev*) ;
 int FUNC_3 (struct vi_sdma_mqd*) ;
 struct vi_sdma_mqd* FUNC_4 (void*) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (unsigned int,unsigned long) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct kgd_dev *VAR_9, void *VAR_10,
    unsigned int VAR_11)
{
 struct amdgpu_device *VAR_12 = FUNC_2(VAR_9);
 struct vi_sdma_mqd *VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 unsigned long VAR_16 = (VAR_11 * VAR_1 / 1000) + VAR_4;

 VAR_13 = FUNC_4(VAR_10);
 VAR_14 = FUNC_3(VAR_13);

 VAR_15 = FUNC_0(VAR_14 + VAR_7);
 VAR_15 = VAR_15 & ~VAR_3;
 FUNC_1(VAR_14 + VAR_7, VAR_15);

 while (1) {
  VAR_15 = FUNC_0(VAR_14 + VAR_5);
  if (VAR_15 & VAR_2)
   break;
  if (FUNC_5(VAR_4, VAR_16))
   return -VAR_0;
  FUNC_6(500, 1000);
 }

 FUNC_1(VAR_14 + VAR_6, 0);
 FUNC_1(VAR_14 + VAR_7,
  FUNC_0(VAR_14 + VAR_7) |
  VAR_3);

 VAR_13->sdmax_rlcx_rb_rptr = FUNC_0(VAR_14 + VAR_8);

 return 0;
}
