
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct kgd_dev*,scalar_t__,scalar_t__) ;
 struct amdgpu_device* FUNC_4 (struct kgd_dev*) ;
 scalar_t__** FUNC_5 (int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct kgd_dev*) ;

int FUNC_7(struct kgd_dev *VAR_6,
   uint32_t VAR_7, uint32_t VAR_8,
   uint32_t (**VAR_9)[2], uint32_t *VAR_10)
{
 struct amdgpu_device *VAR_11 = FUNC_4(VAR_6);
 uint32_t VAR_12 = 0, VAR_13;
 *VAR_9 = FUNC_5(56 * 2, sizeof(uint32_t), VAR_2);
 if (*VAR_9 == ((void*)0))
  return -VAR_0;

 FUNC_3(VAR_6, VAR_7, VAR_8);

 for (VAR_13 = FUNC_1(VAR_1, 0, VAR_5);
      VAR_13 <= FUNC_1(VAR_1, 0, VAR_4); VAR_13++)
  do { if (FUNC_2(VAR_12 >= 56)) break; (*VAR_9)[VAR_12][0] = (VAR_13) << 2; (*VAR_9)[VAR_12++][1] = FUNC_0(VAR_13); } while (0);

 FUNC_6(VAR_6);

 FUNC_2(VAR_12 != 56);
 *VAR_10 = VAR_12;

 return 0;
}
