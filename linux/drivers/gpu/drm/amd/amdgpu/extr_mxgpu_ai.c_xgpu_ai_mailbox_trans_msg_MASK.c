
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int u32 ;
struct amdgpu_device {int dummy; } ;
typedef enum idh_request { ____Placeholder_idh_request } idh_request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_9 (struct amdgpu_device *VAR_7,
       enum idh_request VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11) {
 u32 VAR_12;
 int VAR_13;
 uint8_t VAR_14;







 do {
  FUNC_6(VAR_7, 0);
  VAR_14 = FUNC_7(VAR_7);
  if (VAR_14) {
   FUNC_5("trn=%x ACK should not assert! wait again !\n", VAR_14);
   FUNC_4(1);
  }
 } while(VAR_14);

 VAR_12 = FUNC_1(FUNC_2(VAR_2, 0,
          VAR_3));
 VAR_12 = FUNC_0(VAR_12, VAR_0,
       VAR_1, VAR_8);
 FUNC_3(FUNC_2(VAR_2, 0, VAR_3),
        VAR_12);
 FUNC_3(FUNC_2(VAR_2, 0, VAR_4),
    VAR_9);
 FUNC_3(FUNC_2(VAR_2, 0, VAR_5),
    VAR_10);
 FUNC_3(FUNC_2(VAR_2, 0, VAR_6),
    VAR_11);

 FUNC_6(VAR_7, 1);


 VAR_13 = FUNC_8(VAR_7);
 if (VAR_13)
  FUNC_5("Doesn't get ack from pf, continue\n");

 FUNC_6(VAR_7, 0);
}
