
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int fb_start; int fb_end; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

u64 FUNC_1(struct amdgpu_device *VAR_5)
{

 u64 VAR_6 = FUNC_0(VAR_0, 0, VAR_3);
 u64 VAR_7 = FUNC_0(VAR_0, 0, VAR_4);

 VAR_6 &= VAR_1;
 VAR_6 <<= 24;

 VAR_7 &= VAR_2;
 VAR_7 <<= 24;

 VAR_5->gmc.fb_start = VAR_6;
 VAR_5->gmc.fb_end = VAR_7;

 return VAR_6;
}
