
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
struct amdgpu_audio_pin {int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_2,
      struct amdgpu_audio_pin *VAR_3,
      bool VAR_4)
{
 if (!VAR_3)
  return;

 FUNC_0(VAR_3->offset, VAR_1,
      VAR_4 ? VAR_0 : 0);
}
