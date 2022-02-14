
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int base; } ;
struct amdgpu_device {TYPE_1__ doorbell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_8,
       bool VAR_9)
{
 u32 VAR_10 = 0;

 if (VAR_9) {
  VAR_10 = FUNC_0(VAR_10, VAR_0, VAR_1, 1) |
        FUNC_0(VAR_10, VAR_0, VAR_2, 1) |
        FUNC_0(VAR_10, VAR_0, VAR_3, 0);

  FUNC_1(VAR_4, 0, VAR_6,
        FUNC_2(VAR_8->doorbell.base));
  FUNC_1(VAR_4, 0, VAR_5,
        FUNC_3(VAR_8->doorbell.base));
 }

 FUNC_1(VAR_4, 0, VAR_7, VAR_10);
}
