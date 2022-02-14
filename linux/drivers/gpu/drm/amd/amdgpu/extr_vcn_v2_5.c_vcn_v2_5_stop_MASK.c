
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_vcn_inst; int harvest_config; } ;
struct amdgpu_device {TYPE_1__ vcn; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int,int ,int) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_20)
{
 uint32_t VAR_21;
 int VAR_22, VAR_23;

 VAR_23 = FUNC_5(VAR_20);
 if (VAR_23)
  return VAR_23;

 for (VAR_22 = 0; VAR_22 < VAR_20->vcn.num_vcn_inst; ++VAR_22) {
  if (VAR_20->vcn.harvest_config & (1 << VAR_22))
   continue;

  FUNC_2(VAR_13, VAR_22, VAR_18, VAR_10, 0x7, VAR_23);
  if (VAR_23)
   return VAR_23;

  VAR_21 = VAR_5 |
   VAR_2 |
   VAR_6 |
   VAR_7;
  FUNC_2(VAR_13, VAR_22, VAR_15, VAR_21, VAR_21, VAR_23);
  if (VAR_23)
   return VAR_23;


  VAR_21 = FUNC_0(VAR_13, VAR_22, VAR_14);
  VAR_21 |= VAR_1;
  FUNC_4(VAR_13, VAR_22, VAR_14, VAR_21);

  VAR_21 = VAR_3|
   VAR_4;
  FUNC_2(VAR_13, VAR_22, VAR_15, VAR_21, VAR_21, VAR_23);
  if (VAR_23)
   return VAR_23;


  FUNC_3(FUNC_1(VAR_0, VAR_22, VAR_17),
   VAR_9,
   ~VAR_9);


  FUNC_3(FUNC_1(VAR_0, VAR_22, VAR_19),
   VAR_11,
   ~VAR_11);


  FUNC_3(FUNC_1(VAR_0, VAR_22, VAR_19), 0,
   ~(VAR_12));


  FUNC_4(VAR_13, VAR_22, VAR_18, 0);

  FUNC_6(VAR_20);


  FUNC_3(FUNC_1(VAR_0, VAR_22, VAR_16),
   VAR_8,
   ~VAR_8);
 }

 return 0;
}
