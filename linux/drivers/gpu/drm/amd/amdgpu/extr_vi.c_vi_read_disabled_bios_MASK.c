
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ num_crtc; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static bool FUNC_5(struct amdgpu_device *VAR_12)
{
 u32 VAR_13;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 u32 VAR_17;
 bool VAR_18;

 VAR_13 = FUNC_0(VAR_8);
 if (VAR_12->mode_info.num_crtc) {
  VAR_14 = FUNC_0(VAR_9);
  VAR_15 = FUNC_0(VAR_10);
  VAR_16 = FUNC_0(VAR_11);
 }
 VAR_17 = FUNC_1(VAR_7);


 FUNC_2(VAR_8, (VAR_13 & ~VAR_0));
 if (VAR_12->mode_info.num_crtc) {

  FUNC_2(VAR_9,
         (VAR_14 & ~(VAR_1 |
       VAR_2)));
  FUNC_2(VAR_10,
         (VAR_15 & ~(VAR_3 |
       VAR_4)));
  FUNC_2(VAR_11,
         (VAR_16 & ~VAR_6));
 }
 FUNC_3(VAR_7, VAR_17 | VAR_5);

 VAR_18 = FUNC_4(VAR_12);


 FUNC_2(VAR_8, VAR_13);
 if (VAR_12->mode_info.num_crtc) {
  FUNC_2(VAR_9, VAR_14);
  FUNC_2(VAR_10, VAR_15);
  FUNC_2(VAR_11, VAR_16);
 }
 FUNC_3(VAR_7, VAR_17);
 return VAR_18;
}
