
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static bool FUNC_3(struct amdgpu_device *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 u32 VAR_15;
 bool VAR_16;

 VAR_11 = FUNC_0(VAR_6);
 if (VAR_10->mode_info.num_crtc) {
  VAR_12 = FUNC_0(VAR_0);
  VAR_13 = FUNC_0(VAR_1);
  VAR_14 = FUNC_0(VAR_9);
 }
 VAR_15 = FUNC_0(VAR_7);


 FUNC_1(VAR_6, (VAR_11 & ~VAR_5));
 if (VAR_10->mode_info.num_crtc) {

  FUNC_1(VAR_0,
         (VAR_12 & ~(VAR_2 |
       VAR_3)));
  FUNC_1(VAR_1,
         (VAR_13 & ~(VAR_2 |
       VAR_3)));
  FUNC_1(VAR_9,
         (VAR_14 & VAR_4));
 }
 FUNC_1(VAR_7, VAR_15 | VAR_8);

 VAR_16 = FUNC_2(VAR_10);


 FUNC_1(VAR_6, VAR_11);
 if (VAR_10->mode_info.num_crtc) {
  FUNC_1(VAR_0, VAR_12);
  FUNC_1(VAR_1, VAR_13);
  FUNC_1(VAR_9, VAR_14);
 }
 FUNC_1(VAR_7, VAR_15);
 return VAR_16;
}
