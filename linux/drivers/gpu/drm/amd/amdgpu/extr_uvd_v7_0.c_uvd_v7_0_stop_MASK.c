
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int num_uvd_inst; int harvest_config; } ;
struct amdgpu_device {TYPE_1__ uvd; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_7)
{
 uint8_t VAR_8 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_7->uvd.num_uvd_inst; ++VAR_8) {
  if (VAR_7->uvd.harvest_config & (1 << VAR_8))
   continue;

  FUNC_2(VAR_0, VAR_8, VAR_4, 0x11010101);


  FUNC_1(FUNC_0(VAR_0, VAR_8, VAR_3),
    VAR_1,
    ~VAR_1);
  FUNC_3(1);


  FUNC_2(VAR_0, VAR_8, VAR_5,
    VAR_2);
  FUNC_3(5);


  FUNC_2(VAR_0, VAR_8, VAR_6, 0x0);


  FUNC_1(FUNC_0(VAR_0, VAR_8, VAR_3), 0,
    ~VAR_1);
 }
}
