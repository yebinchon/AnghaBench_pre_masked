
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int srbm_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct amdgpu_device*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_11)
{
 int VAR_12;
 uint32_t VAR_13;







 VAR_13 = VAR_0 | (VAR_0 << 16);

 FUNC_2(&VAR_11->srbm_mutex);
 for (VAR_12 = VAR_2; VAR_12 < VAR_4; VAR_12++) {
  FUNC_4(VAR_11, 0, 0, 0, VAR_12);

  FUNC_0(VAR_3, 0, VAR_10, VAR_1);
  FUNC_0(VAR_3, 0, VAR_9, VAR_13);
 }
 FUNC_4(VAR_11, 0, 0, 0, 0);
 FUNC_3(&VAR_11->srbm_mutex);



 for (VAR_12 = VAR_2; VAR_12 < VAR_4; VAR_12++) {
  FUNC_1(VAR_3, 0, VAR_7, 2 * VAR_12, 0);
  FUNC_1(VAR_3, 0, VAR_8, 2 * VAR_12, 0);
  FUNC_1(VAR_3, 0, VAR_5, VAR_12, 0);
  FUNC_1(VAR_3, 0, VAR_6, VAR_12, 0);
 }
}
