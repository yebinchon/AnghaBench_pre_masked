
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ uc_start_addr; } ;
struct amdgpu_device {TYPE_1__ mes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_11, bool VAR_12)
{
 uint32_t VAR_13 = 0;

 if (VAR_12) {
  VAR_13 = FUNC_1(VAR_3, 0, VAR_8);
  VAR_13 = FUNC_0(VAR_13, VAR_1, VAR_7, 1);
  FUNC_2(VAR_3, 0, VAR_8, VAR_13);


  FUNC_2(VAR_3, 0, VAR_10,
        (uint32_t)(VAR_11->mes.uc_start_addr) >> 2);


  VAR_13 = FUNC_1(VAR_3, 0, VAR_9);
  VAR_13 = FUNC_0(VAR_13, VAR_2,
         VAR_0, 0);
  FUNC_2(VAR_3, 0, VAR_9, VAR_13);


  VAR_13 = FUNC_0(0, VAR_1, VAR_6, 1);
  FUNC_2(VAR_3, 0, VAR_8, VAR_13);
 } else {
  VAR_13 = FUNC_1(VAR_3, 0, VAR_8);
  VAR_13 = FUNC_0(VAR_13, VAR_1, VAR_6, 0);
  VAR_13 = FUNC_0(VAR_13, VAR_1,
         VAR_5, 1);
  VAR_13 = FUNC_0(VAR_13, VAR_1, VAR_7, 1);
  VAR_13 = FUNC_0(VAR_13, VAR_1, VAR_4, 1);
  FUNC_2(VAR_3, 0, VAR_8, VAR_13);
 }
}
