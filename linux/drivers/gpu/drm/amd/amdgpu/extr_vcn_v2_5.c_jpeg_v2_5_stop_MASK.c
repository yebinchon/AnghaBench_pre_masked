
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_vcn_inst; int harvest_config; } ;
struct amdgpu_device {TYPE_1__ vcn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_11)
{
 uint32_t VAR_12;
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_11->vcn.num_vcn_inst; ++VAR_13) {
  if (VAR_11->vcn.harvest_config & (1 << VAR_13))
   continue;

  FUNC_2(FUNC_1(VAR_4, VAR_13, VAR_9),
   VAR_5,
   ~VAR_5);

  VAR_12 = FUNC_0(VAR_7, VAR_13, VAR_8);
  VAR_12 |= (VAR_2
   |VAR_1
   |VAR_0
   |VAR_3);
  FUNC_3(VAR_7, VAR_13, VAR_8, VAR_12);


  FUNC_2(FUNC_1(VAR_4, VAR_13, VAR_10),
   VAR_6,
   ~VAR_6);
 }

 return 0;
}
