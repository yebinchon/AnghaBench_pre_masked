
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 int FUNC_3 () ;
 struct amdgpu_device* FUNC_4 (struct kgd_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_5(struct kgd_dev *VAR_8, unsigned int VAR_9,
     unsigned int VAR_10)
{
 struct amdgpu_device *VAR_11 = FUNC_4(VAR_8);
 uint32_t VAR_12 = (VAR_9 == 0) ? 0 : (uint32_t)VAR_9 |
   VAR_0;







 FUNC_2(FUNC_1(VAR_1, 0, VAR_3) + VAR_10,
        VAR_12);

 while (!(FUNC_0(FUNC_1(
    VAR_1, 0,
    VAR_5)) &
   (1U << VAR_10)))
  FUNC_3();

 FUNC_2(FUNC_1(VAR_1, 0,
    VAR_5),
        1U << VAR_10);


 FUNC_2(FUNC_1(VAR_2, 0, VAR_6) + VAR_10,
        VAR_12);

 FUNC_2(FUNC_1(VAR_1, 0, VAR_4) + VAR_10,
        VAR_12);

 while (!(FUNC_0(FUNC_1(
    VAR_1, 0,
    VAR_5)) &
   (1U << (VAR_10 + 16))))
  FUNC_3();

 FUNC_2(FUNC_1(VAR_1, 0,
    VAR_5),
        1U << (VAR_10 + 16));


 FUNC_2(FUNC_1(VAR_2, 0, VAR_7) + VAR_10,
        VAR_12);
 return 0;
}
