
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_ring {int doorbell_index; scalar_t__ use_doorbell; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_10,
       struct amdgpu_ring *VAR_11)
{
 u32 VAR_12;

 VAR_12 = FUNC_1(VAR_6, 0, VAR_7);
 if (VAR_11->use_doorbell) {
  VAR_12 = FUNC_0(VAR_12, VAR_0,
        VAR_4, VAR_11->doorbell_index);
  VAR_12 = FUNC_0(VAR_12, VAR_0,
        VAR_3, 1);
 } else {
  VAR_12 = FUNC_0(VAR_12, VAR_0,
        VAR_3, 0);
 }
 FUNC_2(VAR_6, 0, VAR_7, VAR_12);
 VAR_12 = FUNC_0(0, VAR_1,
       VAR_5, VAR_11->doorbell_index);
 FUNC_2(VAR_6, 0, VAR_8, VAR_12);

 FUNC_2(VAR_6, 0, VAR_9,
       VAR_2);
}
